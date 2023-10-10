#pragma once
#include<iostream>
using namespace std;


class CString
{
public:
	CString():len(0),cName(nullptr) {};

	CString(const char* _Name)
	{
		len=strlen(_Name)+1;
		 cName=new char[len];
		//cName=_Name;
		cName = const_cast<char*>(_Name);

	}

	CString(const CString& rCopy)
	{
		len = rCopy.len;
		cName = new char[len];
		strcpy_s(cName, sizeof(cName)/sizeof(char), rCopy.cName);
	}

	~CString()
	{
		cout << "소멸자" << endl;
	};

	CString& operator=(const CString& _Name)
	{
		//cName = _Name.cName;
		len = strlen(_Name.cName) + 1;
		cName = new char[len];
		strcpy_s(cName, sizeof(cName) / sizeof(char), _Name.cName);
		return *this;

	}
	CString& operator=(const char* _Name)
	{
		len = strlen(_Name) + 1;
		cName = new char[len];
		strcpy_s(cName, sizeof(cName)/sizeof(char), _Name);
		return *this;
	}


	

	friend ostream& operator<<(ostream& cout, const CString& _name);
	
		

private:
	  
	char* cName;
	int len;
};

