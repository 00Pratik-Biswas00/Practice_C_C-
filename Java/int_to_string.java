import java.util.*;

public class int_to_string {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    Integer x = sc.nextInt();
    String s = x.toString();
    if (s instanceof String) // new thing
      System.out.println("Good job");
    else
      System.out.println("Wrong answer");
    sc.close();
  }
}
