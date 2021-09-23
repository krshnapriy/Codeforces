#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int n,flag;	
string p;
cin>>p;

flag=0;
n = p.length();
for(int i=0;i<n;i++){
	if (p[i]=='H' || p[i]=='Q' || p[i]=='9')
		flag=1;
}
if (flag==1)
	cout<<"YES";
else
	cout<<"NO";
return 0;
}

