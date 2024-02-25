///10792 Bloques cayendo
#include <bits/stdc++.h>
using namespace std;

int main(){
    char mat[10][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            mat[i][j] = '.';
        }
    }
    int n; 
    cin >> n;
    while (n--){
          int columna, indice;
          cin >> columna;
          for (int i = 0; i < 10; i++){
              if (mat[i][columna] == '#' || mat[i][columna + 1] == '#'){
                 indice = i - 1;
                 break;
              }
              if (mat[i][columna] != '#' && i == 9){
                 indice = i;
              }

          }
          mat[indice][columna] = '#';
          mat[indice][columna + 1] = '#';
          mat[indice - 1][columna] = '#';
          mat[indice - 1][columna + 1] = '#';

    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cout << mat[i][j];
        }
        cout << '\n';
    }
    return 0;
}
