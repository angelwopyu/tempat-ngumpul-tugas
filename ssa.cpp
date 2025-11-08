#include <iostream>
using namespace std;

int main(){
	string nama,alamat,jk;
	int umur,angka;
	
	cout<<"========DATA DIRI=========";
	
	cout<<"\n\nMasukkan Nama  : ";
	getline(cin,nama);
	
	cout<<"\nUmur : ";
	cin>>umur;
		if(umur>=0 && umur<=5){
		cout<<"BALITA";
	}else if(umur >=6 && umur<=12){
		cout<<"ANAK ANAK";
	}else if(umur>=12 && umur<=19){
		cout<<"REMAJA ";
	}else if(umur>=20 && umur<=59){
		cout<<"DEWASA";
	}else{
		cout<<"LANSIA";
	}
	
	cout<<"\n\nAlamat :  ";
	cin.ignore();
	getline(cin,alamat);
	
	cout<<"Jenis Kelamin : ";
	cin>>jk;
	
	cout<<"Masukkan Tinggi  :  ";
	cin>>angka;
	if(angka>=0 && angka<=135){
		cout<<"botol yakult (pendek) "<<endl;
	}else if (angka>=136&& angka <= 159){
		cout<<"MAYAN LAH (sedang)  "<<endl;
	}else{
		cout <<"tiang listrik(tinggi) "<<endl;
	} 
}
