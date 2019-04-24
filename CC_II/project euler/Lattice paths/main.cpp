#include <iostream>
using namespace std;
int main(){
    long  **p;
    p = new long*[21];
    for(long i=0;i<21;i++){
        p[i]=new long[21];   
    }
    for(long i=0;i<21;i++){
        p[0][i]=1;
    }
    for(long i=0;i<21;i++){
        p[i][0]=1;
    }
    for(long i=1;i<21;i++){
        for(long j=1;j<21;j++){
            p[i][j]=p[i-1][j]+p[i][j-1];
        }
    }
    for(long i=0;i<21;i++){
        for(long j=0;j<21;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<p[20][20]<<endl;
    
    for(long i=0;i<21;i++){
        delete p[i];   
    }
    delete[] p;
     
    return 0;
}