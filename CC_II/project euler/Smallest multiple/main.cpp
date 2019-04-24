#include <iostream>
#include <math.h> 
using namespace std;
long gcd(int a,int b){
    int resto,resultado;
    while(b){
        resultado = b; 
        resto = a % b;
        a = resultado; 
        b = resto;
    }
    return resultado;
} 
long lcm(long a,long b){
    return a*b/gcd(a,b);
}

int main(){
    long resultado=20;
    for(int y=19;y>1;y--){
        resultado=lcm(resultado,y);
    }
    cout<<resultado<<endl;

    return 0;
}