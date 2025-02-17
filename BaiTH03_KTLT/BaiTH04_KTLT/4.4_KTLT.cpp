//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void print_vector(const vector<int>& a) {
//    for (int v : a) cout << v << ' ';
//    cout << endl;
//}
//
//void delete_even(vector<int>& a) {
//    auto new_end = remove_if(a.begin(), a.end(), [](int x) { return x % 2 == 0; });
//    a.resize(new_end - a.begin());
//}
//
//void sort_decrease(vector<int>& a) {
//    sort(a.rbegin(), a.rend());
//   //  sort(a.begin(), a.end(), [] (int x, int y) { return x < y; });
//}
//
//vector<int> merge_vectors(const vector<int>& a, const vector<int>& b) {
//    vector<int> c;
//    merge(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c), [](int x, int y) {  return x > y; });
//    return c;
//}
//int main() {
//    vector<int> a = { 5, 2, 3, 7, 6, 9, 13, 12, 11 };
//    vector<int> b = { 10, -5, -2, 3, 4, 8, 7, 6, 16, 15 };
//    cout << "Ho va ten: Nguyen Huy Dat" << endl;
//    cout << "MSSV: 20173006" << endl << endl;
//    delete_even(a);
//    cout << "Odd elements of a: ";
//    print_vector(a);
//
//    delete_even(b);
//    cout << "Odd elements of b: ";
//    print_vector(b);
//
//    sort_decrease(a);
//    cout << "Decreasingly sorted a: ";
//    print_vector(a);
//
//    sort_decrease(b);
//    cout << "Decreasingly sorted b: ";
//    print_vector(b);
//
//    vector<int> c = merge_vectors(a, b);
//    cout << "Decreasingly sorted c: ";
//    print_vector(c);
//
//    return 0;
//}
