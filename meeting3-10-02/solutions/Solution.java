import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);

    int R = s.nextInt();
    int G = s.nextInt();
    int B = s.nextInt();

    System.out.println(R*3 + G*4 + B*5);
  }
}
