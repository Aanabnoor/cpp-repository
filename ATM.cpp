#include<iostream>
using namespace std;
int main()
{
int cpin=1234;
int balance=10000;
int pin;
float withdrawal;
cout<<"ENTER THE PIN AND WITHDRAWAL AMOUNT"<<endl;
cin>>pin>>withdrawal;
if(pin==cpin && withdrawal>0 && withdrawal<=balance)
{

	
		cout<<"Withdrawal approved"<<endl;
}
	else
	{
		cout<<"insufficient with drawal"<<endl;
	}


}
