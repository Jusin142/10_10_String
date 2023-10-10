#include<iostream>
#include"CString.h"
#include<string>

using namespace std;



int main()
{
	CString name = "1";
	CString test = "22";

	test = "333";
	name = test;
	

	cout << name << endl;
	cout << test << endl;

	return 0;
}

