public class second_largest {
    public static void main(String as[]) {
        int m = Integer.MIN_VALUE, m2 = Integer.MIN_VALUE;
        int n = 7;
        int a[] = { 1, 2, 3, 4, 5, 6, 7 };
        for (int i = 0; i < n; i++) {
            if (a[i] > m) {
                m2 = m;
                m = a[i];
            }
        }
}