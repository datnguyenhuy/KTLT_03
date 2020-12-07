//#include <stdio.h>
//
//int binom(int n, int k) {
//    if (k > n) return 0;
//    if (k == 0) return 1;
//    return binom(n - 1, k) + binom(n - 1, k - 1);
//}
//
//int binom2(int n, int k) {
//
//    # Kh? ?? quy
//    if (k == 0)return 1;
//    if (k > n) return 0;
//
//    int i = 0;
//    float F = 1;
//    while (i < k)
//    {
//        F *= ((float)(n - i) / (i+1));
//        i++;
//    }
//    return F;
//}
//
//int binom3(int n, int k)
//{
//    if (k<0 || k>n) return 0;
//
//    int C[11][11];
//    for (int i = 0; i < n; i++)
//    {
//        C[i][0] = C[i][i] = 0;
//    }
//
//}
//
//int main() {
//    printf("Ho va ten: Nguyen Huy Dat\n");
//    printf("MSSV: 20173006\n\n");
//    for (int n = 1; n <= 10; ++n) {
//        for (int k = 0; k <= n; ++k)
//            printf("%d ", binom(n, k));
//        printf("\n");
//    }
//    for (int n = 1; n <= 10; ++n) {
//        for (int k = 0; k <= n; ++k)
//            printf("%d ", binom2(n, k));
//        printf("\n");
//    }
//    return 0;
//}