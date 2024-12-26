//OOPs- classes and objects

	//cpp initially called c with classes
	//class extention of structures
	// members are public
	//no methods
	//classes = structures + more
	// can have methods and properties
	// can make few members as private or public
	//structures in cpp are typedef
	//you can declare objects along with class definition
	//  class employee
	//	{
	//  	class definition
	//  } harry, rohan, abdul;*/
	// harry,salary = 8 make no sense if salary is 
	// private

#include <iostream>
#include <string>
using namespace std;

class binary
{
		string s;
	public:
		void read(void);
		void chk_bin(void);
		void ones_complement(void);
		void display(void);
} b ;

void binary :: read(void)
{
	cout<<"enter a binary number"<<endl;
	cin>>s;
}
void binary :: chk_bin(void)
{
	for(int i = 0; i < s.length(); i++)
	{
		if(s.at(i)!='0' && s.at(i)!='1')
		{
			cout<<"incorrect binary format"<<endl;
			exit(0);
		}
	}
}
void binary :: ones_complement(void)
{
	chk_bin();
	for(int i = 0; i < s.length(); i++)
	{
		if(s.at(i)=='0')
		{
			s.at(i)= '1';
		}
		else if(s.at(i)=='1')
		{
			s.at(i)= '0';
		}
	}
}
void binary :: display(void)
{
	for(int i = 0; i < s.length(); i++)
	{
		cout<<s.at(i);
 	}
 	cout<<endl;
}

int main()
{
	
	
	//Nesting of member functions
	//binary b;
	b.read();
	//b.chk_bin();
	b.ones_complement();
	b.display();

	return 0;
}
