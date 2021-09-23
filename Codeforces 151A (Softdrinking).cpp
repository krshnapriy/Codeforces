#include <iostream>
using namespace std;

int min(int x,int y,int z)
{
 int temp;
 if((x>=y)&&(z>=y))
 {
  temp=y;
 }
 else if((z>=x)&&(y>=x))
 {
  temp=x;
 }
 else if((x>=z)&&(y>=z))
 {
  temp=z;
 }
 return temp;
}
 
int main()
{
 
int n,k,l,c,d,p,nl,np;
int totalL,A,B,C,minimum,toast;
cin>>n;
cin>>k;
cin>>l;
cin>>c;
cin>>d;
cin>>p;
cin>>nl;
cin>>np;
totalL=k*l; 
A=totalL/nl;
B=c*d;
C=p/np;
minimum=min(A,B,C);
toast=minimum/n;
cout<<toast;	
	
return 0;	
}
