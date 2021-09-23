#include <iostream>
using namespace std;

int main()
{

int n,i,j,a,b,c,d,sum;
int arr[10000][2];
cin>>n;

for(i=0;i<n;i++)
{
	for(j=0;j<2;j++)
	{
		cin>> arr[i][j];
	}
}		

cout<<endl;
a=0;
b=0;
c=0;
d=0;
sum=0;

for(i=0;i<n;i++)
{

		//cout<<arr[i][j]<<" ";
		if(arr[i][0]==0)
			a=a + 1;
		else
			b=b + 1;
			
		if(arr[i][1]==0)
			c=c + 1;
		else
			d=d + 1;
	
	//cout<<endl;
}		
//cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

{
	if(a>b)
		sum=sum + b;
	else
		sum=sum + a;
	{
		if(c>d)
			sum=sum + d;
		else
			sum=sum + c;
	}
}	
cout<<sum;

return 0;
}
