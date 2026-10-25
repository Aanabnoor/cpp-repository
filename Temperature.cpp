#include<iostream>
using namespace std;
int main()
{
	float celsius,f;
	cout<<"Enter temperature in celsius"<<endl;
	cin>>celsius;
	f=(celsius * 9.0 / 5.0) + 32;
	cout<<"temperature in farenheit is\n"<<f;
}
