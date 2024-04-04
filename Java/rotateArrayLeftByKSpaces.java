import java.util.Arrays;

public class rotateArrayLeftByKSpaces {

  public static void rotate(int[] nums, int k) {
    int array_length = nums.length;
    int[] temp_array = new int[nums.length];

    // store up to kth index in an seperate array
    for (int i = 0; i < k; i++) {
      temp_array[i] = nums[i];
    }
    // from kth index to the rest moved to the first index
    for (int i = k; i < array_length; i++) {
      nums[i - k] = nums[i];
    }
    // the temp array's elements are added
    // temp_array[i - (array_length - k)]; = temp_array[4 - (4)]; and next
    // temp_array[5 - (4)];
    for (int i = array_length - k; i < array_length; i++) {
      nums[i] = temp_array[i - (array_length - k)];
    }

    String str = Arrays.toString(nums);
    str = str.replaceAll(" ", "");
    System.out.println(str);

  }

  public static void main(String[] args) {
    int[] arr = { 1, 2, 3, 4, 5, 6, 7 };

    int k = 3;
    rotate(arr, k);
  }
}
