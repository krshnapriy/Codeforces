#include <iostream>
#include <cstring>
using namespace std;

int main()
{
int n,i;
char a[101],b[101],str[101];
cin>>a;
cin>>b;

n=strlen(a);

for(i=0;i<n;i++){
	if(((a[i]=='0') && (b[i]=='0')) || ((a[i]=='1') && (b[i]=='1')))
		str[i]='0';
	else
		str[i]='1';
}

for(i=0;i<n;i++)
{
	cout<<str[i];		
}	
return 0;
}
