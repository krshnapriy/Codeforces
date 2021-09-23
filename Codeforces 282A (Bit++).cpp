#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,x;
cin>>n;
x=0;
for(int i=0;i<n;i++){
	string s;
	cin>>s;
	if((s=="++X")||(s=="X++")||(s=="++x")||(s=="x++"))
		x++;
	else
		x--;
}
cout<<x<<endl;
return 0;
}
