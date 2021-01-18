class Solution {
  public static int solution(int total_lambs) {
    // System.out.println(Solution.fib(total_lambs));
    // System.out.println(Solution.twopow(total_lambs));
    return Solution.fib(total_lambs) - Solution.twopow(total_lambs);
  }
  public static int twopow(int x) {
    int current_val = 1, count = 1, sum = 1;

    while (true) {
      current_val <<= 1;

      if (sum + current_val <= x) {
        sum+= current_val;
        count++;
      } else {
        break;
      }
    }
    return count;
  }
  public static int fib(int x) {
    if (x == 1) return 1;
    if (x == 2) return 2;
    int a = 1, b = 1, sum = 2, count = 2;

    while (true) {
      b = a + b;
      a = b - a;

      if (sum + b <= x) {
        sum += b;
        count++;
      } else {
        break;
      }
    }
    return count;
  }
}

public class a {
  public static void main(String[] args) {
    int ans = Solution.solution(1000000000);
    System.out.println(ans);
  }
}
