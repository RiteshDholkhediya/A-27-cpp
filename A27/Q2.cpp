#include<iostream>
using namespace std;

class Unary{

private:
    int a;
public :
    Unary(){
        a=0;
    }

    Unary(int x){
        a=x;
    }

    void setData(int x){
        a=x;
    }

    void showData(){
       
        cout<<"\na = "<<a<<endl;
    }

    Unary operator++(int n){
        Unary temp;
        temp.a = a++;
        return temp; 
    }

    Unary operator++(){
        Unary temp;
        temp.a = ++a;
        return temp;
    }
    Unary operator--(int n){
        Unary temp;
        temp.a = a--;
        return temp; 
    }

    Unary operator--(){
        Unary temp;
        temp.a = --a;
        return temp;
    }


};
int main(){

    Unary u1,u2,u3;
    u1.setData(2);
    u2 = u1++;
    u1.showData();
    u2.showData();

    return 0;
}