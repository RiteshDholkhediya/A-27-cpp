#include<iostream>
using namespace std;

//Little doubt

class Fraction{

private:
    long numerator;
    long denominator;

public:
    Fraction(){
        numerator = 0;
        denominator = 0;
    }
    Fraction(long n, long d){
        numerator = n;
        denominator = d;
    }

    void setNumbers(long n, long d){
        numerator  = n;
        denominator = d;
    }

    Fraction operator++(int n){
        Fraction f;
        f.numerator = numerator++;
        f.denominator = denominator++;
        return f;
    }
    Fraction operator++(){
        Fraction f;
        f.numerator = ++numerator;
        f.denominator = ++denominator;
        return f;
    }


    friend ostream& operator<<(ostream &os, Fraction f);
    friend istream& operator>>(istream &is, Fraction &f);
};

ostream& operator<<(ostream &os, Fraction f){
    os<<f.numerator<<"/"<<f.denominator;
    return os;
}

istream& operator>>(istream &is, Fraction &f){
    cout<<"\nEnter Numerator  : ";
    is>>f.numerator;

    cout<<"Enter Denominator  : ";
    is>>f.denominator;

    return is;

}


int main(){
    Fraction f1,f2;

    cout<<"f1   :   "<<f1<<endl;
    cout<<"f2   :   "<<f2<<endl;

    cout<<"Enter the first fraction value ";
    cin>>f1;
    cout<<"f++  :   "<<f1++<<endl;
    cout<<"++f  :   "<<++f1<<endl;

    cout<<"Enter the second fraction value ";
    cin>>f2;
    cout<<"\nf2 = ++f1";
    f2 = ++f1;
    cout<<"\nf1 :  "<<f1;
    cout<<"\nf2 :  "<<f2;


    cout<<"\n\nf2 = f1++";
    f2 = f1++;
    cout<<"\nf1 :  "<<f1;
    cout<<"\nf2 :  "<<f2;

    return 0;
}