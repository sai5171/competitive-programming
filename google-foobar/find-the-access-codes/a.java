class Solution {
  public static int solution(int[] l) {
    int c = 0;

    for (int i = 1; i < l.length - 1; i++) {
      int x = 0, y = 0;

      for (int j = 0; j < i; j++) {
        if (l[i] % l[j] == 0) x++;
      }
      for (int j = i + 1; j < l.length; j++) {
        if (l[j] % l[i] == 0) y++;
      }
      c += x * y;
    }

    return c;
  }
}

public class a {
  public static void main(String[] args) {
    int[] l = {1, 6, 2};
    int ans = Solution.solution(l);
    System.out.println(ans);
  }
}
