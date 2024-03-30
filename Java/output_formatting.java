import java.util.*;

public class output_formatting {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    while (sc.hasNext()) {
      String s = sc.next();
      int x = sc.nextInt();

      // Format and print output
      System.out.printf("%-15s%03d%n", s, x);
    }

    sc.close();
  }
}