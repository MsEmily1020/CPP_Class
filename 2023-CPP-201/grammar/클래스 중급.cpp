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
	const int len = 1000000;
	MString* str = new MString("Aitai 2-1");
	
	cout << str->c_str() << endl;
	delete str;
	return 0;
}