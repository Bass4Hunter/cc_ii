#include<iostream>
using namespace std;

int main(){
    int i=3;
    int temp=0;
    long long respuesta=2;
    while(i<2000000){
        for(int x=1;x<=i/2;x++){
            if(i%x==0){
                temp++;
            }
        }
        if(temp==1){
            cout<<i<<endl;
            respuesta +=i; 
        }
        temp=0;
        i+=2;
    }
    cout<<respuesta<<endl;
    return 0;
}