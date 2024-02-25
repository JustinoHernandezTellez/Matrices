///2483 Producto de matrices
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, o, respuesta = 0;
    cin >> n >> m >> o;
    int mat_a[n][m], mat_b [m][o], mat_final[n][o];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat_a[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < o; j++)
            cin >> mat_b[i][j];

     for (int i = 0; i < n; i++){
         for (int j = 0; j < o; j++){
             for (int k = 0; k < m; k++){
                 respuesta += mat_a [i] [k] * mat_b [k] [j]; 
             }
          mat_final [i] [j] = respuesta;
          respuesta = 0;
         }
     }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < o; j++){
            cout << mat_final[i][j] << " ";
        }
        cout << '\n';
    } 
                

    return 0;
}
