import java.util.*;

public class output_formatting {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("================================");
    while (sc.hasNext()) { // new thing
      String s = sc.next();
      int x = sc.nextInt();

      System.out.printf("%-15s%03d%n", s, x); // new thing
    }
    System.out.println("================================");
    sc.close();
  }
}