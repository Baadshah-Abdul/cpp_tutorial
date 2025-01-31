#include <iostream>
#include <iomanip>
using namespace std;
const int a = 45;
int main()
{
	const int a = 45;
	//a = 134;// you will get an error because a constant
	cout<<a<<endl;
	int b = 3;
	//--- Manipulator--
	cout<<setw(5)<<b<<endl;//creates 5 character space
	//--- Operator Precedance--
	
	return 0;
}