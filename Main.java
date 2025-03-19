import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int T, N, zeroCounter = 0;

        Scanner scanner = new Scanner(System.in);

        T = scanner.nextInt();
        for (int i = 0; i < T; i++) {
            N = scanner.nextInt();
            while (N >= 5) {
                N /= 5;
                zeroCounter += N;
            }
            System.out.println(zeroCounter);
            zeroCounter = 0;
        }

        scanner.close();
    }
}