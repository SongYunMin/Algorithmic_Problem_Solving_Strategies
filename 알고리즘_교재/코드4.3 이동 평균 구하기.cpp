//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//// 이동평균 : N개의 측정치가 주어질 때 
//// 매달 M달 간의 이동 평균을 계산하는 프로그램
//
//vector<double> movingAverage1(const vector<double>& A, int M)
//{
//	vector<double> ret;
//	int N = A.size();
//	for (int i = M - 1; i < N; ++i) {
//		// A[i]까지의 이동 평균 구하기
//		double partialSum = 0;
//		for (int j = 0; j < M; ++j) {
//			partialSum += A[i - j]; 
//			ret.push_back(partialSum / M);
//		}
//	}
//	return ret;
//}
//
//int main(void)
//{
//	vector<double> A = {1,2,3,4,5,6,7,8,9,10,11,12};
//	vector<double> Result;
//	int M = 3;
//	Result = movingAverage1(A,3);
//	
//	for (int i = 0; i < Result.size(); i++) {
//		cout << Result[i] << endl;
//	}
//	return 0;
//}