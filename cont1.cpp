#include <iostream>
using namespace std;

struct presiden {
	string nama;
	int gaji;	
};

void ubahgaji(presiden& p, int nominal) {
	p.gaji = nominal;
	}
	
void tampilkan(presiden* p){
	cout << "Nama: " << p->nama << endl;
	cout << "Gaji: " << p->gaji << endl;
	
	}
		
int main(){
	presiden pr;
	pr.nama= "TRUMP";
	pr.gaji=500000;
	tampilkan(&pr);
	//~ cout << "Gaji" << pr.nama << " Sekarang adalah: " << pr.gaji << endl;
	//~ ubahgaji(pr, 1000000);
	//~ cout << "Gaji" << pr.nama << " Sekarang adalah: " << pr.gaji << endl;	
	}
