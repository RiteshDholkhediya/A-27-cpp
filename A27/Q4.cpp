#include<iostream>
using namespace std;

class Time{

private:
    int h,m,s;

public: 
    Time(){
        h=0;
        m=0;
        s=0;
    }

    Time(int x, int y, int z){
        h=x;
        m=y;
        s=z;
    }


    friend ostream & operator<<(ostream &os, Time &t);
    friend istream & operator>>(istream &is, Time &t);

    void normalize(){
        h = h + m/60;
        m  = m%60;
        
        m = m + s/60;
        s = s%60; 
    }

    bool operator==(Time t){
        if(t.h==h && t.m==m && t.s==s)
            return true;
        return false;
    }


};

istream & operator>>(istream &is, Time &t){
    
    cout<<endl;
    cout<<"Enter Hours   :  ";
    cin>>t.h;
    cout<<endl;

    cout<<"Enter Minutes :  ";
    cin>>t.m;
    cout<<endl;

    cout<<"Enter Seconds :  ";
    cin>>t.s;
    cout<<endl;
    t.normalize();
    
    return is;

}

ostream & operator<<(ostream &os, Time &t){
    os<<endl;
    os<<"Hours    :  "<<t.h;
    os<<endl;

    os<<"Minutes  :  "<<t.m;
    os<<endl;

    os<<"Seconds  :  "<<t.s;
    os<<endl;
    return os;
}



int main(){
    Time t1,t2,t3;
    cout<<"\nEnter First Time\n";
    cout<<"----------------------";
    cin>>t1;
    cout<<"First Time ";
    cout<<t1;

    cout<<"\nEnter Second Time\n";
    cout<<"----------------------";
    cin>>t2;
    cout<<"Second Time ";
    cout<<t2;

    if(t1==t2)
        cout<<"\nTimes are same";
    else 
        cout<<"\nTimes are not same";

    return 0;
}

