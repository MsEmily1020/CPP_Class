#include <iostream>
#include <string.h>

using namespace std;

class Character {
public :
	// �Ϲ� ������(��������)
	Character(const char* str)
	{
		// 3("abc") + 1('\0')
		str_ = new char[strlen(str) + 1];
		strcpy(str_, str);	// str�� ������ str_�� ����
		cout << "�Ϲݻ����� ȣ��" << endl;
	}
private :
	char* str_;
};

int main(void)
{
	Character ch1 = Character("abc");
}