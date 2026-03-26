#include <iostream>
using namespace std;

int main (){
	string arr[3] = {"azra","gilbert", "orlen"};
	string cari; 
	int mid;
	int kiri = 0, kanan = 2;
	bool found = false; 
	
	for(int i = 0; i<3; i++)
	cout << " Nama "<< i+1 << arr[i] << endl;
	cout << "Nama yang dicari: ";
	cin >> cari;
	
	while ((!found) && (kiri <=kanan)) {
		mid = (kiri + kanan)/2; 
		if (cari == arr[mid]){
			found = true; 
			} else {
				if (cari < arr[mid]) {
					kanan = mid - 1; 
					}else{
						kiri = mid + 1; 
						}
				}
		}
	if(found == true) {
		cout << "data di temukan di index ke- " << mid;
		} else {
			cout << "data nya gaada";
			};

}

