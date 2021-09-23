#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
int n,len,count;
int array[100];
cin>> n;
len = floor(log10(abs(n))) + 1;
cout<< len << endl;
count = 9*(len-1);
cout<< count << endl;

for (int i = 5; i >= 0; i--) {
    array[i] = n % 10;
    n /= 10;
}

return 0;	
}
