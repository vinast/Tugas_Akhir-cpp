#include <iostream>
#include <fstream>

using namespace std;

int pilih[10], client;
string jam;

struct costumer_pelayan{
	
	string nama;
	string pelayan;
	string film;
	string kursi;
};


struct data_tiket {
	
	string jenis_tiket;
	int harga_tiket;
	int harga_total;
	int jumlah_tiket;
	
};


struct jadwal_tayang{
	
	int hari;
	
	
};

costumer_pelayan costumer;
data_tiket tiket;
jadwal_tayang jt;



void regist_costumer(){
	
	int pilih_pelayan;
	
	cout<<"||==================================================||"<<endl;
	cout<<"||                 WELCOME TO PROGRAM               ||"<<endl;
	cout<<"||                   TIKET BIOSKOP                  ||"<<endl;
	cout<<"||                   DIDIK VINASTU                  ||"<<endl;
	cout<<"||==================================================||"<<endl;
	cout<<"DAFTAR NAMA PELAYAN"<<endl;
	cout<<" 1. Vito"<<endl;
	cout<<" 2. Bagas"<<endl;
	cout<<" 3. Radip"<<endl;
	cout<<" 4. Rico"<<endl;
	cout<<" 5. Gaskur"<<endl;
	pelayan:
		cout<<endl;
		cout<<"Pilih Salah Satu Nama Pelayan : ";
		cin>>pilih_pelayan;
		cout<<"--------------------------------------------------"<<endl;
		switch (pilih_pelayan){
			
			case 1:
				costumer.pelayan="Vito";
				break;
			case 2:
				costumer.pelayan="Bagas";
				break;
			case 3:
				costumer.pelayan="Radip";
				break;
			case 4:
				costumer.pelayan="Rico";
				break;
			case 5:
				costumer.pelayan="Gaskur";
				break;
				
			
		}
		while(pilih_pelayan>=6){
			goto pelayan;
		};
}

void pembelian(){
	
	int pil_jenis_tiket;
	
	cout<<"DAFTAR JENIS TIKET"<<endl;
	cout<<" 1. Reguler"<<endl;
	cout<<" 2. VIP"<<endl;
	cout<<" 3. VVIP"<<endl;
	jenistiket:
		cout<<endl;
		cout<<"Pilih Jenis Tiket Anda : ";
		cin>>pil_jenis_tiket;
		cout<<"--------------------------------------------------"<<endl;
		switch (pil_jenis_tiket){
			
			case 1:
				tiket.jenis_tiket="Reguler";
				tiket.harga_tiket=(50000);
				break;
			case 2:
				tiket.jenis_tiket="VIP";
				tiket.harga_tiket=(100000);
				break;
			case 3:
				tiket.jenis_tiket="VVIP";
				tiket.harga_tiket=(150000);
				break;
		} 
		
}

void regis(){
	cin.ignore();
	cout<<"Masukkan Nama \t: ";
	getline(cin,costumer.nama);
	cout<<"Judul Film    \t: ";
	getline(cin,costumer.film);
	cout<<"No Kursi      \t: ";
	cin>>costumer.kursi;
	cout<<"Jumlah tiket  \t: ";
	cin>>tiket.jumlah_tiket;
	tiket.harga_total=tiket.harga_tiket*tiket.jumlah_tiket;
}

void tampil(){
	
	int bayar, kembalian;
	ofstream file ("Sturct.txt");
	cout<<endl;
	
	if(!file.is_open()){
		
		cout<< "Tidak Bisa Membuka File";
	}
	
	else {
	
	cout<<"||==================================================||"<<endl;
	file<<"||==================================================||"<<endl;
	cout<<"||                 Data Pemesanan                   ||"<<endl;
	file<<"||                 Data Pemesanan                   ||"<<endl;
	cout<<"||==================================================||"<<endl;
	file<<"||==================================================||"<<endl;
	cout<<"|| Nama Pembeli            : "<<costumer.nama<<endl;
	file<<"|| Nama Pembeli            : "<<costumer.nama<<endl;
	cout<<"|| Judul Film              : "<<costumer.film<<endl;
	file<<"|| Judul Film              : "<<costumer.film<<endl;
	cout<<"|| No Kursi                : "<<costumer.kursi<<endl;
	file<<"|| No Kursi                : "<<costumer.kursi<<endl;
	cout<<"|| Jenis Tiket             : "<<tiket.jenis_tiket<<endl;
	file<<"|| Jenis Tiket             : "<<tiket.jenis_tiket<<endl;
	cout<<"|| Harga Tiket             : "<<tiket.harga_tiket<<endl;
	file<<"|| Harga Tiket             : "<<tiket.harga_tiket<<endl;
	cout<<"|| Hari                    : "<<jt.hari<<endl;
	file<<"|| Hari                    : "<<jt.hari<<endl;
	cout<<"|| Jam                     : "<<jam<<endl;
	file<<"|| Jam                     : "<<jam<<endl;
	cout<<"|| Jumlah Tiket            : "<<tiket.jumlah_tiket<<endl;
	file<<"|| Jumlah Tiket            : "<<tiket.jumlah_tiket<<endl;
	cout<<"||                           "<<endl;
	file<<"||                           "<<endl;
	cout<<"|| Harga Total             : "<<tiket.harga_total<<endl;
	file<<"|| Harga Total             : "<<tiket.harga_total<<endl;
	cout<<"||--------------------------------------------------||"<<endl;
	file<<"||--------------------------------------------------||"<<endl;
	cout<<"||                             Dilayani : "<<costumer.pelayan<<endl;
	file<<"||                             Dilayani : "<<costumer.pelayan<<endl;
	cout<<"||==================================================||"<<endl;
	file<<"||==================================================||"<<endl;
	cout<<endl;
	file<<endl;
	cout<<"Masukkan Nominal Untuk bayar : ";
	cin>>bayar;
	file<<"Masukkan Nominal Untuk bayar : "<<bayar;
	cout<<endl;
	file<<endl;
	kembalian=bayar-tiket.harga_total;
	cout<<"Kembalian \t: "<<kembalian<<endl;
	file<<"Kembalian \t: "<<kembalian<<endl;
	
	
	file.close();
}
}

