import java.io.*;
import java.util.*;

class Result {

    public static List<Integer> compareTriplets(List<Integer> a, List<Integer> b) {
        Integer[] res = { 0, 0 };
        for (int i = 0; i < a.size(); i++) {
            int aliceRate = a.get(i);
            int bobRate = b.get(i);
            if (aliceRate > bobRate) {
                res[0]++;
            } else if (aliceRate != bobRate) {
                res[1]++;
            }
        }

        return Arrays.asList(res);
    }

}

class Solution {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        List<Integer> a = new ArrayList<>();
        List<Integer> b = new ArrayList<>();
        for (int i = 0; i < 3; i++)
            a.add(sc.nextInt());
        for (int i = 0; i < 3; i++)
            b.add(sc.nextInt());
        List<Integer> result = Result.compareTriplets(a, b);
        for (Integer i : result) {
            System.out.print(i);
        }
        sc.close();
    }
}
