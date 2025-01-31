#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
	int a[5]={0,1,2,3,4};
	a[5] = 111;
	for(int i = 0;i <= 5;i++)
	{
		cout<<"array["<<i<<"] = "<<a[i]<<endl;
	}
	cout<<endl;
	return 0;
}