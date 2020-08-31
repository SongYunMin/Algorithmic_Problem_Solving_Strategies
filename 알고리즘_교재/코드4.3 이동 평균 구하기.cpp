//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// �̵���� : N���� ����ġ�� �־��� �� 
//// �Ŵ� M�� ���� �̵� ����� ����ϴ� ���α׷�
//
//vector<double> movingAverage1(const vector<double>& A, int M)
//{
//	vector<double> ret;
//	int N = A.size();
//	for (int i = M - 1; i < N; ++i) {
//		// A[i]������ �̵� ��� ���ϱ�
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
//	vector<double> A{1,2,3,4,5,6,7,8,9,10,11,12};
//	int M = 3;
//	vector<double> result(movingAverage1(A,M));
//	for (int i = 0; i < result.size(); i++) {
//		cout << "�̵� ��� : " << result.at(i) << endl;
//	}
//	
//	return 0;
//}