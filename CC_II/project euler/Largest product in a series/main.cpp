#include <iostream>
using namespace std;
long long maximo(char* a){
    long long mayorA=0;
    long long mayorB=1;
    for(int i=0;i<1000;i++){
        for(int j=0;j<13;j++){
            if(*(a+i+j)=='0'){mayorB=1;break;}
            mayorB = mayorB * (*(a+i+j) - 48);

        }
        if(mayorA<mayorB){
            cout<<mayorB<<endl;
            mayorA = mayorB;
        } 
        
        mayorB=1;
    }
    return mayorA;
}

int main(){
    char *numero;
    int contador = 0;
    numero = new char[1000];
    for(int i=0;i<1000;i++){
        cin>>*(numero+i);
    }
    cout<<maximo(numero)<<endl;
    delete numero;
    return 0;
}