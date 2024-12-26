#include <iostream>
using namespace std;
 int c = 4;
int main()
{
	float c = 5;
	cout<<c<<endl;
	cout<<::c<<endl;//:: can be used to access global variable
	//--Reference Varaible--
	float x = 455;
	float &y = x;
	cout<<y<<endl;
	//--Typecasting--
	float q = 45.576;
	cout<<(int)q<<endl;
	return 0;
}