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
	for(int i = 0; i<jumlah;
	 i++){
		cout << setw(8) << dat[i].id;
		cout << setw(30) << dat[i].judul;
		cout << setw(15) << dat[i].penulis;
		cout << setw(10) << dat[i].tahun << endl;	
		}
	}
	
void caribuku(){
	
	}

	int pilihan;
	
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
			
			case 2: 
			cout << "2. Semua Buku\n";
			
			case 3:
			cout << "3. Cari Buku berdasarkan Id\n";
			
			case 4: 
			cout << "4. Cari Bukku berdasarkan Judul\n";
			
			
			}
	
		} while (pilihan != 5);
		
		return 0;
	
	}
