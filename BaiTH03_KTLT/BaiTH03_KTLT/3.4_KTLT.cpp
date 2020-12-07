//#include <iostream>
//#include<algorithm>
//
//using namespace std;
//int a[1000], n;
//int mem[1000];
///*****************
//# YOUR CODE HERE #
//*****************/
//
//void init() {
//    memset(mem, -1, sizeof(mem));
//    /*****************
//    # YOUR CODE HERE #
//    *****************/
//}
//
////#Quy hoach dong
//int lis(int i) {
//    if (mem[i] != -1) return mem[i]; // ?ã tính lis(i) r?i, tr? v? k?t qu? luôn
//    int f = 1;
//    for (int j = 1; j < i; ++j) {
//        if (a[j] < a[i]) {
//            f = max(f, lis(j) + 1);
//        }
//    }
//    mem[i] = f;
//    return f;
//}
//
////#Truy vet loi giai
//void trace(int i) {
//    if (lis(i) > 1) {
//        for (int j = 1; j < i; ++j) {
//            if (lis(j) + 1 == lis(i)) {
//                trace(j);
//                break;
//            }
//        }
//    }
//    cout << a[i] << ' ';
//}
//
//int main() {
//    printf("Ho va ten: Nguyen Huy Dat\n");
//    printf("MSSV: 20173006\n\n");
//    init();
//    cin >> n;
//    for (int i = 1; i <= n; i++) cin >> a[i];
//    int res = 0, pos = 0;
//    for (int i = 1; i <= n; i++) {
//        if (res < lis(i)) {
//            res = lis(i);
//            pos = i;
//        }
//    }
//    cout << res << endl;
//    trace(pos);
//    return 0;
//}