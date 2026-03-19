#include <iostream>
using namespace std;

struct Mahasiswa {
	string nama;
	int umur; 
	float ipk;
	string matkul_favorit[2]; 
};

//~ struct ttl{
	//~ int tgl;
	//~ string bln;
	//~ int thn;
	//~ }
	
	
int main(){
	Mahasiswa mhs;
	mhs.nama = "Obert";
	mhs.umur = 18;
	mhs.ipk = 3.9;
	
	string mf[2] = {"kalk", "kalk lanj"};
	mhs.matkul_favorit[0] = mf[0];
	mhs.matkul_favorit[1	] = mf[1];
		cout << "Nama mahasiswa: " << mhs.nama << endl;
		cout << "Umur mahasiswa: " << mhs.umur << endl;
		cout << "IPK mahasiswa: " << mhs.ipk << endl;
		for (int i = 0; i < 2; i++){
			cout << mhs.matkul_favorit[i] << ", ";}
			
		Mahasiswa data_kelas[3];
		//~ ttl
		
		for (int i = 0; i < 3 ; i++){
			cout << "Mahasiswa ke- " << i + 1 << endl; 
			cout << "Nama mahasiswa: "; cin >> data_kelas[i].nama;
			cout << "Umur mahasiswa: "; cin >> data_kelas[i].umur;
			cout << "IPK mahasiswa: "; cin >> data_kelas[i].ipk;
	}
	
	
	 for (int i = 0; i < 3; i++){
			cout << "Mahasiswa ke- " << i + 1 << endl; 
			cout << "Nama mahasiswa: " << data_kelas[i].nama << endl;
			cout << "Umur mahasiswa: " << data_kelas[i].umur << endl;
			cout << "IPK mahasiswa: " << data_kelas[i].ipk << endl;
	}
			//~ for (int i = 0; i < 3 ; i++){
			//~ cout << "Mahasiswa ke- " << i + 1 << endl; 
			//~ cout << "Nama mahasiswa: "; cin >> data_kelas[i].nama;
			//~ cout << "Umur mahasiswa: "; cin >> data_kelas[i].umur;
			//~ cout << "IPK mahasiswa: "; cin >> data_kelas[i].ipk;
			//~ for (int i = 0; i < 3 ; i++){
			//~ cout << "tgl :"; cin >> ttl.tgl; 
			//~ cout << "bln : "; cin >> ttl.bln;
			//~ cout << "thn: "; cin >> ttl.thn;
			
	}
