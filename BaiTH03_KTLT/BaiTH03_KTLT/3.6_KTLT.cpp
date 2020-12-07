//#include <iostream>
//using namespace std;
//
//int gcd(int a, int b) {
//    if (b == 0) return a;
//    return gcd(b, a % b);
//}
//
//int gcd2(int a, int b) {
//    int temp;
//    while (b > 0)
//    {
//        temp = a;
//        a = b;
//        b = temp % a;
//    }
//    return a;
//}
//
//int main() {
//    printf("Ho va ten: Nguyen Huy Dat\n");
//    printf("MSSV: 20173006\n\n");
//    int a, b;
//    cin >> a >> b;
//    cout << gcd(a, b) << endl << gcd2(a, b);
//    return 0;
//}