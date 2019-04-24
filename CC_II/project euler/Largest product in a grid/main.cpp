#include <iostream>
using namespace std;

unsigned long long lefth_right(int**numero){
    unsigned long long  mayorA=0;
    unsigned long long  mayorB=1;
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            for(int x=0;x<4;x++){
                if(j+x>=20){mayorB=1;break;}
                mayorB = mayorB * (*(*(numero+i)+j+x));
            }

            if(mayorA<mayorB){
                mayorA = mayorB;
            }
            mayorB=1;
        }
    }
    return mayorA;
}
unsigned long long  up_down(int**numero){
    unsigned long long  mayorA=0;
    unsigned long long  mayorB=1;
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            for(int x=0;x<4;x++){
                if(j+x>=20){mayorB=1;break;}
                mayorB = mayorB * (*(*(numero+j+x)+i));
            }
            if(mayorA<mayorB){
                mayorA = mayorB;
            } 
        
            mayorB=1;
        
        }

    }
    return mayorA;
}

unsigned long long  diagonally(int**numero){
    unsigned long long  mayorA=0;
    unsigned long long mayorB=1;
    for(int i=0;i<20;i++){
        for(int j=0;j<20-i;j++){
            for(int x=0;x<4;x++){
                if(j+i+x>=20-i){mayorB=1;break;}
                mayorB = mayorB *(*(*(numero+j+i+x)+j));
            }
            if(mayorA<mayorB){
                mayorA = mayorB;
            }
            mayorB=1;
        
        }
    }

    for(int i=0;i<20;i++){
        for(int j=0;j<20-i;j++){
            for(int x=0;x<4;x++){
                if(j+i+x>=20-i){mayorB=1;break;}
                mayorB=mayorB*(*(*(numero+j)+j+i+x));
            }
            if(mayorA<mayorB){
                mayorA = mayorB;
            }
            mayorB=1;       
        }
    }
    for(int i=0;i<20;i++){
        for(int j=0;j<i+1;j++){
            for(int x=0;x<4;x++){
                if(j+x>=i+1){mayorB=1;break;}
                mayorB=mayorB*(*(*(numero+i-j-x)+i));
            }
            if(mayorA<mayorB){
                mayorA = mayorB;
            }
            mayorB=1;
        }
    }
    for(int i=19;i>=0;i--){
        for(int j=0;j<20-i;j++){
            for(int x=0;x<4;x++){
                if(j+x>=20-i){mayorB=1;break;}
                mayorB=mayorB*(*(*(numero+19-j-x)+i+j+x));
}            }
            cout<<endl;
            if(mayorA<mayorB){
                mayorA = mayorB;
            }
            mayorB=1;
        }
    }
    return mayorA;
}



int main(){
    int **numero;
    
    numero = new int*[20];
    for(int i=0;i<20;i++){
        numero[i]= new int[20];
    }

    for(int i=0;i<20;i++){
        
        for(int j=0;j<20;j++){
            cin>>numero[i][j];
        }
    
    }

    cout<<lefth_right(numero)<<endl;
    cout<<up_down(numero)<<endl;
    cout<<diagonally(numero)<<endl;

    for(int i=0;i<20;i++){
        delete numero[i];
    }
    delete[] numero;
    
    return 0;
}