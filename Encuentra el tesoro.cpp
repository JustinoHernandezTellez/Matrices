////10633 Encuentra el tesoro
#include <bits/stdc++.h>
using namespace std;

int main(){
    int matriz[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }
    if (matriz[0][0] == matriz[1][1] && matriz[2][2] == matriz[2][0] && matriz[2][0] == matriz[0][2]){
       cout << "Tesoro encontrado\n"; 
    } else {
       cout << "Sigue buscando\n"; 
    }

    return 0;
}
