//#include <iostream>
//using namespace std;
//
//int n, c[100][100];
//
////# Khai báo thêm bi?n n?u c?n
//int node[100]; // l?u các ??nh trên ???ng ?i t?t nh?t
//int curnode[100]; // l?u các ??nh trên ???ng ?i hi?n t?i
//
//int result; // k?t qu? t?t nh?t
//int curresult; // t?ng tr?ng s? ??n hi?n t?i
//
//int mark[100];
//
//void init() {
//    node[1] = curnode[1] = 1;
//    mark[1] = 1;
//    result = 1e9; // 1 t?  
//}
//
//void print() {
//    cout << result << endl;
//}
//
//void process(int i, int x) {
//    if (i > n) {
//        curnode[i] = 1;
//        curresult += c[x][1];
//    }
//    if (curresult >= result) {
//        if (i > n)
//            curresult -= c[x][1];
//        return;
//    }
//    if (i > n) {
//        result = curresult;
//        for (int j = 1; j <= n + 1; ++j) node[j] = curnode[j];
//        if (i > n) curresult -= c[x][1];
//        return;
//    }
//    for (int u = 1; u <= n; ++u) {
//        if (mark[u]) continue;
//        mark[u] = 1;
//        curresult += c[x][u];
//        curnode[i] = u;
//        process(i + 1, u);
//        mark[u] = 0;
//        curresult -= c[x][u];
//    }
//}
//
//int main() {
//    printf("Ho va ten: Nguyen Huy Dat\n");
//    printf("MSSV: 20173006\n\n");
//    cin >> n;
//    for (int i = 1; i <= n; ++i)
//        for (int j = 1; j <= n; ++j)
//            cin >> c[i][j];
//    init();
//    process(2, 1);
//    print();
//    return 0;
//}