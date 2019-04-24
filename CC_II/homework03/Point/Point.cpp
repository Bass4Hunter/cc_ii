#include<iostream>
#include "Point.h"

Point::Point():x(0),y(0){}
Point::Point(const int new_x,const int new_y):x(new_x),y(new_y){} 
int Point::getX() const{return x;}
int Point::getY() const{return y;}
void Point::setX(const int new_x){x=new_x;}
void Point::setY(const int new_y){y=new_y;} 
