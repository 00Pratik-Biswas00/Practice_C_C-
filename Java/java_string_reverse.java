import java.util.*;

public class java_string_reverse {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine().toLowerCase();
    int l = s.length();
    String rev = "";

    for (int i = l - 1; i >= 0; i--) {
      rev = rev + s.charAt(i);
    }
    if (s.equals(rev))
      System.out.println("Yes");

    else
      System.out.println("No");
    sc.close();
  }
}
