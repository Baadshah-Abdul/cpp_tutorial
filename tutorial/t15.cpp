#include <iostream>
using namespace std;

int swapPointer(int *a, int *b)//Pointer
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int swapRef(int &a, int &b)//Reference
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int x = 4, y = 5;
	swapPointer(&x,&y);
	cout<<x<<endl<<y<<endl;
	swapRef(x,y);
	cout<<x<<endl<<y<<endl;

	return 0; 
}