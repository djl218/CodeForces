import java.util.Scanner;

// Time: O(n)
// Space: O(n)
// https://codeforces.com/problemset/problem/1265/A
public class BeautifulString {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        in.nextLine();
        while (t-- > 0) {
            String s = in.nextLine();
            int n = s.length();
            boolean isBeautiful = true;
            for (int i = 1; i < n; i++) {
                if (s.charAt(i) == '?') {
                    continue;
                }
                if (s.charAt(i) == s.charAt(i - 1)) {
                    isBeautiful = false;
                    break;
                }
            }
            char[] arr = s.toCharArray();
            if (isBeautiful) {
                String abc = "abc";
                for (int i = 0; i < n; i++) {
                    if (arr[i] == '?') {
                        for (int j = 0; j < abc.length(); j++) {
                            if (i == 0) {
                                if (i == n - 1) {
                                    arr[i] = abc.charAt(j);
                                    break;
                                }
                                if (arr[i + 1] != abc.charAt(j)) {
                                    arr[i] = abc.charAt(j);
                                    break;
                                }
                            } else if (i == n - 1) {
                                if (arr[i - 1] != abc.charAt(j)) {
                                    arr[i] = abc.charAt(j);
                                    break;
                                }
                            } else {
                                if (arr[i - 1] != abc.charAt(j) && arr[i + 1] != abc.charAt(j)) {
                                    arr[i] = abc.charAt(j);
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            System.out.println(isBeautiful ? new String(arr) : -1);
        }
        in.close();
    }
}