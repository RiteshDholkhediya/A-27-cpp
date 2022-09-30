#include<iostream>
#include<string.h>
using namespace std;

class CString{

private:
    char str[50];
public:
    CString(){
        
    }

    CString(char s[]){
        strcpy(str,s);
    }

    void setData(CString s){
        strcpy(str,s.str);
    }

    CString operator+(CString s){
        CString string;
        strcpy(string.str,(strcat(str,s.str)));
        return string;
    }

    bool operator==(CString s){
        if(strcmp(str,s.str)==0)
            return true;
        return false;
    }
    
    void showString(){
        cout<<endl;
        cout<<str;
    }



};

int main(){
    CString c1("Ritesh"), c2(" Dholkhediya"), c3(" Kheda"),c4,c5("Ritesh");
    c4 = c1+c2+c3;
    c4.showString();

    cout<<"\nObject c1 = ";
    c1.showString();
    cout<<"\nObject c2 = ";
    c2.showString();
    cout<<"\nObject c3 = ";
    c3.showString();

    c1.setData("Ritesh");

    if(c1==c5)
        cout<<"\nStrings are same";
    else
        cout<<"\nStrings are not same";

    cout<<"\nObject c1 = ";
    c1.showString();
    cout<<"\nObject c2 = ";
    c2.showString();
    cout<<"\nObject c3 = ";
    c3.showString();
    return 0;
}