#include<iostream>
using namespace std;
class Numbers{

private: 
    int x,y,z;

public:
    Numbers(){
        x=0;
        y=0;
        z=0;
    }

    Numbers(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }

    Numbers operator-(){
        Numbers n;
        n.x = -x;
        n.y = -y;
        n.z = -z;
        return n;
    }

    friend ostream & operator<<(ostream &os,Numbers &n);

};

ostream & operator<<(ostream &os, Numbers &n){

    os<<endl;
    os<<"x = "<<n.x;
    os<<endl;
    os<<"y = "<<n.y;
    os<<endl;
    os<<"z = "<<n.z;

    return os;
}


int main(){
    Numbers n1(1,2,3),n2;
    n2 = -n1;
    cout<<n2;
    return 0;
}



