#include <iostream>
using namespace std;

class employee
{
	//int id;
	//float salary;
public:
	int id;
	float salary;
	employee(int inpId)
	{
		id = inpId;
		salary = 10000;
	}
	employee()
	{

	}
};

//Derieved class
// class {{derieved-class-name}} : 
//{{visibility-mode}} {{base-class-name}}{ }

class programmer : public employee
{
public:
	int languageCode;
	programmer(int inpId)
	{
		id = inpId;
		languageCode = 9;
	}
};


int main()
{
	employee harry(1), abdul(2);
	cout<<harry.salary<<endl;

	programmer abd(1);
	cout<<abd.languageCode<<endl;
	//wont work when private : cout<<abd.id<<endl;
	cout<<abd.id<<endl;

	return 0;
}