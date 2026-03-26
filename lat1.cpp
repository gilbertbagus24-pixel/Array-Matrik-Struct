#include <iostream>
using namespace std;

struct TTL {
	int tanggal;
	string bulan;
	int tahun; 
	};

struct Mahasiswa {
	string nama; // nama mahasiswa
	int umur; // umur mahasiswa
	float ipk; // ipk mahasiswa
	TTL kelahiran;
};

int main() {
	 Mahasiswa data_kelas[3];
	 TTL mhs[3];

	 for (int i = 0; i < 1; i++) {
		cout << "Mahasiswa ke-" << i + 1 << endl;
		cout << "Nama mahasiswa: "; cin >> data_kelas[i].nama;
		cout << "Umur mahasiswa: "; cin >> data_kelas[i].umur;
		cout << "IPK mahasiswa: "; cin >> data_kelas[i].ipk;
		cout << "Tanggal Lahir: "; cin >> data_kelas[i].kelahiran.tanggal;
		cout << "Bulan Lahir: "; cin >> data_kelas[i].kelahiran.bulan;
		cout << "Tahun Lahir: "; cin >> data_kelas[i].kelahiran.tahun;
	 }

	 for (int i = 0; i < 1; i++) {
		cout << "Mahasiswa ke-" << i + 1 << endl;
		cout << "Nama mahasiswa: " << data_kelas[i].nama << endl;
		cout << "Umur mahasiswa: " << data_kelas[i].umur << endl;
		cout << "IPK mahasiswa: " << data_kelas[i].ipk << endl << endl;
		cout << "TTL: " << data_kelas[i].kelahiran.tanggal << " " << data_kelas[i].kelahiran.bulan << " " << data_kelas[i].kelahiran.tahun << endl;
	 }
}