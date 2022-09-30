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

    Matrix operator+(Matrix m){
        int i,j;
        Matrix k;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                k.a[i][j] = m.a[i][j] + a[i][j];
            }
        }

        return k;
    }





};


int main(){
    Matrix m1,m2,m3;
    int a[3][3],b[3][3],i,j;

    cout<<"\nEnter 1st matrix element(3X3)\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }
    cout<<"\n\nEnter 2nd matrix element(3X3)\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cin>>b[i][j];
    }

    m1.setMatrix(a);
    m2.setMatrix(b);
    m1.showMatrix();
    m3 = m1+m2;
    cout<<"\n\n";
    m3.showMatrix();

    return 0;
}