#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class MString {
public:
	// ������
	MString(const char* str)
	{
		size_ = strlen(str);
		// �ʿ��� ���̸�ŭ ���ڿ� �����Ҵ�
		c_str_ = new char[size_ + 1];	// + 1 : null ����
		strcpy(c_str_, str);
		cout << "MString ������ ȣ�� �Ϸ�" << endl;
	}

	// �Ҹ���(dextructor)
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
	// new�� �����Ҵ��� ������ �ݵ�� delete�� ���� (���ϸ� �޸� ����)
	MString* str = new MString("Aitai 2-1");

	cout << str->c_str() << endl;

	// str�� delete��, str->c_str_�� delete ����x
	// TODO : �̸� delete ���ִ� �Ҹ�(destructor) ����
	delete str;
	return 0;
}