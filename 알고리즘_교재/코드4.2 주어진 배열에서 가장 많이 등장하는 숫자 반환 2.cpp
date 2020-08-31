//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int majority2(const vector<int>& A) {
//	int N = A.size();
//	// 0으로 초기화된 101개의 원소를 가지는 vector count 생성
//	vector<int> count(101, 0);
//	for (int i = 0; i < N; ++i) {
//		// 점수의 입력받은 점수의 자리(index)count를 증가시킴
//		count[A[i]]++;
//	}
//	int majority = 0;
//	for (int i = 1; i <= 100; ++i) {
//		if (count[i] > count[majority]) {
//			majority = i;
//		}
//	}
//	return majority;
//}
//
//int main(void)
//{
//	vector<int> N{ 23,61 ,51,61,31 };
//	
//	cout << "중간고사 점수는 : "<< majority2(N);
//
//
//	return 0;
//}