class Solution {
  public static String solution(int[] xs) {
    int index = 0;
    int[] ans = new int[xs.length];

    int least_neg = Integer.MIN_VALUE;
    int count_pos = 0;
    int count_neg = 0;
    boolean isZeroExist = false;

    for (int i = 0;i < xs.length; i++) {
      if (xs[i] > 0) {
        count_pos++;
        ans[index++] = xs[i];
      } else if (xs[i] < 0) {
        count_neg++;
        ans[index++] = xs[i];

        if (least_neg < xs[i]) {
          least_neg = xs[i];
        }
      } else {
        isZeroExist = true;
      }
    }

    if (count_pos == 0 && count_neg <= 1 && isZeroExist) {
      return "0";
    }
    if (count_pos == 0 && count_neg <= 1 && !isZeroExist) {
      return Integer.toString(least_neg);
    }

    String res = "1";

    if (count_neg % 2 == 1) {
      for (int i = 0; i < xs.length; i++) {
        if (ans[i] == least_neg) {
          ans[i] = 0;
          break;
        }
      }
    }

    for (int i = 0; i < xs.length; i++) {
      if (ans[i] != 0) {
        res = Solution.mul(res, Integer.toString(Math.abs(ans[i])));
      }
    }

    return res;
  }
  public static String mul(String a, String b) {
    int max = 151;

    int[][] arr = new int[max][max];
    for (int i = 0; i < max; i++) {
      for (int j = 0; j < max; j++) {
        arr[i][j] = 0;
      }
    }

    int a_max_index = a.length() - 1;
    int b_max_index = b.length() - 1;

    for(int i = a_max_index; i >= 0; i--) {
      int carry = 0;
      for(int j = b_max_index; j >= 0; j--) {
        int val = Solution.chartoString(a.charAt(i)) * Solution.chartoString(b.charAt(j));
        val += carry;

        carry = val / 10;
        val = val % 10;

        // System.out.println(
        //   (a_max_index - i) + "-" + (max - 1 - (b_max_index - j) - ((a_max_index - i))) + "->" + val
        // );

        arr[a_max_index - i][max - 1 - (b_max_index - j) - ((a_max_index - i))] = val;
      }
      // System.out.println(
      //   (a_max_index - i) + "-" + (max - 1 - b_max_index - 1 - (a_max_index - i)) + "->" + carry
      // );
      arr[a_max_index - i][max - 1 - b_max_index - 1 - (a_max_index - i)] = carry;
    }

    // for (int i = 0; i <= 10; i++) {
    //   for (int j = 0; j < max; j++) {
    //     System.out.print(arr[i][j]);
    //   }
    //   System.out.println("");
    // }

    int[] ans = new int[max];

    int carry = 0;
    for (int j = max - 1; j >= 0; j--) {
      int val = carry;
      for (int i = 0; i < max; i++) {
        // System.out.println(i + " " + j);
        val += arr[i][j];
      }

      carry = val / 10;
      val = val % 10;

      ans[j] = val;
    }

    String c = "";
    boolean check = false;
    for (int i = 0; i < max; i++) {
      if (ans[i] != 0) {
        check = true;
      }
      if (check) c += ans[i];
      // System.out.print(ans[i]);
    }
    // System.out.println("");


    return c;
  }
  public static int chartoString(char x) {
    return ((int) x) - 48;
  }
}

public class a {
  public static void main(String[] args) {
    int[] xs = {-2};

    String ans = Solution.solution(xs);
    System.out.println(ans);
  }
}
