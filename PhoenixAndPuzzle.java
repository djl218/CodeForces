import java.util.Scanner;

// Time: O(sqrt(n))
// Space: O(1)
// https://codeforces.com/problemset/problem/1515/B
public class PhoenixAndPuzzle {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            if (n % 2 == 0 && isSquare(n / 2)) {
                System.out.println("YES");
            } else if (n % 4 == 0 && isSquare(n / 4)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        in.close();
    }

    private static boolean isSquare(int num) {
        int squared = (int) Math.sqrt(num);
        return num == squared * squared;
    }
}