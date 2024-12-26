#include <iostream>
using namespace std;


class shop
{
	int itemId[100];
	int itemPrice[100];
	int counter;
public:
	//initCounter will point to array index
	void initCounter(){ counter = 0; }
	void getPrice(void);
	void setPrice(void);
	void display(void);
};

void shop :: setPrice()
{
	cout<<"enter item id"<<endl;
	cin>>itemId[counter];
	cout<<"enter item price"<<endl;
	cin>>itemPrice[counter];
	counter++;
}
void shop :: display(void)
{
	for(int i = 0; i < counter; i++)
	{
		cout<<"id: "<<itemId[i]<<endl<<"price: "<<itemPrice[i]<<endl;
	}
}

int main()
{	shop dukaan;
	dukaan.initCounter();
	for(int i = 0; i < 3; i++)
	{
		dukaan.setPrice();
	}
	
	dukaan.display();	

	return 0;
}