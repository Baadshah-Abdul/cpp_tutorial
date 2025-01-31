#include <iostream>
using namespace std;

class First{
	public:
		string c;
		int a;
		float b;
		void getData(int x, float y, string z)
		{
			a = x;
			b = y;
			c = z;
		}
		void show()
		{
			cout<<a<<endl;
			cout<<b<<endl;
			cout<<c<<endl;
		}
};
int main(){
	cout<<"Demonstration of Class and Object<"<endl;
	First obj;
	obj.getData(8, 3.1, "Hello");
	obj.show();
	return 0;
}