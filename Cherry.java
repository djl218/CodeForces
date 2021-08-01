import java.util.Scanner;

// Time: O(n)
// Space: O(n)
// https://codeforces.com/problemset/problem/1554/A
public class Cherry {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            long[] arr = new long[n];
            for (int i = 0; i < n; i++) {
                arr[i] = in.nextInt();
            }
            long max = 0;
            for (int i = 1; i < n; i++) {
                max = Math.max(max, arr[i - 1] * arr[i]);
            }
            System.out.println(max);
        }
        in.close();
    }
}