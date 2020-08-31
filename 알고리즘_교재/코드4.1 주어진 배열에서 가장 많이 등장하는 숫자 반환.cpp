#include <iostream>
#include <vector>

using namespace std;

// Parameter Requierment : Vector Array
int majority(const vector<int>& A) {
	int N = A.size();
	int majority = -1;
	int majorityCount = 0;
	// N^2 의 시간 복잡도
	for (int i = 0; i < N; ++i) {
		// A에 등장하는 A[i]의 수를 센다.
		int V = A[i], count = 0;
		for (int j = 0; j < N; ++j) {
			if (A[j] == V) {
				++count;
			}
		}
		if (count > majorityCount) {
			majorityCount = count;
			majority = V;
		}
	}
	return majority;
}

int main(void)
{
	vector<int> A{ 1,2,3,4,5,5,5,6,7,8,9 };

	cout << "가장 많이 등장한 값은 : " << majority(A);

	return 0;
}