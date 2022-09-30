#include<iostream>
using namespace std;



class Complex{
private:
    int a,b;
public:
    void setData(int x, int y){
        a=x;
        b=y;
    }

    void showData(){
        
        cout<<endl;
        if((a>=0 && b>=0) || b>=0){
            cout<<a<<"+"<<b<<"i";
        }
        else{
            cout<<a<<b<<"i";
        }
        
    } 

    friend Complex operator+(Complex, Complex);

};

Complex operator+(Complex C1, Complex C2){
    Complex C;
    C.a = C1.a + C2.a;
    C.b = C1.b + C2.b;
    return C;
}

int main(){
    Complex C1,C2,C3;
    int a,b,c,d;
    cout<<"Enter the complex number 1 ";
    cin>>a>>b;
    cout<<"Enter the complex number 2 ";
    cin>>c>>d;
    C1.setData(a,b);
    C2.setData(c,d);
    C3 = C1 + C2;
    C3.showData();
    return 0;
}