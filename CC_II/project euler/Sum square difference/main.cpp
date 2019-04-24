#include<iostream>
#include<math.h>

using namespace std;
int main(){
    long a=100,b=100;

    a = (a*(a+1))/2;    
    a = pow(a,2);
    
    b = (b*(b+1)((2*b)+1))/6;

    cout<< a-b<<endl; 
    return 0;
}