#include <iostream>

using namespace std;

int main(void) {
	int* arr = new int[4];
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40;

	// 4개가 꽉 찬 공간에 데이터 하나를 더 집어넣어보기
	// 크기가 더 큰 새 공간을 만든다.
	int* temp = new int[8];
	
	// 새 공간에 값을 복사한다.
	for (int i = 0; i < 4; i++)
		temp[i] = arr[i];

	// 기존 할당 공간 지우기
	delete[] arr;

	// 새 공간으로 갈아타기
	arr = temp;

	// 새로운 데이터 집어넣기
	arr[4] = 50;

	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";

	// 메모리 누수를 막기 위해 동적할당된 메모리는 모두 지우기
	// delete[] arr 또는 delete[] temp 둘 다 가능
	delete[] arr;

}