#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class MString {
public:
	// ������(constructor) : ��ü�� ����(�޸𸮿� �Ҵ�� ��)�� �� ȣ��Ǵ� �Լ�
	// Ŭ�����̸��� ����, ��ȯ���� ����
	MString(const char* str)
	{
		size_ = strlen(str);
		// �ʿ��� ���̸�ŭ ���ڿ� �����Ҵ�
		c_str_ = new char[size_ + 1];	// + 1 : null ����
		strcpy(c_str_, str);
		cout << "MString ������ ȣ�� �Ϸ�" << endl;
	}

	// �Ҹ���(dextructor) : ��ü�� �Ҹ�(�޸𸮿� ������ ��)�� �� ȣ��Ǵ� �Լ�
	// ~Ŭ�����̸�, ��ȯ���� �Ű����� ����
	~MString()
	{
		// �����ڿ��� �����Ҵ��� ���� ����
		delete[] c_str_;
		cout << "MString �Ҹ��� ȣ�� �Ϸ�" << endl;
	}

	// getter
	unsigned int size() { return size_; }
	char* c_str() { return c_str_; }

private:
	unsigned int size_;		// ���ڿ��� ����
	char* c_str_;			// ���ڿ��� ����Ű�� �ּ�
};

int main(void)
{
	MString str1 = MString("Aitai");
	cout << str1.c_str() << endl;

	return 0;
}