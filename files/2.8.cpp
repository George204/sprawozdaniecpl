#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main(){
	while(true){
		cout<<"ile liczb chcesz wprowadzic?"<<endl;
		bool koniec = false;
		int n;
		while (koniec == false){
			cin>>n;
			if(cin.fail()){cout<<"podana wartosc nie jest liczba"<<endl;}
			else{koniec = true;}
			cin.clear();cin.sync();
		}
		float suma = 0;
		koniec = false;
		int i = 1;
		while(koniec == false){
			cout<<"podaj liczbe nr "<<i<<": ";
			int a;cin>>a;
			if(cin.fail()){cout<<"podana wartosc nie jest liczba"<<endl;}
			else if(a>9 && a<100){
				i++;
				suma += a;
				if(i>n){koniec = true;}
			}
			else{cout<<"podana wartosc nie jest 2 cyfrowa"<<endl;}
			cin.clear();cin.sync();
		}
		cout<<fixed<<setprecision(2)<<"średnia wynosi: "<<suma/n<<endl;
		cout<<"ndk";getch();
	}
	return 0;
}