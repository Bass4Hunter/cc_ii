#include<iostream>
using namespace std;
int main(){
long temp01=0;
long temp = 0;
long n = 0;
int max = 1;
for (int i = 2; i < 1000000; i++) {
    max = 0;
    temp01=i;
    cout<<i<<endl;
    while (temp01!= 1) {
        if ((temp01 % 2) == 0){
            temp01 = temp01 / 2;
        } else {
            temp01 = temp01 * 3 + 1;
        }
        max++;
    }
    cout<<max<<" "<<temp<<endl;
    if ( temp < max ) {
        temp = max;
        n = i;
    }
}
cout<<n<<endl;
return 0;
}