/*
Plus Star
Pattern
row1----+----
row2----+----
row3----+----
row4----+----
row5+++++++++
row6----+----
row7----+----
row8----+----
row9----+----
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Input N:";
	cin>>num;
	for(int row=1;row<=(num*2)-1;row++)
	{
		for(int space=1;space<=(num*2)-1;space++)
		{
			if(row==num||space==num)
			{
				cout<<"+";
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
