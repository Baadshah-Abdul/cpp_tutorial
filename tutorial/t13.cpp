#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
	int a[5]={0,1,2,3,4};
	for(int i = 0;i < 5;i++)
	{
		cout<<"array["<<i<<"] = "<<a[i]<<endl;
	}
	
	int* p = a;

	cout << *p<<endl;
	cout << *(p+1)<<endl;
	cout << *(p+2)<<endl;
	cout << *(p+3)<<endl;
	cout << *(p+4)<<endl;

	return 0;
}