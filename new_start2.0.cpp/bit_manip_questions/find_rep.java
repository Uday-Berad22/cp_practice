public class find_rep {
    public static void main(String s[]) {

        int j = 0;
        int n = 9;
        int b[] = new int[n + 1];
        int count = 0;
        int a[] = { 1, 2, 2, 2, 3, 3, 3, 4, 5 };
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1] || (i != 0 && a[i] == a[i - 1])) {
                b[j] = i;
                count++;
                j++;
            }
        }
        if (a[n - 1] == a[n - 2]) {
            count++;
            b[j] = n - 1;
        }
        for (int i = 0; i < count; i++) {
            System.out.print(a[b[i]] + " ");
        }
    }
}
