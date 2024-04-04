class rotateByOne {
  public static void main(String[] args) {
    int[] arr = { 1, 2, 3, 4 };
    int length = arr.length;
    int fEle = arr[0];
    for (int i = 1; i < length; i++) {
      arr[i - 1] = arr[i];
    }
    arr[length - 1] = fEle;
    for (int i = 0; i < length; i++)
      System.out.print(arr[i]);
  }
}
