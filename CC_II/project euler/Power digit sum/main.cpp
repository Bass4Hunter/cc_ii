#include <iostream>
#include <math.h>  
using namespace std;
int main(){
    int carry=0;
    char **p;
    p = new char*[50];
    
    for(int i=0;i<50;i++){
        p[i]=new char[7];
    } 
    
    for(int i=0;i<50;i++){
        for(int j=0;j<7;j++){
            cin>>p[i][j];
        }
    }
    for(int i=0;i<50;i++){
        for(int j=0;j<7;j++){
            cout<<p[i][j];
        }
        cout<<endl;
    }
    for(int x=6;x>=0;x--){
        for(int i=0;i<50;i++){
            carry *= (p[i][x]-48);
        }
        cout<<carry<<" ";
        cout<<carry/10<<" ";
        cout<<carry%10<<" ";
        carry = carry/10;
        cout<<endl;
    }

    for(int i=0;i<50;i++){
        delete p[i];
    }
    delete[] p;
    return 0;
}