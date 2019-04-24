#include<iostream>
#include<math.h>
using namespace std;
bool integral(double x){
    int a = x;
    if(a-x){
        return false;
    }
    return true;
}
int main(){
    double x;
    int a=1;
    int b=1;
    long long rpta;
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            cout<<i<<"/"<<j<<" "<<pow(i,2)<<"/"<<pow(j,2)<<endl;
            x = sqrt(pow(i,2)+pow(j,2));
            if( integral(x)){
                if(i+j+x==1000){
                    a = i;
                    b = j; 
                    goto stop;
                }
            }
        }
    }
    stop:
    cout<<a<<"/"<<b<<"/"<<x<<endl;
    cout<<pow(a,2)+pow(b,2)<<endl;
    cout<<pow(x,2)<<endl;
    rpta = a*b*x;
    cout<<rpta<<endl;
    return 0;
}