#include <iostream>
#include<fstream>
using namespace std;
class Bensin{
      public :
             Bensin();
             void pilihan();
             void hitung_liter();
             void cetak();
      private :
      		ofstream file;
              double uang, liter, tampil;
              char pil;
              char ambil;
              string nama, jenis;
              double harga, pertamax, pertalite;
      };
Bensin::Bensin(){
     harga = 0;
     pertalite = 7000;
     pertamax = 9000;
     }
void Bensin::pilihan(){
	cout<<"Masukkan nama : "; cin>>nama;
	
     cout<<"selamat Datang di SPBU"<<endl;
     cout<<"beli berdasarkan : "<<endl;
     cout<<"a --> pertalite "<<endl;
     cout<<"b --> pertamax "<<endl;
     cout<<"masukkan pilihan anda = ";
     cin>>ambil;
     if(ambil == 'a' || ambil == 'b')
     hitung_liter();
 }
void Bensin::hitung_liter(){
     cout<<"masukkan jumlah liter : ";
     cin>> liter;
      if(ambil == 'a'){
              harga = pertalite;
              jenis="pertalite";
              }
     else if (ambil == 'b'){
          harga = pertamax;
          jenis="Pertamax";
          }
     tampil = harga * liter;
     cout<<"uang yang harus dibayar : Rp "<<tampil <<".00"<<endl;
     cetak();
     }
void Bensin::cetak(){
		file.open("struk.txt");
	file<<"Nama Pembeli		: "<<nama<<endl;
	file<<"Jenis bensin		: "<< jenis<<endl;
	file<<"Total liter		: "<<liter<<endl;
	file<<"Total Harga		: "<<tampil<<endl;
	system("START/MIN NOTEPAD struk.txt");
}
int main()
{
    Bensin x;
    x.pilihan();

}
