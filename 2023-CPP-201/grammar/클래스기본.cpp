#include <iostream>
#include <string>

using namespace std;

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
struct drink {
	string company;
	string adding;
};

int main() {
	// (struct) drink �ڷ���
	struct drink strawberryMilk;
	strawberryMilk.company = "�������";
	strawberryMilk.adding = "ŷ������";

	cout << "ȸ�� �̸� : " << strawberryMilk.company << "\n÷���� : " << strawberryMilk.adding << endl;
	return 0;
}