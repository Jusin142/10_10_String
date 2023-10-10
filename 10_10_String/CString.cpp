#include"CString.h"


ostream& operator<<(ostream& cout, const CString& _name)
{
	cout << _name.cName;
	return cout;
}