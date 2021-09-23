#include <iostream>
using namespace std;

int main()
{
int n,i,x,min,count;
int a[100000];
cin>>n;
for(i=0;i<n;i++)
	cin>>a[i];

if(n==1){
	cout<<'1';
	exit(0);
}
	
min=a[0];count=0;
for(i=0;i<n;i++){
	if(a[i]<=min){
		min=a[i];
		x=i+1;
	}	
}

//cout<<min<<endl;
for(i=0;i<n;i++){
	if(a[i]==min){
		count=count+1;
	}	
}
	
if(count>1)
	cout<<"Still Rozdil";
else	
	cout<<x<<endl;

return 0;

}
