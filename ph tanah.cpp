#include <iostream>
using namespace std;

int main(){
	double ph;
	
	cout<<"==========MENENTUKKAN pH TANAH ITU ASAM, BASA ATAU NETRAL========== "<<endl;
	
	cout<<"\n\nmasukkan pH tanah : ";
	cin>>ph;
	cout<<"Berdasarkan pH tanah itu : ";
	   if(ph>=0 && ph<= 6){
		cout<<"ASAM"<<endl;
		cout<<"Tanaman mengalami kesulitan tumbuh karena ketersediaan nutrisi yang terbatas dan adanya unsur beracun. ";

		cout<<"\n\nSolusi : anda dapat menambahkan kapur agar menaikan pH dan menyediakan nutrisi";
	}else if (ph>=6 && ph<= 7.5){
		cout<<"NERTAL"<<endl;
		cout<<"Banyak tanaman tumbuh subur pada pH tanah netral ";
	}else{
		cout<<"BASA"<<endl;
		cout<<"banyak mengandung zat kapur ,tanaman dapat mengalami defisiensi nutrisi dan pertumbuhan yang terhambat karena pH yang ekstrem";
		cout<<"\n\nSolusi : Menambahkan sulfur dapat membantu menurunkan pH tanah menjadi lebih netral";
	}
	
}
