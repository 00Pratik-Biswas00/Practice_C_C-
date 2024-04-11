import java.util.*;

public class java_date_time {
  public static String getDay(int day, int month, int year) {
    Calendar cal = Calendar.getInstance();
    cal.set(Integer.valueOf(year), (Integer.valueOf(month) - 1), Integer.valueOf(day));
    return cal.getDisplayName(Calendar.DAY_OF_WEEK, Calendar.LONG, Locale.getDefault()).toUpperCase();
  }

  public static void main(String[] args) {
    System.out.println(getDay(14, 8, 2017));
  }
}
