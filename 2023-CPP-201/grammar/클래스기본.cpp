#include <iostream>
#include <string>

using namespace std;

struct Actor {
	string name;
	string dialog;
};

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����

// ���ɶ����� id, sex ���ڿ�x -> ���ڿ��� ���������ͺ��� ��������� ���� �޸� ���� �䱸
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ�
// class default �� : private / struct default �� : public 
class Student {
public:

	// ������ (constructor) : ��ü ������ �� ȣ���ϴ� �Լ�
	// �����ڸ� ����x -> default�� �Ű������� ���� ������ ����
	Student() {
		name = "������";
		id = 2105;
		age = 18;
		sex = 1;
		department = "���̵�����Ʈ�����";
	}

	// this : ��ü �ڱ��ڽ��� ����Ű�� ������
	// �Ű�������� ���������� ���Ƶ� ���а���
	Student(string name, int id, int age, int sex, string department) {
		this->name = name;
		this->id = id;
		this->age = age;
		this->sex = sex;
		this->department = department;
	}
	
	// class ��������� ���� �� �ִ�
	void print(void) {
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << id << endl;
		cout << "���� : " << age << endl;
		cout << "����(0 : ����, 1 : ����) : " << sex << endl;
		cout << "�а� : " << department << endl;
	}

private:
	string name;
	// ���� : �񱳿��� �ѹ��� ����, ���ڿ��� ���ڼ���ŭ �ݺ��Ͽ� ��
	// �������� ���������� ���� ������(enum) ��õ
	
	int id;
	int age;
	// 0 : ����, 1 : ����
	int sex;
	string department;

};

int main() {
	// (struct) Student �ڷ���
	// Student ������ = Student();

	Student stu1 = Student();
	stu1.print();
	cout << endl;

	Student stu2 = Student("���и�", 1206, 17, 1, "����Ʈ�����");
	stu2.print();
	cout << endl;

	struct Actor JangNara;
	JangNara.name = "�峪��";
	JangNara.dialog = "���Դϴ�.";

	struct Actor* jnr = &JangNara;

	//JangNara.name = (*jnr).name
	cout << "�̸� : " << (*jnr).name << endl;
	cout << "��� : " << (*jnr).dialog << endl;

	return 0;
}