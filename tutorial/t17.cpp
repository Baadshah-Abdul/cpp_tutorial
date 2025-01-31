#include <iostream>
using namespace std;

class cuboid
{
public:
	float lenght;
	float breadth;
	float height;
	void setL(float l)
	{
		lenght = l;
	}
	void setB(float b)
	{
		breadth = b;
	}
	void setH(float h)
	{
		height = h;
	}
	void Volume()
	{
		float v = lenght*breadth*height;
	}
};
inline int product(int a, int b)
{
	return a*b;
};

int main()
{
	cuboid c4;
	float l;
	float b;
	float h;
	cout<<"Enter Lenght: \n";
	cin>>l;
	cout<<"enter breadth:\n";
	cin>>b;
	cout<<"Enter height:\n";
	cin>>h;
	c4.setH(h);
	c4.setL(l);
	c4.setB(b);
	float ans = c4.Volume();
	cout << ans << endl;

	return 0;
}

