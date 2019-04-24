//worst,average: O(nlogn) ; memory :O(n) , highly parallelizable ,reference wikipedia english
#include<iostream>
#include<math.h>
using namespace std;

class list{
    public:       
        int **p;
        int  size;
        float size01;
        list(int x):size(x),size01(x){
            p = new int*[size];
            for (int i=0;i<size;i++){
                p[i]= new int;
            }
        }
        list():size(1),size01(1){ 
            p = new int*[size];
            p[0] = new int; 
        }
        list(const list &a):size(a.size),size01(a.size01){ 
            p = new int*[size];
            for(int i=0;i<size;i++){
                p[i]= new int;
            }
            for(int i=0;i<size;i++){
                p[i][0]= a.p[i][0];
            }
        }
        ~list(){ 
            for(int i=0;i<size;i++){
                delete p[i];
            }
            delete[] p; 
        }

        list operator +(const list l){    
            list resultado(size+l.size);
            for(int i=0,y=0;i < resultado.size;i++){
                if(i < this->size){
                    resultado.p[i][0] = this->p[i][0]; 
                }
                else{
                    resultado.p[i][0] = l.p[y][0];
                    y++;
                }       
            } 
            return  resultado;
        }
        void insert_remove(list &b,int indexGet,int indexPush){    
            list plus(size+1);
            list minus(size-1);
            for (int i=0,x=0;i<plus.size;i++){
                if(i < indexPush){
                    plus.p[i][0] = this->p[x][0]; 
                    x++;
                }
                else if(i > indexPush){
                    plus.p[i][0] = this->p[x][0]; 
                    x++;
                }
                else{
                    plus.p[i][0] = this->p[indexGet][0];
                } 
            }
            *this = plus;
            for (int i=0,x=0;i<minus.size;i++){
                if(i < indexGet){
                    minus.p[i][0] = b.p[x][0]; 
                    x++;
                }
                else if(i > indexPush){
                    minus.p[i][0] = b.p[x][0]; 
                    x++;
                }
            }
            b = minus;
        }
        list& operator =(const list l){ 
            for(int i=0;i<size;i++){
                delete p[i];
            }
            delete[] p;
            size = l.size;
            size01 = l.size01;
            p = new int*[size];
            for (int i=0;i<size;i++){
                p[i]=new int;
            }
            for(int i=0;i<size;i++){
                p[i][0]=l.p[i][0];
            }
            return *this;
        } 
        friend ostream & operator << (ostream &out,const list& a);
        friend istream & operator >> (istream &in,list& a); 
};

ostream & operator << (ostream &out,const list& a){
    for (int i=0;i<a.size;i++){
        out <<a.p[i][0]<<",";
    }
    out << endl;
    return out;
}
istream & operator >> (istream &in,list& a){
    for(int i=0;i<a.size;i++){
        in >> a.p[i][0]; 
    }
    return in;
} 
void merge(list lefth,list right);

void mergeSort(list a){
    float m = a.size01/2;
    if(m < 1){
        return ;//a; 
    }         
    list lefth(floor(m)),right(ceil(m));
    for(int i=0;i<floor(m);i++){
        lefth.p[i][0] = a.p[i][0];
    }
    for(int i=floor(m),y=0;i<a.size;i++,y++){
        right.p[y][0] =a.p[i][0];
    }      

    cout<<lefth;
    cout<<right<<endl;
    
    mergeSort(lefth);
    
    mergeSort(right);
    
   // merge(lefth,right);*/

}
/*void merge(list lefth,list right){
    list resultado(lefth.size+right.size);
    int i=0,x=0,y=00;
    lefth = resultado;
    //return resultado+;
}*/

int main(){

    list a(5);
    cin >> a ;
    mergeSort(a);

    return 0;
}