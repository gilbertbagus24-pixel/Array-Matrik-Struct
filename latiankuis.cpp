#include <iostream>
#include <iomanip>
using namespace std;

struct buku{
	int id, tahun ;
	string judul, penulis;
	};

buku dat[100];
int jumlah = 0; 
int autoID = 1;

void tambahbuku(){
	int banyak;
	cout << "Masukan jumlah buku: ";
	cin >> banyak;
	cin .ignore();
	for(int i=0; i<banyak; i++){
		dat[jumlah].id = autoID++;
		cout << "Judul buku: ";
		getline(cin, dat[jumlah].judul);
		cout << "Nama penulis: ";
		getline(cin, dat[jumlah].penulis);
		cout << "Tahun rilis buku: ";
		cin >> dat[jumlah].tahun;
		cin.ignore();
		jumlah++;
		
		}
	}

void tampilbuku(){
	cout << left;
	cout << setw(8) << "ID";
	cout << setw(30) << "Judul";
	cout << setw(15) << "Penulis";
	cout << setw(10) << "Tahun rilis";
	cout << "\n---------------------------------------------------------------\n";
	for(int i = 0; i<jumlah; i++){
		cout << setw(8) << dat[i].id;
		cout << setw(30) << dat[i].judul;
		cout << setw(15) << dat[i].penulis;
		cout << setw(10) << dat[i].tahun << endl;	
		}
	}
	
void caribuku(){
	int idcari;
	cout << "Masukan Id buku: ";
	cin >> idcari;
	for(int i = 0; i<jumlah; i++){
		if(dat[i].id == idcari){
		cout << "Buku ditemukan!\n";
		cout << dat[i].judul << ", " << dat[i].penulis << ", " << dat[i].tahun << endl;
		 } else {
			cout << "DATA TIDAK DITEMUKAN!\n";
		}
	
	}

}

int carijudulbuku(buku dat[], string carijudul, int index = 0){
	if (index >= jumlah){
		return -1;
		}
	if(dat[index].judul == carijudul){
		return index;
		} else {	
			return carijudulbuku( dat ,carijudul, index +1); }
	//~ for(int i=0; i<jumlah; i++){
		//~ if (dat[i].judul == judul){
		//~ cout << "Buku ditemukan!\n";
		//~ cout << dat[i].judul << ", " << dat[i].penulis << ", " << dat[i].tahun << endl;
		//~ } else {
			//~ cout << "DATA TIDAK DITEMUKAN!\n";
			//~ }
		//~ }
	}
	
void checkreq(){
	string cari;
	cout << "Masukan judul: ";
	getline(cin, cari);
	int hasil = carijudulbuku(dat, cari, 0);
	
	if (hasil !=-1){
		cout << "Buku ditemukan!\n";
		cout << dat[hasil].judul << ", " << dat[hasil].penulis << ", " << dat[hasil].tahun << endl;
		} else {
			cout << "Buku tidak ditemukan!\n";
			}
	}

int main(){
	int pilihan=0;
	
	do {
		cout << "==MENU==\n";
		cout << "1. Tambah Buku \n";
		cout << "2. Tampilkan Semua Buku \n";
		cout << "3. Cari Buku berdasarkan ID \n";
		cout << "4. Cari berdasarkan Judul \n";
		cout << "5. Exit \n";
		cout << "Pilihan: ";
		cin >> pilihan;
		
		switch(pilihan){
			case 1 : 
				cout << "Tambah Buku\n";
				tambahbuku();
				break;
			case 2: 
				cout << "Semua Buku\n";
				tampilbuku();
				break;
			case 3:
				cout << "Cari Buku berdasarkan Id\n";
				caribuku();
				break;
			case 4: 
				cout << "Cari Bukku berdasarkan Judul\n";
				checkreq();
				break;
			case 5: 
				cout << "Exiting program...\n";
				break;
			default:
				cout << "PILIHAN TIDAK VALID\n";
			
			}
	
		} while (pilihan != 5);
		
	return 0;
	
	}
