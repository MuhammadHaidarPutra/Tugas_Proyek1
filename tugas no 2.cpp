#include<iostream>
using namespace std;

class TanggalLahir{
	public:
		int tanggal,tahun;
		string bulan;
	void inputTanggal(){
		cout<<"Masukan tanggal lahir: ";
		cin>>tanggal;
		cout<<"Masukan bulan lahir: ";
		cin>>bulan;
		cout<<"Masukan tahun lahir: ";
		cin>>tahun;
	}
	void tampilkanTanggal(){
		cout<<"Tanggal lahir anda: "<<tanggal<<" "<<bulan<<" "<<tahun<<endl;
	}
};
int main(){
	TanggalLahir tgl;
	tgl.inputTanggal();
	tgl.tampilkanTanggal();
	return 0;
}