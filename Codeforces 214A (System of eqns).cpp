#include <iostream>
using namespace std;
int main()
{
int n,m,a,b,count;
cin>>n>>m;
 
count=0;
for(a=0;a<1000;a++){
	for(b=0;b<1000;b++){
		if ((((a*a)+b)==n) && ((a+(b*b))==m))
			count=count+1;
	}
}
 
cout<<count;		
return 0;
}
