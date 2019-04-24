#include <iostream>
using namespace std;

int main(){
    long long l=600851475143;
    long long mayor=0;
    long long i=2;
    while(l!=1){
        if(l%i==0){
            l=l/i; 
            mayor = i;
        }
        else{
            i++;
        }
    }
    cout<<mayor<<endl;
}