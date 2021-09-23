#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
string str;
cin>>str;
int n = str.length();
sort(str.begin(),str.end());
str.erase(0,n/2);
for(int i=0;i<(n+1)/2;i++)
	if(i==0) 
		cout<<str[i];
	else 
		cout<<"+"<<str[i];

return 0;
}
