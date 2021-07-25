import java.util.Scanner;

// n = s.length()
// Time: O(n)
// Space: O(1)
public class AlphabeticalStrings {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        in.nextLine();
        while (t-- > 0) {
            String s = in.nextLine();
            int n = s.length(), j;
            for (j = 0; j < n; j++) {
                if (s.charAt(j) == 'a') {
                    break;
                }
            }
            if (j == n) {
                System.out.println("NO");
            } else {
                int i = 1;
                int l = j - 1, r = j + 1;
                while (i < n) {
                    if (l >= 0 && s.charAt(l) == (char) (i + 'a')) {
                        l--;
                    } else if (r < n && s.charAt(r) == (char) (i + 'a')) {
                        r++;
                    }
                    i++;
                }
                if (l == -1 && r == n) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            }
        }
        in.close();
    }
}