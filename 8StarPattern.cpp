/*
8 star 
Pattern
row1*****
row2*   *
row3*   *
row4*   *
row5***** 
row6*   *
row7*   *
row8*   *
row9*****
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Input N:";
	cin>>num;
	for(int row=1;row<=(2*num)-1;row++)
	{
		for(int col=1;col<=num;col++)
		{
			if(row==1||row==num||row==(2*num)-1||col==1||col==num)
			{
				cout<<"*";
			}
			
			else
			{
				cout<<" ";
				
			}
		}
		cout<<endl;
	}

	return 0;
 } 
