#include<iostream>
#include"CString.h"
#include<string>

using namespace std;



int main()
{
	CString name = "1";
	CString test = "22";
	CString car = test;
	CString Man(name);

	test = "333";
	name = test;
	Man = "123456";
	car = name;
	//test = "444";
	name = "ppppp";
	
	cout << Man << endl;
	cout << car << endl;
	cout << name << endl;
	cout << test << endl;

	return 0;
}

