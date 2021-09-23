#include <iostream>
#include <cstring>
using namespace std;

int main()
{
int n,i,count;
char s[50];
cin>>n;
cin>>s;

count=0;
for (i=0;i<n;i++)
	if(s[i]==s[i+1])
		count=count+1;
cout<<count;

return 0;
}		
