#include <iostream>

using namespace std;

int main(void) {
	int* arr = new int[4];
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40;

	// 4���� �� �� ������ ������ �ϳ��� �� ����־��
	// ũ�Ⱑ �� ū �� ������ �����.
	int* temp = new int[8];
	
	// �� ������ ���� �����Ѵ�.
	for (int i = 0; i < 4; i++)
		temp[i] = arr[i];

	// ���� �Ҵ� ���� �����
	delete[] arr;

	// �� �������� ����Ÿ��
	arr = temp;

	// ���ο� ������ ����ֱ�
	arr[4] = 50;

	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";

	// �޸� ������ ���� ���� �����Ҵ�� �޸𸮴� ��� �����
	// delete[] arr �Ǵ� delete[] temp �� �� ����
	delete[] arr;

}