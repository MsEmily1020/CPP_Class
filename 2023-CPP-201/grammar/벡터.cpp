#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	vector<int> arr;
	arr.reserve(4); // ������ ũ�⸦ 4�� ����
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40;

	// 4���� �� �� ������ ������ �ϳ��� �� ����־��
	arr.push_back(50);

	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
}