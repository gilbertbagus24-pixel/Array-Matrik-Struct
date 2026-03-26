#include <iostream>

using namespace std;

struct buku{
	string judul;
	int harga;
	};
	
int main(){
	bool found = false;
	int cari;
	int idx = 0;
	
	cout << "Input harga : " << endl;
	cin >> cari;
	buku programmer[5]={
		{"PHP", 10000}, 
		{"JS", 20000}, 
		{"CPP", 30000},
		{"PY", 40000}, 
		{"HTML", 50000}, 
		};
	buku cerita[5]={
		{"Buku A", 20000}, 
		{"Buku B", 10000}, 
		{"Buku C", 40000},
		{"Buku D", 50000}, 
		{"Buku E", 30000}, 
		};
		
		while(idx<5 && !found){
		if(cerita[idx].harga == cari) {
			found = true;
			} else {
				idx++;
				}
		}
	if (found){
		cout << "Buku dengan harga "<< cari << " adalah "<< cerita[idx].judul << endl;
		} else {
			cout << "Data tidak ditemukan.. \n";
			}
	
		
		idx =0;
		int mid;
		int kiri = 0, kanan = 4;
		found = false;
		while ((!found) && (kiri <=kanan)) {
		mid = (kiri + kanan)/2; 
		if (cari == programmer[mid].harga){
			found = true; 
			} else {
				if (cari < programmer[mid].harga) {
					kanan = mid - 1; 
					}else{
						kiri = mid + 1; 
						}
				}
		}
	if(found == true) {
		cout << "Buku dengan harga " << cari << " adalah " << programmer[mid].judul;
		} else {
			cout << "data nya gaada";
			};

}

