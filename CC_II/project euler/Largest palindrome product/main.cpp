#include<iostream>
#include<math.h>
using namespace std;
bool palindrome(int resultado){

    string s=to_string(resultado);
    for(int i=0,y=s.length()-1;i<y;i++,y--){
        if(s[i]!=s[y]){
            return false;
        }    
    }
    return true;
}
int main(){
    int mayor = 0;
    int resultado;
    
    for(int i=100;i<=999;i++){
        for(int j=100;j<=999;j++){
            resultado=i*j;
            if(palindrome(resultado)){
                cout<<resultado<<endl;
                if(resultado>mayor){
                    mayor=resultado;
                }   
            }
        }
    }

    cout<<mayor<<endl;
    return 0;
}