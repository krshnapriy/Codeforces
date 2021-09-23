#include <iostream>
using namespace std;

int main()
{
	
int i,j,x1,x2,x3,x4,x5,x6,x7,x8,x9,a[3][3];
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		cin>>a[i][j];
	}
}
	
x1=	a[0][0]+a[0][1]+a[1][0];
if(x1%2==0)
	cout<<'1';
else
	cout<<'0';
	
x2=	a[0][0]+a[0][1]+a[0][2]+a[1][1];
if(x2%2==0)
	cout<<'1';
else
	cout<<'0';

x3=	a[0][1]+a[0][2]+a[1][2];
if(x3%2==0)
	cout<<'1'<<endl;
else
	cout<<'0'<<endl;

x4=	a[0][0]+a[1][0]+a[1][1]+a[2][0];
if(x4%2==0)
	cout<<'1';
else
	cout<<'0';

x5=	a[0][1]+a[1][0]+a[1][1]+a[1][2]+a[2][1];
if(x5%2==0)
	cout<<'1';
else
	cout<<'0';
	
x6=	a[0][2]+a[1][1]+a[1][2]+a[2][2];
if(x6%2==0)
	cout<<'1'<<endl;
else
	cout<<'0'<<endl;	
	
x7=	a[1][0]+a[2][0]+a[2][1];
if(x7%2==0)
	cout<<'1';
else
	cout<<'0';	
	
x8=	a[2][0]+a[2][1]+a[1][1]+a[2][2];
if(x8%2==0)
	cout<<'1';
else
	cout<<'0';	
	
x9=	a[2][1]+a[2][2]+a[1][2];
if(x9%2==0)
	cout<<'1'<<endl;
else
	cout<<'0'<<endl;	

return 0;
	
}	
