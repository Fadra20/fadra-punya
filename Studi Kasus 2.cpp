#include<iostream>
#include<fstream>
using namespace std;

class warung{
		friend istream& operator>>(istream&, warung&);
		friend ostream& operator<<(ostream&, const warung&);
	public :
		warung();
		void rumus();
		void cetak();
	private :
		ofstream file;
		float agp,ag,ud,cm,ab, total, sub,banyak;
		double a, b, c;
};

warung::warung(){
	agp=21000;
	ag=17000;
	ud=19000;
	cm=20000;
	ab=25000;
}


istream& operator>>(istream& in, warung& masukan) {

	cout << "Menu Rumah makan : "<<endl;
	cout<<"1. Ayam Geprek = 21000 "<<endl;
	cout<<"2. Ayam Goreng = 17000 "<<endl;
	cout<<"3. Udang Goreng = 19000 "<<endl;
	cout<<"4. Cumi Goreng = 20000 "<<endl;
	cout<<"5. Ayam Bakar = 25000 "<<endl;
	cout<<"Masukkan Pilihan Anda : ";
	in >> masukan.a;
	cout<<"Berapa banyak : "; 
	in >> masukan.b;
	cout<<"Jarak Rumah Anda Satuan KM: ";
	in >> masukan.c;
	return in;
}



void warung::rumus(){
	if(a==1){
		a=agp;
		banyak=a*b;
		if(c<3){

			if(banyak<=25000){
				total=banyak+15000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total=banyak+12000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total=(banyak-sub)+10000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total=(banyak-sub)+7000;
			}
	
		} 
		else if(c>=3){
			if(banyak<=25000){
				total=banyak+25000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total=banyak+22000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total=(banyak-sub)+20000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total=(banyak-sub)+14000;
			}	
			
		}
		
	} else if(a==2){
		a=ag;
		banyak=a*b;
		if(c<3){

			if(banyak<=25000){
				total=banyak+15000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total=banyak+12000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total=(banyak-sub)+10000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total=(banyak-sub)+7000;
			}
	
		} 
		else if(c>=3){
			if(banyak<=25000){
				total=banyak+25000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total=banyak+22000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total=(banyak-sub)+20000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total=(banyak-sub)+14000;
			}	
			
		}
		
	} else if(a==3){
		a=ud;
		banyak=a*b;
		if(c<3){

			if(banyak<=25000){
				total=banyak+15000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total=banyak+12000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total=(banyak-sub)+10000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total=(banyak-sub)+7000;
			}
	
		} 
		else if(c>=3){
			if(banyak<=25000){
				total=banyak+25000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total=banyak+22000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total=(banyak-sub)+20000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total=(banyak-sub)+14000;
			}	
			
		}
		
	}else if(a==4){
		a=cm;
		banyak=a*b;
		if(c<3){

			if(banyak<=25000){
				total=banyak+15000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total=banyak+12000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total=(banyak-sub)+10000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total=(banyak-sub)+7000;
			}
	
		} 
		else if(c>=3){
			if(banyak<=25000){
				total=banyak+25000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total=banyak+22000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total=(banyak-sub)+20000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total=(banyak-sub)+14000;
			}	
			
		}
		
	} else if(a==5){
		a=ab;
		banyak=a*b;
		if(c<3){

			if(banyak<=25000){
				total=banyak+15000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total=banyak+12000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total=(banyak-sub)+10000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total=(banyak-sub)+7000;
			}
	
		} 
		else if(c>=3){
			if(banyak<=25000){
				total=banyak+25000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total=banyak+22000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total=(banyak-sub)+20000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total=(banyak-sub)+14000;
			}	
			
		}
		
	}

}


ostream& operator<<(ostream& out, const warung& keluaran) {
out << "Total nya adalah : Rp. " << keluaran.total << endl;

return out;
}
void warung::cetak(){
	file.open("struk.txt");
	file<<"Harga Satuan		: Rp. "<<a<<endl;
	file<<"Banyak Barang		: "<<b<<endl;
	file<<"Jarak			: "<<c<<" KM"<<endl;
	file<<"Total Harga		: Rp. "<<total<<endl;
	system("START/MIN NOTEPAD struk.txt");
	
}

main(){
	warung x;
	cin>>x;
	x.rumus();
	cout<<x;
	x.cetak();
	
}
