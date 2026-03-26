#include <iostream>
using namespace std;

int main (){
	int arr[10] = {10,20,30,40,50,60,70,80,90,100};
	int cari, mid;
	int kiri = 0, kanan = 9;
	bool found = false; 
	
	cout << "Nilai yang dicari: ";
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
