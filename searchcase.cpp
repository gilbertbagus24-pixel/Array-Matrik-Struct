#include <iostream>
using namespace std;

int main (){
	string arr[4] = {"pebri","acid","abid"};
	int index = 0;
	string nilai_cari;
	
	cout << "Masukan nama yang ingin dicari: "; 
	cin >> nilai_cari;
	arr[3] = nilai_cari;
	
	while (arr[index]!=nilai_cari) {
			index +=1;
		}
		if (index>2) {
			cout << "tidak ada " << nilai_cari << " di dalam array";
			}else{
				cout << nilai_cari << " ditemukan di index ke- " << index+1	;
				}
	}
