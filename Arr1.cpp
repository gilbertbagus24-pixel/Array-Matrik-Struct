#include <iostream>

using namespace std;

int main () {
	int mat[2][3][4] = {
		{
			{1, 2, 3, 4},
			{4, 5, 6, 4},
			{7, 8, 9, 10}
		},
		{
			{10, 12, 13, 14},
			{14, 15, 16, 14},
			{17, 18, 19, 19}
		}
		};
	for (int layer=0; layer < 2; layer++){
		cout << "Layer ke-" << layer << ": " << endl;
		for (int baris=0; baris < 3; baris++){
			for (int kolom = 0; kolom < 4; kolom++){
			cout << mat[layer][baris][kolom] << "\t";
		}
		cout << endl;
	}
	cout << endl;
};
}
