#include <iostream>
#include <string>

using namespace std;

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
	// ��������� �ʱ�ȭ �ϸ� const ��������� �ʱ�ȭ ����
	Student(string _name, int _id, int _age, int _sex, string _department) 
		: name(_name), id(_id), age(_age), sex(_sex), department(_department)
	{
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

	// �����Ҵ�
	Student stu2 = Student("���и�", 1206, 17, 1, "����Ʈ�����");
	stu2.print();
	cout << endl;

	//�����Ҵ�
	// TODO : �����Ҵ� �����ϱ�
	Student* stu3 = new Student("MsEmily1020", 2105, 18, 1, "���̵�����Ʈ�����");
	stu3->print();

	return 0;
}