void jam_tayang(){
	
	cout<<endl;
	cout<<"||==================================================||"<<endl;
	cout<<"||                 WELCOME TO PROGRAM               ||"<<endl;
	cout<<"||                   TIKET BIOSKOP                  ||"<<endl;
	cout<<"||                   DIDIK VINASTU                  ||"<<endl;
	cout<<"||==================================================||"<<endl;
	cout<<"HARI TERSEDIA "<<endl;
	cout<<" 1. Senin"<<endl;
	cout<<" 2. Selasa"<<endl;
	cout<<" 3. Rabu"<<endl;
	cout<<" 4. Kamis"<<endl;
	cout<<" 5. Jumat(Buka Jam 15.00)"<<endl;
	cout<<" 6. Sabtu"<<endl;
	cout<<" 7. Minggu"<<endl;
	cout<<endl;
	cout<<"Pilih Hari (1-7) \t: ";
	cin>>jt.hari;
	switch(jt.hari){
		
		case 1: 
		cout<<endl; 
		cout<<"| ------------ |"<<endl;
		cout<<"|    Senin     |"<<endl;
		cout<<"| ------------ |"<<endl;
		cout<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"JAM TAYANG TERSEDIA "<<endl;
		cout<<" 1. 09.00 WIB"<<endl;
		cout<<" 2. 15.00 WIB"<<endl;
		cout<<" 3. 19.00 WIB"<<endl;
		cout<<endl;
		cout<<"Pilih Jam Tayang (1-3)\t: ";
		cin>>pilih[10];
		if(pilih[10]==1){
			
			cout<<"09.00 WIB"<<endl;
			jam="09.00 WIB";
		
		}
		else if(pilih[10]==2){
			
			cout<<"15.00 WIB"<<endl;
			jam="15.00 WIB";
		}
		else if(pilih[10]==3){
			
			cout<<"19.00 WIB"<<endl;
			jam="19.00 WIB";
		}
		break;
		case 2: 
		cout<<endl; 
		cout<<"| ------------ |"<<endl;
		cout<<"|    Selasa    |"<<endl;
		cout<<"| ------------ |"<<endl;
		cout<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"JAM TAYANG TERSEDIA "<<endl;
		cout<<" 1. 09.00 WIB"<<endl;
		cout<<" 2. 15.00 WIB"<<endl;
		cout<<" 3. 19.00 WIB"<<endl;
		cout<<endl;
		cout<<"Pilih Jam Tayang (1-3)\t: ";
		cin>>pilih[10];
		if(pilih[10]==1){
			
			cout<<"09.00 WIB"<<endl;
			jam="09.00 WIB";
		
		}
		else if(pilih[10]==2){
			
			cout<<"15.00 WIB"<<endl;
			jam="15.00 WIB";
		}
		else if(pilih[10]==3){
			
			cout<<"19.00 WIB"<<endl;
			jam="19.00 WIB";
		}
		break;
		case 3: 
		cout<<endl; 
		cout<<"| ------------ |"<<endl;
		cout<<"|     Rabu     |"<<endl;
		cout<<"| ------------ |"<<endl;
		cout<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"JAM TAYANG TERSEDIA "<<endl;
		cout<<" 1. 09.00 WIB"<<endl;
		cout<<" 2. 15.00 WIB"<<endl;
		cout<<" 3. 19.00 WIB"<<endl;
		cout<<endl;
		cout<<"Pilih Jam Tayang (1-3)\t: ";
		cin>>pilih[10];
	    	if(pilih[10]==1){
			
			cout<<"09.00 WIB"<<endl;
			jam="09.00 WIB";
		
		}
		else if(pilih[10]==2){
			
			cout<<"15.00 WIB"<<endl;
			jam="15.00 WIB";
		}
		else if(pilih[10]==3){
			
			cout<<"19.00 WIB"<<endl;
			jam="19.00 WIB";
		}
		break;
		case 4: 
		cout<<endl; 
		cout<<"| ------------ |"<<endl;
		cout<<"|    Kamis     |"<<endl;
		cout<<"| ------------ |"<<endl;
		cout<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"JAM TAYANG TERSEDIA "<<endl;
		cout<<" 1. 09.00 WIB"<<endl;
		cout<<" 2. 15.00 WIB"<<endl;
		cout<<" 3. 19.00 WIB"<<endl;
		cout<<endl;
		cout<<"Pilih Jam Tayang (1-3)\t: ";
		cin>>pilih[10];
			if(pilih[10]==1){
			
			cout<<"09.00 WIB"<<endl;
			jam="09.00 WIB";
		
		}
		else if(pilih[10]==2){
			
			cout<<"15.00 WIB"<<endl;
			jam="15.00 WIB";
		}
		else if(pilih[10]==3){
			
			cout<<"19.00 WIB"<<endl;
			jam="19.00 WIB";
		}
		break;
		case 5: 
		cout<<endl; 
		cout<<"| ------------ |"<<endl;
		cout<<"|    Jum'at    |"<<endl;
		cout<<"| ------------ |"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"JAM TAYANG TERSEDIA "<<endl;
		cout<<" 1. Tidak tersedia"<<endl;
		cout<<" 2. Tidak tersedia"<<endl;
		cout<<" 3. 19.00 WIB"<<endl;
		cout<<endl;
		cout<<"Pilih Jam Tayang (1-3)\t: ";
		cin>>pilih[10];
			if(pilih[10]==1){
			
			cout<<"Jam Tayang Tidak Tersedia..."<<endl;
			jam="Jam Tayang Tidak Tersedia...";
		
		}
		else if(pilih[10]==2){
			
			cout<<"Jam Tayang Tidak tersedia..."<<endl;
			jam="Jam Tayang Tidak Tersedia...";
		}
		else if(pilih[10]==3){
			
			cout<<"19.00 WIB"<<endl;
			jam="19.00 WIB";
		}
		break;
		case 6: 
		cout<<endl; 
		cout<<"| ------------ |"<<endl;
		cout<<"|    Sabtu     |"<<endl;
		cout<<"| ------------ |"<<endl;
		cout<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"JAM TAYANG TERSEDIA "<<endl;
		cout<<" 1. 09.00 WIB"<<endl;
		cout<<" 2. 15.00 WIB"<<endl;
		cout<<" 3. 19.00 WIB"<<endl;
		cout<<endl;
		cout<<"Pilih Jam Tayang (1-3)\t: ";
		cin>>pilih[10];
	    	if(pilih[10]==1){
			
			cout<<"09.00 WIB"<<endl;
			jam="09.00 WIB";
		
		}
		else if(pilih[10]==2){
			
			cout<<"15.00 WIB"<<endl;
			jam="15.00 WIB";
		}
		else if(pilih[10]==3){
			
			cout<<"19.00 WIB"<<endl;
			jam="19.00 WIB";
		}
		break;
		case 7: 
		cout<<endl; 
		cout<<"| ------------ |"<<endl;
		cout<<"|    Minggu    |"<<endl;
		cout<<"| ------------ |"<<endl;
		cout<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"JAM TAYANG TERSEDIA "<<endl;
		cout<<" 1. 09.00 WIB"<<endl;
		cout<<" 2. 15.00 WIB"<<endl;
		cout<<" 3. 19.00 WIB"<<endl;
		cout<<endl;
		cout<<"Pilih Jam Tayang (1-3)\t: ";
		cin>>pilih[10];
			if(pilih[10]==1){
			
			cout<<"09.00 WIB"<<endl;
			jam="09.00 WIB";
		
		}
		else if(pilih[10]==2){
			
			cout<<"15.00 WIB"<<endl;
			jam="15.00 WIB";
		}
		else if(pilih[10]==3){
			
			cout<<"19.00 WIB"<<endl;
			jam="19.00 WIB";
		}
		break;
	}
	
}



int main(){
	
	char konfirmasi;
    cout<<"Masukkan Angka Random Untuk Lanjut...!! : ";
	cin>>client; 
	cout<<endl;
	for(int i=1; i<=client; i++){
		
		menu:
		regist_costumer();
    	pembelian();
     	regis();
     	system("cls");
	    jam_tayang();
	    system("cls");
    	tampil();
    	cout<<endl;
    	cout<<"APAKAH INGIN KEMBALI KE MENU UTAMA ? (Y/N) : ";
    	cin>>konfirmasi;
    	if(konfirmasi=='y' || konfirmasi=='Y'){
    		system("cls");
    		goto menu;
		}
	}
}
	



















