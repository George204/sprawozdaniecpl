#include <iostream>

using namespace std;

int main(){
    do{
        cout<<"podaj liczbe n:";int n;cin>>n;
        int wynik;
        for(int i=100;i<1000;i++){
            int a=i%10+(i/10)%10+i/100;
            if ((a==n)){
                cout<<i<<endl;
                wynik++;
            }    
        }
        cout<<"ilosc liczb: "<<wynik<<endl;
        getchar();
    }
    while(true);
}