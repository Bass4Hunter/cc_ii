#include <iostream>
using namespace std;
int main(){
    int x = 4000000;
    int a = 1;
    int b = 2;
    int temp = 0 ;
    unsigned long long acumulador=0;    
    while(b <= x){
        cout<<b<<endl;
        if( b%2==0 ){
            acumulador= acumulador + b;
        }
        temp = a;
        a = b;
        b = temp + b ; 
    }
    cout << acumulador<<endl;
    return 0;
}