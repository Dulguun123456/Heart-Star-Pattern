/*
Heart Star Pattern
/number 10/
col  
row1 --*****-----*****--
row2 -*******---*******-
row3 *********-*********
row1 *******************
row2 -*****************-
row3 --***************--
row4 ---*************---
row5 ----***********----
row6 -----*********-----
row7 ------*******------
row8 -------*****-------
row9 --------***--------
row10---------*---------
*/
#include<iostream>
using namespace std;
int main()
{

	int num;
	cout<<"Enter the size:";
	cin>>num;
	for(int row=1;row<=num-7;row++)
	{
		for(int space=1;space<=num/2-row-2;space++)
		{
			cout<<"-";
		}
		for(int star=1;star<=((num/2)-2+(2*row));star++)
		{
			cout<<"*";
		}
		for(int space1=1;space1<=((num/2)+2-(row*2));space1++)
		{
			cout<<"-";
		}
		for(int star1=1;star1<=((num/2)-2+(2*row));star1++)
		{
			cout<<"*";
		}	
		cout<<endl;
	} 
	for(int row1=1;row1<=num;row1++)
	{
		for(int space2=1;space2<=num-10+row1-1;space2++)
		{
			cout<<"-";
		}
		for(int star2=1;star2<=(2*(num-row1)+1);star2++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}

