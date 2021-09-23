#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
int n,i=0,flag=0;
string s;
cin>>s;
 
n=s.length(); 
while(i<n){	
	if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
		i=i+3;
	else if(s[i]=='1' && s[i+1]=='4')
		 i=i+2;	
	else if(s[i]=='1')
		 i++;
	else{	
		flag=1;
		break;
	}	
}		

if(flag==0)
	cout<<"YES"<<endl;
else	
	cout<<"NO"<<endl;

return 0;
}	
