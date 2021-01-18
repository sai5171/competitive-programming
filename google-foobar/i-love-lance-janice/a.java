class Solution {
  public static String solution(String x) {
    int len = x.length();
    String ans = "";

    for (int i = 0 ; i < len; i++) {
      if (
        ((int) x.charAt(i)) >= 97 && ((int) x.charAt(i)) <= 122
      ) {
        ans += (char) (122 - (((int) x.charAt(i)) - 97));
      } else {
        ans += x.charAt(i);
      }
    }
    return ans;
  }
}

public class a {
  public static void main(String[] args) {
    String ans = Solution.solution("Yvzs! I xzm'g yvorvev Lzmxv olhg srh qly zg gsv xlolmb!!");
    System.out.println(ans);
  }
}
