#include <vector>
#include <iostream>

using namespace std;

// 2번째 버전 알고리즘

vector<double> movingAverage2(const vector<double>& A, int M) {
	vector<double> ret;						// vector 선언
	int N = A.size();						// 길이 구함
	double partialSum = 0;					// 변수 선언
	for (int i = 0; i < M - 1; ++i) {
		partialSum += A[i];					// 측정치 저장
	}
	for (int i = M - 1; i < N; ++i) {		// M - 1개부터 구할 수 있음
		partialSum += A[i];
		ret.push_back(partialSum / M);
		partialSum -= A[i - M + 1];
	}
	return ret;
}
int main(void)
{
	+ 
	vector<double> A = {1,2,3,4,5,6,7,8,9,10,11,12};
	vector<double> Result;
	int M = 3;
	Result = movingAverage2(A,3);
	
	for (int i = 0; i < Result.size(); i++) {
		cout << Result[i] << endl;
	}
	return 0;
}