#include <iostream>
using namespace std;
void funcion02();

//2.1 Hello World I
void funcion01(){
    const char* text;
    text = "Hello, World!";  
    cout<<text<<endl;    
}
//2.2 Hello World II
   
    int g = 1;
    void (*p)(void)=funcion02;    
    int *times;
 
void funcion02(){
    if(g){
        times = new int;               
        cout<<"How many times to print “Hello, World!”"<<endl;
        cin>>*times;
    }   
    for(;*times;){
        (*times)--;
        cout<<"Hello, World! by 'for'"<<endl;break;
    }

    while(*times){
        (*times)--;
        cout<<"Hello, World! by 'while'"<<endl;break;
    }    
    do{
        if(*times){
            cout<<"Hello, World! by 'do..while'"<<endl;
            (*times)--;
            g=0;
            return p();
        }
        else{
            delete times;
        }
    }while(*times);

}
void funcion03(){}
  
int main(){
    int x;
    cout<<"Choose the number of the exercise :"<<endl<<endl;
    cout<<"(1) Hello World I"<<endl;
    cout<<"(2) Hello World II"<<endl;
    cin>>x;
    switch(x){
        case 1: funcion01();break;
        case 2: p();break;
        default: cout<<"The number of the exercise doesn't exist"<<endl;
    }   
    return 0;
}