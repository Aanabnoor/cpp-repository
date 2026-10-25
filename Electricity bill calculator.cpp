#include<iostream>
using namespace std;
int main()
{
	int units,surcharge,bill,totalbill;
	cout<<"enter your units"<<endl;
	cin>>units;
	if(units<=100)
	{
		bill=units*10;
		cout<<"your bill is"<<bill;
	}
	else if(units<=200)
	{
		bill=(100*10)+(units-100)*15;
		cout<<"your bill is"<<bill;
	}
	else if(units>200)
	{
		bill=(100*10)+(100*15)+(units-200)*20;
		cout<<"your bill is"<<bill;
	}
	if(units>200)
	{
		surcharge=bill*5/100;
		totalbill=bill+surcharge;
		cout<<"total bill is"<<totalbill;
	}
	
}
