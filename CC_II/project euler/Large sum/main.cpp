#include <iostream>
#include <math.h>  
using namespace std;
int main(){
    int carry=0;
    string n01;
    
    char **p;
    p = new char*[100];
    for(int i=0;i<100;i++){
        p[i]=new char[50];
    } 
    for(int i=0;i<100;i++){
        for(int j=0;j<50;j++){
            cin>>p[i][j];
        }
    }
    for(int x=49;x>=0;x--){
        for(int i=0;i<100;i++){
            carry += (p[i][x]-48);
        }
        cout<<carry<<" ";
        cout<<carry/10<<" ";
        cout<<carry%10<<" ";
        carry = carry/10;
        cout<<endl;
    }

    for(int i=0;i<100;i++){
        delete p[i];
    }
    delete[] p;
    return 0;
}