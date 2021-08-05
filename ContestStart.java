import java.util.Scanner;

// Time: O(1)
// Space: O(1)
// https://codeforces.com/problemset/problem/1539/A
public class ContestStart {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        while (k-- > 0) {
            int n = in.nextInt();
            int x = in.nextInt();
            int t = in.nextInt();
            long dissatisfaction = Math.min(t / x, n - 1);
            long sum = n * dissatisfaction;
            sum -= (dissatisfaction + 1) * dissatisfaction / 2;
            System.out.println(sum);
        }
        in.close();
    }
}