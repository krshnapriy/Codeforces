#include <iostream>
using namespace std;

int main()
{
int n,m,i,j,b,x,max,count;
int a[51];
cin>>n;
for(i=0;i<n;i++)
	cin>>a[i];

cin>>m;
max=0;
count=0;
for(i=0;i<m;i++){
	cin>>b;
	for(j=0;j<n;j++){
		if(b%a[j]==0){
			x=b/a[j];
			if(x > max)
			{
				max=x;
				count=1;
			}
			else if(x==max)
			{
				count=count+1;
			}
			break;		
		}	
	}	
}	
cout<<count;
return 0;
}	

/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,m,i,j,count,ans;
int a[51],b[51],x[51];
cin>>n;
for(i=0;i<n;i++)
	cin>>a[i];

cin>>m;
for(j=0;j<m;j++)
	cin>>b[j];	
k=0;
count=0;
for(i=0;i<n;i++){
	cin>>b;
	for(j=0;j<m;j++){
		if(b%a[i]==0){
			cout<<b[j]<<" "<<a[i]<<endl;
			count=count+1;
			x=b/a[i];
			k++;
		}	
	}	
}	

cout<<count<<endl;

for(k=0;k<count;k++)
	cout<<x[k]<<" ";
cout<<endl;

ans=1;	
sort(x,x+count,greater<int>());
for(k=0;k<count;k++){
	cout<<x[k]<<" ";
	if(x[0]==x[k+1]){
		ans=ans+1;
	}	
}
cout<<endl;	
cout<<ans<<endl;	
return 0;
}
*/
