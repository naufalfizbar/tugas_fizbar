#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	string nama,nim,plug;
	cout<<"Masukkan :"<<endl;
	cout<<"Nama\t :";
	getline(cin,nama);
	cout<<"NIM\t :";
	getline(cin,nim);
	cout<<"Plug\t :";
	getline(cin,plug);
	cout<<endl<<endl;
	
	cout<<"Inilah Data Anda :"<<endl;
	cout<<"Nama\t :"<<nama<<endl;
	cout<<"NIM\t :"<<nim<<endl;
	cout<<"Plug\t :"<<plug<<endl;
	

	cout<<"Dalam Bentuk Tabel :"<<endl;
		cout<<"================================================"<<endl;
	cout<<setw(45)<<setfill('=')<<endl; //tidak muncul saat di compile&run
	cout<<setw(15)<<setfill(' ')<<"NIM"<<"|"
	    <<setw(15)<<setfill(' ')<<"Nama"<<"|"
	    <<setw(15)<<setfill(' ')<<"Plug"<<"|"<<endl;
	    
	cout<<"================================================"<<endl;
	cout<<setw(45)<<setfill('=')<<endl;//tidak muncul saat di compile&run
	cout<<setw(15)<<setfill(' ')<<nim.substr(0, 14)<<"|"
	    <<setw(15)<<setfill(' ')<<nama.substr(0, 14)<<"|"
	    <<setw(15)<<setfill(' ')<<plug.substr(0, 14)<<"|"<<endl;
	cout<<setw(45)<<setfill('-');//tidak muncul saat di compile&run
	cout<<"------------------------------------------------"<<endl;
	
	cout<<"Terima Kasih";
	
	
}
