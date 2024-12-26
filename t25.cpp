#include <iostream>
using namespace std;

class employee
{
	int id;
	int salary;
public:
	void setId(void)
	{
		salary = 10000;
		cout<<"Enter emp id: "<<endl;
		cin>>id;
	}
	void getId(void)
	{
		cout<<"emp id: "<<id<<endl;
	}
};

int main()
{
	// employee abdul;
	// abdul.setId();
	// abdul.getId();
	employee emp[3];
	for (int i = 0; i < 3; i++)
	{
		emp[i].setId();
	}
	for (int i = 0; i < 3; i++)
	{
		emp[i].getId();
	}


	return 0;
}