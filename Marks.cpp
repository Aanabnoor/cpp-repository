#include <iostream>
using namespace std;
int main()
{
	int m1,m2,m3;
	float avg;
	cout<<"Enter the marks of three subjects"<<endl;
	cin>>m1>>m2>>m3;
	avg=(m1+m2+m3)/3;
	if(avg>=85)
	{
		cout<<"excellent"<<endl;
	}
	else if(avg>=75)
	{
			cout<<"good"<<endl;
	}
	else if(avg>=65)
	{
		cout<<"fair"<<endl;
	}
	else
	{
		cout<<"keep it up"<<endl;
	}
	return 0;
}
