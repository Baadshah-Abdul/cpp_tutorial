#include <iostream>
using namespace std;
 struct man
 {
 	string name;
 	int age;
 	float weight;
 };

 union money//better memory manegament
 {
   	int rice;
 	float pounds;
 };//only use one at a time


int main()
 {
 	struct man male;
 	union money	m1;
 	enum alphabet{a, b, c}

 	male.name = "Abdul";
 	male.age = 21;
 	male.weight = 70.250;
 	cout<<male.name<<endl;
 	cout<<male.age<<endl;
 	cout<<male.weight<<endl;
 	cout<<m1.rice<<endl;
 	cout<<a<<b<<c<<endl;

 	return 0;
 }