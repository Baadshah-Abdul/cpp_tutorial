#include <iostream>
using namespace std;


class A{
	int a;
public:
	void setData(int a){
		//a = a;//will set garbage value
		this->a = a;
	}
	void fetData(){ 
		cout<<a<<endl;
	}
};
int main()
{
	A a;
	a.setData(3);
	a.fetData();
	return 0;
}