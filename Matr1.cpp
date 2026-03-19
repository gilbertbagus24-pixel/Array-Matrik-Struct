#include <iostream>
using namespace std;



int main(){
	int mat[3][2];
	int trans[2][3];
		for (int i=0; i < 3; i++){
		for (int j=0; j < 2; j++){
			cout << "Input [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
	}	
}
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            trans[j][i] = mat[i][j];
        }
    }
    cout << "\nMatriks Biasa :\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
        cout << "\nMatriks Transpose :\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
		
