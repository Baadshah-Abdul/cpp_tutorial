#include <iostream>
using namespace std;

class Complex{
	int a, b;
public:
	void setNum(int n1, int n2){
		a= n1;
		b= n2;
	}
	void printNum(){
		cout<<"Complex Num: "<<a<<" + "<<b<<"i"
		<<endl;
	}
	friend Complex sumComplex(Complex o1, 
		Complex o2);
};
Complex sumComplex(Complex o1, Complex o2){
	Complex o3;
	o3.setNum((o1.a + o2.a), (o1.b + o2.b));
	return o3;
}
int main(){
	Complex c1, c2, sum;
	c1.setNum(1,4);
	c1.printNum();

	c2.setNum(2,5);
	c2.printNum();

	sum = sumComplex(c1, c2);
	sum.printNum();
	return 0;
}