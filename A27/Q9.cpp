#include<iostream>
#include<string.h>
using namespace std;

class mystring{

private:
    char str[100];
public :
    mystring(){

    }

    mystring(char s[]){
        strcpy(str,s);
    }

    mystring operator!(){
        mystring s;
        int i,j;

        for(i=0;str[i];i++){
            if(str[i]>=65 && str[i]<=90){
                str[i] = str[i]+32;
                s.str[i] = str[i];
            }
            else if(str[i]>=97 && str[i]<=122){
                str[i] = str[i]-32;
                s.str[i] = str[i];
            }
        }

        return s;
    }

    void setString(char s[]){
        strcpy(str,s);
    }

    void showString(){
        cout<<endl;
        cout<<str;
    }
};


int main(){
    mystring s1("Ritesh"),s2;
    s1.showString();

    s2 = !s1;
    s2.showString();
    s1.showString();
    s2.setString("Lakshay");
    s1.showString();
    !s2;
    s2.showString();

    return 0;
}

