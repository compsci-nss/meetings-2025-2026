import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);

    int N = s.nextInt();
    int C = s.nextInt();
    int P = s.nextInt();

    s.close();

    if (N <= C * P) System.out.println("yes");
    else System.out.println("no");
  }
}
