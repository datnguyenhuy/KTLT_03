//#include <stdio.h>
//#include<stdlib.h>
//#include<vector>
//#include<algorithm>
//
//
//using namespace std;
//
//int n, X[100], Y[100], mark[100][100];
//const int hx[] = { 1, 1, 2, 2, -1, -1, -2, -2 };
//const int hy[] = { 2, -2, 1, -1, 2, -2, 1, -1 };
//
//int num_choices(int x, int y) {
//    int res = 0;
//    for (int i = 0; i < 8; ++i) {
//        int u = x + hx[i];
//        int v = y + hy[i];
//        if (u < 1 || v < 1 || u > n || v > n) continue;
//        res += mark[u][v] == 0;
//    }
//    return res;
//}
//
//void process(int i, int x, int y) {
//    if (i > n * n) {
//        for (int j = 1; j < i; ++j)
//            printf("(%d %d)\n", X[j], Y[j]);
//        exit(0);
//    }
//    vector< pair<int, int> > choices; // {num_choices(u, v), j}
//    for (int j = 0; j < 8; ++j) {
//        int u = x + hx[j];
//        int v = y + hy[j];
//        if (u < 1 || v < 1 || u > n || v > n) continue;
//        if (mark[u][v]) continue;
//        int cur_choices = num_choices(u, v);
//        choices.push_back({ cur_choices, j });
//    }
//    sort(choices.begin(), choices.end());
//    for (auto it : choices) {
//        int j = it.second;
//        int u = x + hx[j];
//        int v = y + hy[j];
//        mark[u][v] = 1;
//        X[i] = u; Y[i] = v;
//        process(i + 1, u, v);
//        mark[u][v] = 0;
//    }
//}
//
//int main()
//{
//    printf("Ho va ten: Nguyen Huy Dat\n");
//    printf("MSSV: 20173006\n\n");
//    n = 8;
//    mark[1][1] = 1;
//    X[1] = Y[1] = 1;
//    process(2, 1, 1);
//    return 0;
//}