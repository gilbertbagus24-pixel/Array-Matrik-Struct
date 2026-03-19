#include <iostream>
#include <iomanip>
using namespace std;

const int max_mhs = 10;
const int max_komp = 10;  

struct Komponen{
	int no;
	string nama;
	float skor;
};

struct Mahasiswa{
	string nomhs; 
	string nama;
	string matkul;
	int banyakkomponen;
	Komponen komp[max_komp];
};


int main(){ 
	Mahasiswa mhs[max_mhs];

	int jmlmhs;
	cout << "Banyaknya mahasiswa: ";
	cin >> jmlmhs;
	
	for(int i = 0; i<jmlmhs; i++){
		cout << "\nMhs [" << i << "].NoMhs = ";
		cin >>  mhs[i].nomhs;
		cout << "\nMhs [" << i << "].Nama = ";
		cin >>  mhs[i].nama;
		cout << "\nMhs [" << i << "].Matkul = ";
		cin >>  mhs[i].matkul;
		cout << "\nMhs [" << i << "].BanyakKomponen = ";
		cin >>  mhs[i].banyakkomponen;

		for(int j=0; j < mhs[i].banyakkomponen; j++){
			cout << "\nMhs[" << i << "].Komp[" << j << "].No =  ";
			cin >> mhs[i].komp[j].no;
			cout << "\nMhs[" << i << "].Komp[" << j << "].Nama =  ";
			cin >> mhs[i].komp[j].nama;
			cout << "\nMhs[" << i << "].Komp[" << j << "].Skor =  ";
			cin >> mhs[i].komp[j].skor;		
			
		}		

	}
	
	for(int i = 0; i<jmlmhs; i++){
		cout << "\nNo.Mhs : " << mhs[i].nomhs << endl;
		cout << "Nama : " << mhs[i].nama << endl;
		cout << "Matakuliah : " << mhs[i].matkul << endl;

		cout << setw(5) << "No";
		cout << setw(20) << "Nama Komponen";
		cout << setw(10) << "Nilai\n";

		for(int j=0; j<mhs[i].banyakkomponen; j++){
			cout << setw(5) << mhs[i].komp[j].no ;
			cout << setw(20) << mhs[i].komp[j].nama ;
			cout << setw(10) << mhs[i].komp[j].skor << endl;
		}
		cout << "\n";	
	}
	
	
	
}

