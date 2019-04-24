#include <iostream>
#include "Point.h"
using namespace std;
int main(){
    Point a,b(3,3);
    
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;

    cout<<b.getX()<<endl;
    cout<<b.getY()<<endl;

    return 0;
}