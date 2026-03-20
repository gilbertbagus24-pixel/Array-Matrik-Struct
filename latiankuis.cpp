#include <iostream>
using namespace std;

struct buku(){
	int id, tahun ;
	string nama, penulis;
	}

int main(){
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
