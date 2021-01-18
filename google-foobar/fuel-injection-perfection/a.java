import java.math.BigInteger;

class Solution {
  public static int solution(String x) {
    BigInteger val = new BigInteger(x);
    int c = 0;

    while(!val.equals(BigInteger.ONE)) {
      // System.out.println(val);

      // even
      if (val.and(BigInteger.ONE).equals(BigInteger.ZERO)) {
        val = val.shiftRight(1);
      } else {
        // if 2nd bit has 0 or val is 3
        if (val.and(new BigInteger("2")).equals(BigInteger.ZERO) || val.equals(new BigInteger("3"))) {
          val = val.subtract(BigInteger.ONE);
        } else {
          val = val.add(BigInteger.ONE);
        }
      }

      c += 1;
    }

    return c;
  }
}

public class a {
  public static void main(String[] args) {
    int ans = Solution.solution("3");
    System.out.println(ans);
  }
}
