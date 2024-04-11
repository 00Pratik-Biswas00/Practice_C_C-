import java.text.NumberFormat;
import java.util.*;

public class currency_formatter {
  // java 8
  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    double amount = 12324.134;

    // Formatting for US
    NumberFormat usFormat = NumberFormat.getCurrencyInstance(Locale.US);
    String usFormatted = usFormat.format(amount);

    // Formatting for India
    Locale indiaLocale = new Locale("en", "IN");
    NumberFormat indiaFormat = NumberFormat.getCurrencyInstance(indiaLocale);
    String indiaFormatted = indiaFormat.format(amount);

    // Formatting for China
    Locale chinaLocale = Locale.CHINA;
    NumberFormat chinaFormat = NumberFormat.getCurrencyInstance(chinaLocale);
    String chinaFormatted = chinaFormat.format(amount);

    // Formatting for France
    Locale franceLocale = Locale.FRANCE;
    NumberFormat franceFormat = NumberFormat.getCurrencyInstance(franceLocale);
    String franceFormatted = franceFormat.format(amount);

    // Output the formatted amounts
    System.out.println("US: " + usFormatted);
    System.out.println("India: " + indiaFormatted);
    System.out.println("China: " + chinaFormatted);
    System.out.println("France: " + franceFormatted);

    sc.close();
  }
}
