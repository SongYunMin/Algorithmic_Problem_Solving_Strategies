//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int majority2(const vector<int>& A) {
//	int N = A.size();
//	// 0���� �ʱ�ȭ�� 101���� ���Ҹ� ������ vector count ����
//	vector<int> count(101, 0);
//	for (int i = 0; i < N; ++i) {
//		// ������ �Է¹��� ������ �ڸ�(index)count�� ������Ŵ
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
//	cout << "�߰���� ������ : "<< majority2(N);
//
//
//	return 0;
//}