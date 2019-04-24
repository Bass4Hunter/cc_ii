#include<iostream>
using namespace std;

int main(){
    int index=3;
    int i=3;
    int temp=0;
    while(index!=10002){
        for(int x=1;x<i/2;x++){
            if(i%x==0){
                temp++;
            }
        }
        if(temp==1){
            cout<<index<<" "<<i<<endl;

            index++;

        }
        temp=0;
        i+=2;
    }
    cout<<i<<endl;
    return 0;
}