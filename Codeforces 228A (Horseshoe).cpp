#include <iostream>
using namespace std;

int main()
{

int arr[4],i,j,count;
count=0;
for(i=0;i<4;i++)
	cin>>arr[i];
 
for(i=0;i<4;i++)
	for(j=i+1;j<4;j++)
	 {
		if (arr[i]==arr[j])
		 	{count=count+1;
		 	if (arr[i+1]==arr[j+1])
				break;}
	 }
cout<<count;
 
return 0;
}		
