#ifndef POINT
#define POINT
    class Point{  
            int x,y;
        public:
            Point();
            Point(const int new_x,const int new_y); 
            int getX() const;
            int getY() const;
            void setX(const int new_x);
            void setY(const int new_y);
    };
#endif