#include<iostream>
using namespace std;
int main()
{
	int fbill,bill,shopping,s;
	float discount;
	cout<<"enter your shopping amount"<<endl;
	cin>>shopping;
	if(shopping>=10000)
	{
	discount=shopping*20/100;
	bill=shopping-discount;
	cout<<"your final bill is"<<bill<<endl;
}
else if(shopping>=5000)
{
	discount=shopping*10/100;
	bill=shopping-discount;
	cout<<"your final bill is"<<bill<<endl;
	}
else
{
	cout<<"you recieve no discount"<<endl;
}
    cout<<"are you a permium member enter 0 for yes and 1 for no"<<endl;
	cin>>s;
	if(s==0)
	{
		discount=bill*5/100;
		fbill=bill-discount;
	cout<<"your final bill is"<<fbill;
	}
	else{
		cout<<"your final bill is"<<bill<<endl;
	}
}

