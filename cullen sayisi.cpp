#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	int sayi,sayac=1,cullen,islem;
	basaDon:
	cout<<"Sayi Giriniz = " ;
	cin>>sayi;
	
	orta:
	islem=(sayac*pow(2,sayac))+1;
	sayac++;
	
		if(sayi<0){
			cout << "\nNegatif Sayi Girdiniz. Lutfen Pozitif Sayi Giriniz.\n\n";
			goto basaDon;
		}
			if(islem<sayi){
			goto orta;
			}
	
				if(islem==sayi){
				cout<< endl << sayi << " Cullen sayisidir";
				}
				else{
				cout<< "Cullen sayisi degildir\n"<<endl;
				goto basaDon;
				}
	getch();
	return 0;
}
