#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,m,i,sum;
int a[100];
cin>>n>>m;
for(i=0;i<n;i++)
	cin>>a[i];

sort(a,a+n);		
/*for(i=0;i<n;i++){
	cout<<a[i]<<" ";
}	
cout<<endl;*/
	
sum=0;
for(i=0;i<m;i++){
	if(a[i]<0)
		sum=sum+a[i];
}	

cout<<(sum*-1);	

return 0;
}	
