//#include<iostream>
//using namespace std;
//
//int x[16];
//
//void hamming(int i,int N, int num)
//{
//	if (i>=N) 
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cout << x[j];
//		}
//		cout << endl;
//		return;
//    }
//	if (i < N - num)
//	{
//		x[i] = 0;
//		hamming(i + 1, N, num);
//	}
//	if (num > 0)
//	{
//		x[i] = 1;
//		hamming(i + 1,N, num - 1);
//	}
//}
//int main()
//{
//	int T;
//	cin >> T;
//	int *test=(int*)malloc(2 * T * sizeof(int));
//	for (int i = 0; i < T; i++)
//	{
//		cin >> *(test + 2 * i) >> *(test + 2 * i +1);
//	}
//	for (int i = 0; i < T; i++)
//	{
//		hamming(0, *(test + 2 * i), *(test + 2 * i + 1));
//		cout << endl;
//	}
//	return 0;
//}