#include<iostream>
using namespace std;

class Matrix{
        int rows;
        int columns;
        int **matrix;
    public:    
        Matrix(int r, int c);
        Matrix();
        Matrix(const  Matrix  &p);
        ~Matrix();
        void outMatrix();
        Matrix& operator=(const Matrix& p);
        void inMatrix();
        Matrix operator*(const Matrix);        
};
Matrix::Matrix():rows(1),columns(1){
    matrix = new int*[1]; 
    matrix[0] = new int[1];
    matrix[0][0] = 0;
}
 
Matrix::Matrix(const Matrix &a): rows(a.rows),columns(a.columns){
    matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = a.matrix[i][j];

        }
    }
}

Matrix::Matrix(int r, int c){   

    rows = r; columns = c;
    matrix = new int*[rows]; 
    for(int i=0;i<rows;i++){
        matrix[i] = new int[columns];
    }

}

Matrix::~Matrix() {   
    for(int i=0;i<rows;i++){
        delete[] matrix[i];
    }
    delete matrix;
}
void Matrix::outMatrix(){
    for(int i=0;i<rows;i++){    
        for (int j=0;j<columns;j++){
            std::cout<< *(*(matrix+i)+j) << " ";
        }
        std::cout<<std::endl;

    }
}

Matrix& Matrix::operator=(const Matrix& p){
    
    for(int i=0;i<rows;i++){
        delete[] matrix[i];
    }
    delete matrix;
    
    rows = p.rows;
    columns = p.columns;
   
    matrix = new int*[rows]; 
    for(int i=0;i<rows;i++){
        matrix[i] = new int[columns];
    }
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            *(matrix[i]+j)= *(p.matrix[i]+j);
        }
    }
    return *this;
} 

Matrix Matrix::operator*(const Matrix m){
    int acumulador=0;
    int temp=0;
    if(this->columns == m.rows){
        Matrix c(this->rows,m.columns);
        for(int x=0;x<c.rows;x++){    
            for(int y=0;y<c.columns;y++){
                for(int i=0;i<m.rows;i++){
                    acumulador=acumulador+this->matrix[x][i]*m.matrix[i][y];
                }
                c.matrix[x][y]=acumulador;
                acumulador=0;
            }
        }
        return c;
    }
    else{
        Matrix c;
        return c;
    }
} 

void Matrix::inMatrix(){
    for(int i=0;i<rows;i++){    
        for (int j=0;j<columns;j++){
            cin>>*(*(matrix+i)+j);
        }
    }
}

int main(){
    int  r01,c01,r02,c02;
    cout<<"\nDigit size of matrix 'a' : \n";
    cout<<"rows : ";cin>>r01;
    cout<<"columns :";cin>>c01;
    cout<<"\nDigit size of matrix 'b' : \n";
    cout<<"rows : ";cin>>r02;
    cout<<"columns : ";cin>>c02;
    Matrix a(r01,c01),b(r02,c02),c;
    cout<<"\nDigit elements of matrix 'a':\n";
    a.inMatrix();
    cout<<"\nDigit elements of matrix 'b':\n";
    b.inMatrix();
    c=a*b;
    cout<<"\na*b : \n"<<endl;
    c.outMatrix();
    return 0;
}