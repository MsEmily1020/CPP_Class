﻿#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void)
{
	// key:문자열, value:정수
	map<string, int> moving;

	moving["번개맨"] = 1987;
	moving["장희수"] = 2000;
	moving["봉평"] = 1959;

	// map은 순서가 없기 때문에 iterator로만 반복문 해야 함.
	map<string, int>::iterator iter;

	// first는 key, second는 value
	for (iter = moving.begin(); iter != moving.end(); iter++)
		cout << iter->first << " " << iter->second << endl;

}