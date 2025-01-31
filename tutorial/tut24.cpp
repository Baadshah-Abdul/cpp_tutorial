#include <iostream>
using namespace std;

class Employee{
	int id;
	static int count;
public:
	void setData(void){
		cout<<"ID: ";
		cin>>id;
		count++;
	}
	void getData(void){
		cout<<id<<endl;
		cout<<"Employee no: "<<count<<endl;
	}
	static void getCount(){
		cout<<"Count: "<<count<<endl;
	}
};

int Employee:: count;//Static Default  = 0

int main()
{
	Employee Abdul, Moid;
	Abdul.setData();
	Abdul.getData();
	Abdul.getCount();

	Moid.setData();
	Moid.getData();
	Moid.getCount();
	

	return 0;
}