import java.util.ArrayList;

class Solution {
  public static int[] solution(int[][] m) {
    if (m.length <= 1) {
      int[] output = {1, 1};
      return output;
    }
    // System.out.println(m.length + " " + m[0].length);

    // create matrix double with m
    double[][] mDouble = new double[m.length][m.length];
    for (int i = 0; i < m.length; i++) {
      for (int j = 0; j < m.length; j++) {
        mDouble[i][j] = m[i][j];
      }
    }

    // set self state to 1 if sum is 0
    // and find terminal states and non terminal states
    ArrayList<Integer> term = new ArrayList<Integer>();
    ArrayList<Integer> non_term = new ArrayList<Integer>();
    for (int i = 0; i < mDouble.length; i++) {
      double sum = 0;

      for (int j = 0; j < mDouble.length; j++) {
        sum += mDouble[i][j];
      }

      if (sum == 0) {
        term.add(i);
        mDouble[i][i] = 1;
      } else {
        non_term.add(i);
        for(int j = 0; j < mDouble.length; j++) {
          mDouble[i][j] = mDouble[i][j] / sum;
        }
      }
    }

    // for (int i = 0; i < mDouble.length; i++) {
    //   for (int j = 0; j < mDouble.length; j++) {
    //     System.out.print(mDouble[i][j] + "\t");
    //   }
    //   System.out.println("");
    // }

    // calc I-Q
    double[][] i_q = new double[non_term.size()][non_term.size()];
    for (int i = 0; i < i_q.length; i++) {
      for (int j = 0; j < i_q.length; j++) {
        i_q[i][j] = (i == j ? 1 : 0) - mDouble[non_term.get(i)][non_term.get(j)];
      }
    }

    // calc f
    double f[][] = invert(i_q);

    // calc R
    double[][] r = new double[non_term.size()][term.size()];
    for (int i = 0; i < r.length; i++) {
      for (int j = 0; j < r[i].length; j++) {
        r[i][j] = mDouble[non_term.get(i)][term.get(j)];
      }
    }

    // calc F*R
    double ans[][] = new double[f.length][r[0].length];
    for (int i = 0; i < ans.length; i++) {
      for (int j = 0; j < ans[i].length; j++) {
        ans[i][j] = 0;

        for (int k = 0; k < ans.length; k++) {
          ans[i][j] += f[i][k] * r[k][j];
        }

      }
    }

    // for (int j = 0; j < ans[0].length; j++) {
    //   System.out.print(ans[0][j] .+ " ");
    // }
    // System.out.println("");

    int denominator = 0;
    for (int i = 1; i <= 100; i++) {
      int count = 0;
      for (int j = 0; j < ans[0].length; j++) {
      float temp = ((float) (ans[0][j] * i) % 1);
        if (temp == 0) {
          count++;
        }
      }
      if (count == ans[0].length) {
        denominator = i;
        break;
      }
    }
    // System.out.println(denominator);

    int output[] = new int[ans[0].length + 1];
    for (int j = 0; j < ans[0].length; j++) {
      // System.out.print(Math.round(ans[0][j] * ((float)denominator)) + " ");
      output[j] = (int) Math.round(ans[0][j] * ((float)denominator));
    }
    output[ans[0].length] = denominator;


    // for (int j = 0; j < output.length; j++) {
    //   System.out.print(output[j] + "\t");
    // }
    return output;
  }
  public static double[][] invert(double a[][]) {
    int n = a.length;

    int idx[] = new int[n];
    double b[][] = new double[n][n];
    double x[][] = new double[n][n];

    for (int i = 0; i < n; i++) {
      b[i][i] = 1;
    }

    gaussian(a, idx);

    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        for (int k = 0; k < n; k++) {
          b[ idx[j] ][k] -= a[ idx[j] ][i] * b[ idx[i] ][k];
        }
      }
    }

    for (int i = 0; i < n; i++) {
      x[n - 1][i] = b[ idx[n - 1] ][i] / a[ idx[n - 1] ][n - 1];
      for (int j = n - 2; j >= 0; j--) {
        x[j][i] = b[ idx[j] ][i];
        for (int k = j + 1; k < n; k++) {
          x[j][i] -= a[ idx[j] ][k] * x[k][i];
        }
        x[j][i] /= a[ idx[j] ][j];
      }
    }

    return x;
  }
  public static void gaussian(double a[][], int idx[]) {
    int n = idx.length;
    double c[] = new double[n];

    for (int i = 0; i < n; i++) {
      idx[i] = i;
    }

    for (int i = 0; i < n; i++) {
      double c1 = 0;
      for (int j = 0; j < n; j++) {
        double c0 = Math.abs(a[i][j]);
        if (c0 > c1) {
          c1 = c0;
        }
      }
      c[i] = c1;
    }

    int k = 0;
    for (int j = 0; j < n - 1; j++) {
      double di1 = 0;
      for (int i = j; i < n; i++) {
        double di0 = Math.abs(a[ idx[i] ][j]);
        di0 /= c[ idx[i] ];
        if (di0 > di1) {
          di1 = di0;
          k = i;
        }
      }

      int itmp = idx[j];
      idx[j] = idx[k];
      idx[k] = itmp;

      for (int i = j + 1; i < n; i++) {
        double pj = a[ idx[i] ][j] / a[ idx[j] ][j];
        a[idx[i]][j] = pj;

        for (int l = j + 1; l < n; l++) {
          a[ idx[i] ][l] -= pj * a[ idx[j] ][l];
        }
      }
    }
  }
}

public class a {
  public static void main(String[] args) {
    int[][] m = {
      {0}
    };

    int[] ans = Solution.solution(m);
    for (int i = 0; i < ans.length; i++) {
      System.out.print(ans[i] + " ");
    }
    System.out.println("");
  }
}
