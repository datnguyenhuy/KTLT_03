//#include <iostream>
//#include<stack>
//using namespace std;
//
//struct state {
//    int i, j;
//    state(int _i = 0, int _j = 0) : i(_i), j(_j) {}
//};
//
//int main() {
//    printf("Ho va ten: Nguyen Huy Dat\n");
//    printf("MSSV: 20173006\n\n");
//    int n, M;
//    cin >> n >> M;
//    int m[100];
//    for (int i = 1; i <= n; ++i) cin >> m[i];
//    int x[100];
//    stack<state> s;
//    //# sum of selected weights
//    int sum = 0;
//    s.push(state(1, -1));
//    while (!s.empty()) {
//        state& top = s.top();
//        if (top.i > n) {
//            if (sum == M) {
//                for (int i = 1; i <= n; ++i) {
//                    if (x[i] == -1) cout << '-' << m[i];
//                    if (x[i] == 1) cout << '+' << m[i];
//                }
//                cout << "=" << M;
//                exit(0);
//            }
//            s.pop();
//            continue;
//        }
//        //# back track
//        if (top.j > -1)
//            sum -= m[top.i] * x[top.i];
//        //# every subtrees are visited
//        if (top.j > 1) {
//            s.pop();
//            continue;
//        }
//        x[top.i] = top.j;
//        sum += m[top.i] * x[top.i];
//        s.push(state(top.i + 1, -1));
//        ++top.j;
//    }
//    cout << -1;
//
//    return 0;
//}