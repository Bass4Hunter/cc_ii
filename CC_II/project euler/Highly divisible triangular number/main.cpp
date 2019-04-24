#include <iostream>
using namespace std;
int divisors(int n){
    int prime=2;
    int dprime=0;
    int temp=0;
    int divisors=1;
    int of=0;
    while(n>1){
        if(n%prime==0){
            n=n/prime;
            temp++;
            of=0;
        }
        else{
            while(dprime!=2){
                dprime=0;
                for(int x=1;x<=prime;x++){
                    if(prime%x==0){
                        dprime++;
                    }
                }
                if(dprime==2){
                    break;
                }
            }
            prime++;
            of=1;
        }
        if(of==1 || n<=1){
            divisors= divisors * (temp+1);
            temp=0;
        }

    }
    return divisors;
}

int main(){
    int D=0;
    int n;
    int prime=2;
    while(D<=500){
        n=(prime*(prime+1))/2; 
        D=divisors(n);
        prime++;
    }
    cout<<D<<endl;
    cout<<n<<endl;
}