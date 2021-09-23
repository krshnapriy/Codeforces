#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,i;
string s;
cin>>s;
n = s.length();
for(i=0; i<n; i++){
    if(s[i]=='.'){
       cout<<"0";
       continue;
    }
    else if(s[i]=='-' && s[i+1]=='.'){
       cout<<"1";
       i++;
       continue;
    }
    else if(s[i]=='-' && s[i+1]=='-'){
       cout<<"2";
       i++;
       continue;
    }
}
return 0; 
}	
