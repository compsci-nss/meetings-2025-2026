import java.util.Solution;

public class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    String instructions = s.nextLine();
    int floor = 0;

    for (int i = 0; i < instructions.length(); i++) {
      if (instructions.charAt(i) == "(") {
        floor++;
      } else {
        floor--;
      }
    }

    System.out.println(floor);
  }
}
