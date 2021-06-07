/*
Left Arrow Star
Pattern
row1----*****
row2---****
row3--***
row4-**
row5*
row1-**
row2--***
row3---****
row4----*****
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Input N:";
	cin>>num;
	for(int row=1;row<=num;row++)
	{
		for(int space=1;space<=num-row;space++)
		{
			cout<<"-";
		}
		for(int star=1;star<=num-row+1;star++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int row=1;row<num;row++)
	{
		for(int space=1;space<=row;space++)
		{
			cout<<"-";
		}
		for(int star=1;star<=row+1;star++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}
