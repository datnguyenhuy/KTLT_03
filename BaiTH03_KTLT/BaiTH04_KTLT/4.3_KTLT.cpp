//#include <iostream>
//#include <cmath>
//#include <iomanip>
//#include<vector>
//#include <utility>
//#include<tuple>
//using namespace std;
//using Vector = tuple<double, double, double>;
//
//Vector cross_product(Vector a, Vector b) {
//    Vector c = { 0,0,0 };
//    get<0>(c) = get<1>(a) * get<2>(b) - get<2>(a) * get<1>(b);
//    get<1>(c) = get<2>(a) * get<0>(b) - get<0>(a) * get<2>(b);
//    get<2>(c) = get<0>(a) * get<1>(b) - get<1>(a) * get<0>(b);
//    return c;
//}
//
//int main() {
//    cout << "Ho va ten: Nguyen Huy Dat" << endl;
//    cout << "MSSV: 20173006" << endl << endl;
//
//    cout << setprecision(2) << fixed;
//    Vector a = { 2, 4, -0.5 };
//    Vector b = { 1.5, -2, 3.3 };
//    Vector c = cross_product(a, b);
//    cout << get<0>(c) << ' ' << get<1>(c) << ' ' << get<2>(c) << endl;
//    return 0;
//}