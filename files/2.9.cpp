#include <iostream>
#include <locale.h>
#include <list>
using namespace std;

int main() {
    int a,b;
    cout<<"podaj a: ";cin>>a;
    cout<<"podaj b: ";cin>>b;
    //NWW
    int c=a;
    int d=b;
    while (c!=d)
    {
        if (c>d){d=d+b;}
        else if (d>c){c=c+a;}
    }
    cout<<"NWW="<<c<<endl;    
    //NWD
    int nwd = 1;
    int pruba = 1;
    while (pruba <= a && pruba <= b)
    {
        if (a % pruba == 0 && b % pruba == 0){nwd = pruba;}
        pruba++;
    }
    if (nwd>1){cout<<"NWD="<<nwd<<endl;}
    else {cout<<"NWD="<<"brak"<<endl;}         
}