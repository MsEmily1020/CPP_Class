#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class MString {
public:
	// 일반적인 생성자
	// 생성자(constructor) : 객체가 생성(메모리에 할당될 때)될 때 호출되는 함수
	// 클래스이름과 같다, 반환형이 없다
	MString(const char* str)
	{
		unsigned int str_length = strlen(str);
		// 필요한 길이만큼 문자열 동적할당
		c_str_ = new char[str_length + 1];	// + 1 : null 공간
		strcpy(c_str_, str);
		cout << "MString 생성자 호출 완료" << endl;
	}

	// 복사생성자(별도로 정의하지 않으면 컴파일러가 아래와 같은 복사생성자를 만들어 냄)
	// TODO : 복사된 객체가 소멸될 때 발생하는 에러를 해결하기
	MString(const MString& rhs) 
		: size_(rhs.size_), c_str_(rhs.c_str_)
	{
		cout << "복사생성자 호출" << endl;
	}

	// 소멸자(dextructor) : 객체가 소멸(메모리에 해제될 때)될 때 호출되는 함수
	// ~클래스이름, 반환형과 매개변수 없다
	~MString()
	{
		// 생성자에서 동적할당한 공간 해제
		delete[] c_str_;
		cout << "MString 소멸자 호출 완료" << endl;
	}

	// getter
	unsigned int size() { return size_; }
	char* c_str() { return c_str_; }

private:
	unsigned int size_;		// 문자열의 길이
	char* c_str_;			// 문자열을 가리키는 주소
};

int main(void)
{
	// 일반적인 생성자 호출
	MString str1 = MString("Aitai");

	// 복사생성자 호출
	MString str2 = str1;

	return 0;
}