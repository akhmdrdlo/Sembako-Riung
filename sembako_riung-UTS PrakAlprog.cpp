#include <iostream>
#include <conio.h>
using namespace std;

string barang1;
int harga1;
int inptBarang1,qty1,qty2,konfirm,qtyTotal,harga,totalHarga,harga2,harga3,ongkir,diskon,hargaTotal,totalHarga2;
main(){
	do{
	system("cls");
    int harga2 = totalHarga;
    int qty2 = qtyTotal;
	cout<<"Nama : Akhmad Ridlo Rifa'i\n"
	<<"NIM/Kelas : 1227050013 | IF A\n";
	cout<<"=================================\n"
	<<"Selamat Datang di Sembako Riung!!\n"
	<<"Pilih Barang yang akan kalian beli!!\n"
	<<"1.Mie Instan 1 Box | Rp.75000\n"
	<<"2.Gulaku Gula Pasir 5 kg | Rp.60000\n"
	<<"3.Tepung Segitiga Hejo 5 kg | Rp.55000\n"
	<<"4.Kecap Bonga 1 lt | Rp.40000\n"
	<<"5.Saos Pedas Mantap EFG 5 kg | Rp.45000\n"
	<<"Pilih belanjaan kamu antara 1 sampai 5"<<endl;
	cin>>inptBarang1;
	cout<<"============================"<<endl;
	cout<<"Ingin beli berapa?"<<endl;
	cin>>qty1;
		if(inptBarang1==1){
			barang1 = "Mie Instan";
			harga1 = 75000 * qty1;
		}else if(inptBarang1==2){
			barang1 = "Gulaku Gula Pasir";
			harga1 = 60000 * qty1;			
		}else if(inptBarang1==3){
			barang1 = "Tepung Segitiga Hejo";
			harga1 = 55000 * qty1;			
		}else if(inptBarang1==4){
			barang1 = "Kecap Bonga";
			harga1 = 40000 * qty1;			
		}else if(inptBarang1==5){
			barang1 = "Saos Pedas Mantap";
			harga1 = 45000 * qty1;			
		}else{
			cout<<"Maaf anda belum memesan apapun!! Silahkan pesan sesuatu!!"<<endl;
		}
		int checkout;
        qtyTotal = qty1 + qty2;
        totalHarga = harga1 + harga2;
        cout <<"Total harga barang saat ini sebesar Rp."<<totalHarga<< endl;
		cout<<"===================================\n";
		cout<<"Ada lagi yang ingin ditambahkan?(0 utk checkout,1 utk kembali)"<<endl;
		cin>>konfirm;
	}while(konfirm==1);
	cout<<"==============================="<<endl;
	    ongkir = 10000 * qtyTotal;
	    hargaTotal = totalHarga;
	    totalHarga = hargaTotal + ongkir;
		cout<<"Anda dikenakan ongkir sebesar Rp."<<ongkir<<endl;
		double diskon = 0.0;
		if (hargaTotal >= 150000 && hargaTotal < 250000) {
		    diskon = 0.1;
		    cout<<"Anda mendapat diskon 10% setelah belanja diatas Rp.150000!!"<<endl;
		} else if (hargaTotal >= 250000 && hargaTotal < 400000) {
		    diskon = 0.15;
		    cout<<"Anda mendapat diskon 15% setelah belanja diatas Rp.250000!!"<<endl;
		} else if (hargaTotal >= 400000) {
		    diskon = 0.2;
		    cout<<"Anda mendapat diskon 20% setelah belanja diatas Rp.400000!!"<<endl;
		}
		double potonganHarga = hargaTotal * diskon;
		double hargaAkhir = hargaTotal - potonganHarga;
		cout<<"Total harga sebelum diskon sebesar Rp."<<hargaTotal<<endl;
		cout<<"Potongan harga sebesar Rp."<<potonganHarga<<endl;
		cout<<"Total harga yang harus anda bayarkan sebesar Rp."<<hargaAkhir<<endl;
		cout<<"=================================\n"
		<<"Terimakasih telah berbelanja di Sembako Riung!!"<<endl;

}
