//#include <iostream>
//#include <stack>
//using namespace std;
//
//int n, k;
//int x[100];
//
//void go(int i, int num) {
//    // num < k
//    if (i >= n) {
//        for (int j = 0; j < n; ++j) cout << x[j];
//        cout << endl;
//        return;
//    }
//    x[i] = 0;
//    go(i + 1, 0);
//    if (num + 1 < k) {
//        x[i] = 1;
//        go(i + 1, num + 1);
//    }
//}
//
//struct frame {
//    int i;
//    int num;
//    int where; // 0, 1, 2
//};
//
//void go2() {
//    stack<frame> S;
//    S.push({ 0, 0, 0 });
//    while (!S.empty()) {
//        frame& top = S.top();
//        if (top.i >= n) {
//            for (int j = 0; j < n; ++j) cout << x[j];
//            cout << endl;
//            S.pop();
//            continue;
//        }
//        if (top.where == 2) {
//            S.pop();
//            continue;
//        }
//        if (top.where == 1) {
//            if (top.num + 1 < k) {
//                x[top.i] = 1;
//                S.push({ top.i + 1, top.num + 1, 0 });
//            }
//        }
//        else {
//            // where == 0
//            x[top.i] = 0;
//            S.push({ top.i + 1, 0, 0 });
//        }
//        top.where++;
//    }
//}
//
//int main() {
//    printf("Ho va ten: Nguyen Huy Dat\n");
//    printf("MSSV: 20173006\n\n");
//    n = 6;
//    k = 2;
//    go2();
//    return 0;
//}