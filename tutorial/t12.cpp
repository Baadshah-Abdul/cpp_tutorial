#include <iostream>
#include <iomanip>	
using namespace std;

int main()
{
	//Pointer --> data type which holds address of another data type
	int a = 3;
	int*b = &a;
	//& --> (Aaddress of) operator
	cout<<b<<endl<<&a<<endl;
	//* --> (value at) Dereference operator
	cout<<*b<<endl;
	return 0;
}