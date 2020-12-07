//#include<iostream>
//using namespace std;
//int A[], N, K1, K2;
//int sum = 0;
//void showLich() {
//	for (int i = 0; i < N; i++)
//		cout << A[i];
//	cout << '\n';
//}
//bool lapLich(int ngaynghi) {
//	int soNgayLamViec = N - ngaynghi - 1;
//	if ((soNgayLamViec >= K1 && soNgayLamViec <= K2) || soNgayLamViec == 0) {
//		A[ngaynghi] = 0;
//		showLich();
//		A[ngaynghi] = 1;
//		return true;
//	}
//	else if (soNgayLamViec < K1) return false;
//	else {
//		A[ngaynghi] = 0;
//		int i, maxRight;
//		maxRight = ngaynghi + K2 + 1;
//		if (maxRight > N) maxRight = N;
//		for (i = ngaynghi + K1 + 1; i <= maxRight; i++) {
//			//if (!lapLich(i)) break;
//			lapLich(i);
//		}
//		A[ngaynghi] = 1;
//		return true;
//	}
//}
//bool ll(int ngayNghi) {
//	sum++;
//	int ngayConLai = N - ngayNghi - 1;
//	if (ngayConLai <= 0) {
//		A[ngayNghi] = 0;
//		showLich();
//		A[ngayNghi] = 1;
//		return true;
//	}
//	else if (ngayConLai < K1) return false;
//	else {
//		A[ngayNghi] = 0;
//		int i, right, left;
//		left = ngayNghi + K1 + 1;
//		right = ngayNghi + K2 + 1;
//		if (right > N)right = N;
//		for (i = left; i <= right; i++) {
//			if (!ll(i)) break;
//		}
//		A[ngayNghi] = 1;
//		if (i == left) return false;
//		else return true;
//	}
//}
//int main() {
//	cin >> N >> K1 >> K2;
//	/*if (K1 <= 0)
//	{
//		if (K2 < 0)
//			return 0;
//		if (N == 1)
//		{
//			cout << 0 << endl << 1;
//			return 0;
//		}
//		else K1 = 1;
//	}*/
//	for (int i = 0; i < N; i++) {
//		A[i] = 1;
//	}
//	ll(0);
//	for (int i = K1; i <= K2; i++)
//		ll(i);
//	//cout << "so lan lap:" << sum;
//	//system("pause");
//	return 0;
//}