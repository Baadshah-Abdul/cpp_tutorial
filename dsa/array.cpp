#include <iostream>

using namespace std;

int main(){
	int arr[10];
	cout << "Enter 10 integers: "<<endl;
	for(int i = 0; i < 10; i++){
		cin>> arr[i];
	}
	cout<< "The entered numbers are: "<<endl;
	for(int i = 0; i < 10; i++){
		cout<< arr[i]<<endl;
	}
	return 0;
}
