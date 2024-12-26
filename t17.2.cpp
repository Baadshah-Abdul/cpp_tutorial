#include <iostream>
using namespace std; 

int prod(int a, int b)
{
	static int  c=0;
	c= c + 1;
	return a*b*c;
}
int main()

{	int a = 2, b = 3;
	int ans = prod(a,b);
	cout << ans << endl;
	return 0; 
}