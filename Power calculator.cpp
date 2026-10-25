#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int base,exp,fn;
	cout<<"enter your base\n";
	cin>>base;
	cout<<"enter your exp\n";
	cin>>exp;
	fn=pow(base, exp);
	cout<<"your answer is\n"<<fn;
}

