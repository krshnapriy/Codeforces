#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
int k,n,i,j,x,flag;
char str[100];
char tmp[100];
 
cin>>str;
n = strlen(str);
//cout<<n<<endl;

k=0;
for(i=0;i<n;i++){
flag=0;
	for(j=0;j<i;j++)
		if (str[i]==str[j])
			 flag=1;
		
if(flag==0)    		
	{tmp[k] = str[i];	
	 k++;}
}	
tmp[k]='\0';
x = strlen(tmp);
//cout<<x<<endl;

if (x%2==0)
	cout<<"CHAT WITH HER!";
else
	cout<<"IGNORE HIM!";			
 
return 0;
}
