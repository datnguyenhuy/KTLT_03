//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//bool test_1(int* arr, int n) {
//	bool ketqua = true;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == 0 && arr[i + 1] == 0)
//		{
//			ketqua = false;
//		}
//	}
//	return ketqua;
//}
//
//void create(int* arr, int n) {
//	arr[n - 1]++;
//	for (int i = n - 1; i > 0; i--)
//	{
//		if (arr[i] == 2) {
//			arr[i - 1]++;
//			arr[i] = 0;
//		}
//	}
//}
//
//bool test_2(int* arr, int n, int k1, int k2) {
//	int index = 0;
//	bool ketqua = true;
//	if (arr[0] == 0) index = 0;
//	else index = 1;
//	for (int i = 1; i < n - 1; i++)
//	{
//		if (arr[i] == 1) {
//			index++;
//		}
//		else {
//			if (index >= k1 && index <= k2)
//			{
//				index = 0;
//
//			}
//			else ketqua = false;
//		}
//	}
//	if (arr[n - 1] == 0)
//	{
//		if (index<k1 || index > k2) ketqua = false;
//	}
//	else {
//		index++;
//		if (index<k1 || index > k2) ketqua = false;
//	}
//	return ketqua;
//}
//
//void print(int* arr, int n) {
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i];
//	}
//}
//
//int main() {
//	int N, K1, K2;
//	cin >> N >> K1 >> K2;
//	if (K1 <= 0)
//	{
//		if (K2 < 0)
//			return 0;
//		if (N == 1)
//		{
//			cout << 0 << endl << 1;
//			return 0;
//		}
//		else K1 = 1;
//	}
//	int result[200];
//
//	for (int i = 0; i < N; i++) {
//		result[i] = 0;
//	}
//	for (int i = 0; i < pow(2, N) - 1; i++)
//	{
//		create(result, N);
//		if (test_1(result, N)) 
//		{
//			if (test_2(result, N, K1, K2) == true) 
//			{
//				print(result, N);
//				cout << endl;
//			}
//		}
//	}
//
//	return 0;
//}
