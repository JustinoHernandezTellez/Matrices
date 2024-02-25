///2880 Blancas vs negras
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n, blancas = 0, negras = 0, rey_negro = 0, rey_blanco = 0;
    cin >> m >> n;
    int mat[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> mat[i][j];
            if (mat[i][j] % 2 == 0){
               negras++; 
            } else {
               blancas++;
            }
        }
    }
    int k, l;
    cin >> k >> l;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (mat[i][j] == k) rey_negro++;
            else if (mat[i][j] == l) rey_blanco++;
        }
    }
    cout << negras << " " << blancas << '\n';
    if (rey_blanco == 0 || rey_negro == 0) cout << "JAQUE MATE\n";
    else cout << "NO JAQUE\n";
    

    return 0;
}
