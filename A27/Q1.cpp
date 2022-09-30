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

    Complex operator*(Complex C){
        C.a = a*C.a;
        C.b = b*C.b;
        return C;
    }

    bool operator==(Complex C){
        if(C.a==a && C.b==b)
            return true;
        return false;
    }

    Complex operator+(Complex C){
        Complex temp;
        temp.a = a + C.a;
        temp.b = b + C.b;
        return temp;  
    }

    Complex operator-(Complex C){
        Complex temp;

        temp.a = a - C.a;
        temp.b = b - C.b;
        return temp;
    }


};

int main(){
    Complex C1,C2,C3,C4;
    int a,b,c,d;
    cout<<"Enter the complex number 1 ";
    cin>>a>>b;
    cout<<"Enter the complex number 2 ";
    cin>>c>>d;
    C1.setData(a,b);
    C2.setData(c,d);
    if(C1==C2){
        cout<<endl;
        cout<<"Both are equal";
        cout<<endl;
    }
    else {
        cout<<endl;
        cout<<"Both are not equal";
        cout<<endl;
    }
        
    C1.showData();
    
    C3 = C1-C2;
    C3.showData();
    C4 = C1*C2;
    cout<<"\n Multiplication of both numbers is :";
    C4.showData();
    return 0;
}