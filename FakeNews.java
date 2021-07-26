import java.util.*;
// https://codeforces.com/problemset/problem/802/G

// n = s.length()
// Time: O(n)
// Space: O(1)
public class FakeNews {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        String h = "heidi";
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == h.charAt(j)) {
                j++;
                if (j == h.length()) {
                    break;
                }
            }
        }
        if (j == h.length()) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        in.close();
    }
}