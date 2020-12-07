//#include <iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//#pragma warning(disable:4996)
//
//int n,r,k, c[100][100];
//
//int saveNode[100][100];// hàm l?u các ??nh c?n ?i t?i
//
////# Khai báo thêm bi?n n?u c?n
//int node[100]; // l?u các ??nh trên ???ng ?i t?t nh?t
//int curnode[100]; // l?u các ??nh trên ???ng ?i hi?n t?i
//
//int result; // k?t qu? t?t nh?t
//int curresult; // t?ng tr?ng s? ??n hi?n t?i
//
//char ** path;
//
//int mark[100];
//
//void init() {
//    for (int i = 0; i < n; i++)
//        mark[i] = 0;
//    curresult = 0;
//    node[1] = curnode[1] = saveNode[k][1];
//    mark[saveNode[k][1]] = 1;
//    result = 1e9; // 1 t?  
//}
//
//void print() {
//    if (result == 1e9)
//        result = 0;
//    cout << result << endl;
//}
//
//void process(int i, int x,int num) {
//    if (i == num) {
//        curnode[i] = saveNode[k][num];
//        curresult += c[x][saveNode[k][num]];
//    }
//    if (curresult >= result) {
//        if (i == num)
//            curresult -= c[x][saveNode[k][num]];
//        return;
//    }
//    if (i == num) {
//        result = curresult;
//        for (int j = 1; j <= num + 1; ++j) 
//            node[j] = curnode[j];
//        curresult -= c[x][saveNode[k][num]];
//        return;
//    }
//    for (int u = 2; u < num; ++u) {
//        int v = saveNode[k][u];
//        if (mark[v] || c[x][v] == 0)
//        {
//            //curresult = 1e9+1;
//            continue;
//        }
//        mark[v]= 1;
//        curresult += c[x][v];
//        curnode[i] = v;
//        process(i + 1,v,num);
//        mark[v] = 0;
//        curresult -= c[x][v];
//    }
//}
//
//int main() {
//    cin >> n >> r;
//    for (int i = 1; i <= n; ++i)
//        for (int j = 1; j <= n; ++j)
//            cin >> c[i][j];
//    path = new char* [r];
//    for (int i = 0; i < 1; i++)
//    {
//        path[i] = new char[3*n];
//        getchar();
//        fgets(path[i],3*n,stdin);
//        path[i][strlen(path[i])] = 0;
//        //cout << path[i];
//    }
//    for (int i = 0; i < 1; i++)
//    {
//        int numNode = 0;
//        for (int i = 0; i <= n; i++)
//        {
//            for (int j = 0; j <= n; j++)
//                saveNode[i][j] = 0;
//        }
//        while (1)
//        {
//            numNode++;
//            int j = sscanf(*(path+i)+(2*(numNode-1)), "%d", &saveNode[i][numNode]);
//            if (j != 1) 
//            {
//                numNode--;
//                break;
//            }
//        }
//        k = i;
//        init();
//        process(2, saveNode[k][1], numNode);
//        print();
//        for (int i = 1; i <= numNode; ++i) {
//            cout << node[i] << endl;
//        }
//        cout << endl;
//    }
//   
//    return 0;
//}