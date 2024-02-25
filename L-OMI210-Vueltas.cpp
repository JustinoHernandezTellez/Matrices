///843 L-OMI210-Vueltas
#include<bits/stdc++.h>
using namespace std;

int main(){

    int m, n;
    cin >> m >> n;
    int mat[m][n], mat_v[m][n], mat_h[m][n], mat_v_h[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    ///Vertical
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            mat_v [m - i - 1][j] =  mat[i][j];
        }
    }
    ///Horizontal
    for (int i = 0; i < m; i++){
        for (int j = n - 1; j > -1; j--){
            mat_h [i][n - 1 - j] =  mat[i][j];
        }
    }
    ///Vertical + Horizontal
    for (int i = 0; i < m; i++){
        for (int j = n - 1; j > -1; j--){
            mat_v_h [i][n - 1 - j] =  mat_v[i][j];
        }
    }
    int vueltas;
    char tipo_de_vuelta;
    cin >> vueltas;
    int indice = 0;
    while (vueltas--){
          cin >> tipo_de_vuelta;
          if (tipo_de_vuelta == 'V'){
             if (indice == 1){
                indice = 0;
             } else if (indice == 0){
                indice = 1;
             } else if (indice == 2){
                indice = 3;
             } else if (indice == 3){
                indice = 2;
             }
          } else if (tipo_de_vuelta == 'H'){
             if (indice == 2){
                indice = 0;
             } else if (indice == 0){
                indice = 2;
             } else if (indice == 1){
                indice = 3;
             } else if (indice == 3){
                indice = 1;
             } 
          }
    }
    if (indice == 0){
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                cout << mat[i][j] << " ";
            }
            cout << '\n';
        }

    } else if (indice == 1){
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                cout << mat_v[i][j] << " ";
            }
            cout << '\n';
        }

    } else if (indice == 2){
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                cout << mat_h[i][j] << " ";
            }
            cout << '\n';
        }

    } else if (indice == 3){
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                cout << mat_v_h[i][j] << " ";
            }
            cout << '\n';
        }

    }

    return 0;
}
