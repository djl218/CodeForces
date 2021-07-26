import java.util.Scanner;

// Time: O(n)
// Space: O(1)
// https://codeforces.com/problemset/problem/1486/A
public class ShiftingStacks {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            boolean isInc = true;
            int minimumNeeded = 0;
            long sum = 0;
            for (int i = 0; i < n; i++) {
                minimumNeeded += i;
                sum += in.nextInt();
                if (sum < minimumNeeded) {
                    isInc = false;
                }
            }
            System.out.println(isInc ? "YES" : "NO");
        }
        in.close();
    }
}