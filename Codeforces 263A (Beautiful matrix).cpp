#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
int i,j,x,y,sum;	
int a[5][5];

for(i=0;i<5;i++)
{
	for(j=0;j<5;j++)
	{
		cin>> a[i][j];
	}
}		

cout<<endl;

for(i=0;i<5;i++)
{
	for(j=0;j<5;j++)
	{
		//cout<<" " <<a[i][j];
		if (a[i][j]==1)
			{x=i;
			 y=j;}	
	}
	//cout<<endl;
}		

//cout<<x<<endl;
//cout<<y<<endl;

sum=abs(2-x)+abs(2-y);
cout<<sum<<endl;

return 0;
}
