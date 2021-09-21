//Konversi suhu
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	double c,r,f,k;
	
	
	cout<<"Masukkan suhu dalam Celcius :";
	cin>> c;
	
	f= (c * 9/5)+ 32;
	k= c + 273;
	r=(c * 4/9) + 32;
	
	cout<<"Fahrenheit	:"<<setprecision(3)<<f<<endl;
	cout<<"Kelvin		:"<<setprecision(3)<<k<<endl;
	cout<<"Rearmur		:"<<setprecision(3)<<r<<endl;
	
	cout<<"\nTerima Kasih";
}
