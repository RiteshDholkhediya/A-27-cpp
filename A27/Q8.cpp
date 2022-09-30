#include<iostream>
using namespace std;

class Matrix{

    int a[3][3];

public:

    Matrix(){
        int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                a[i][j]=0;
            }
        }
    }

    void setMatrix(int b[][3]){
        int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                a[i][j]=b[i][j];
            }
        }
    }

    void showMatrix(){
        int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    Matrix operator-(){
        Matrix m;
        int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                m.a[i][j] = -a[i][j];
            }
        }

        return m;
    }



};


int main(){
    Matrix m1,m2;
    int a[3][3],i,j;

    cout<<"Enter the matrix element(3X3)\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }

    m1.setMatrix(a);
    m1.showMatrix();
    m2 = -m1;
    cout<<"\n\n";
    m2.showMatrix();

    return 0;
}