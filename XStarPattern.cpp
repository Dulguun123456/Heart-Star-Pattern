/*
X star Pattern
col=123456789
row1*-------*
row2-*-----*-
row3--*---*--
row4---*-*---
row5----*----
row6---*-*---
row7--*---*--
row8-*-----*-
row9*-------*
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Input N:";
	cin>>num;
	for(int row=1;row<=num*2-1;row++)
	{
		for(int col=1;col<=num*2-1;col++)
		{
			if(col==row||col==2*num-row)
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

