#include <iostream>
#include <string>

using namespace std;

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����

// ���ɶ����� id, sex ���ڿ�x -> ���ڿ��� ���������ͺ��� ��������� ���� �޸� ���� �䱸
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ�
// class default �� : private / struct default �� : public 
class Student {
public:
	string name;
	// ���� : �񱳿��� �ѹ��� ����, ���ڿ��� ���ڼ���ŭ �ݺ��Ͽ� ��
	// �������� ���������� ���� ������(enum) ��õ
	int id;
	int age;
	// 0 : ����, 1 : ����
	int sex;
	string department;

	// class ��������� ���� �� �ִ�
	void print(void) {
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << id << endl;
		cout << "���� : " << age << endl;
		cout << "����(0 : ����, 1 : ����) : " << sex << endl;
		cout << "�а� : " << department << endl;
	}
};

int main() {
	// (struct) Student �ڷ���
	struct Student student1;
	student1.name = "������";
	student1.id = 2105;
	student1.age = 18;
	student1.sex = 1;
	student1.department = "���̵�� ����Ʈ�����";

	student1.print();
	return 0;
}