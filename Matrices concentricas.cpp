///11395 Matrices concentricas
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    int ini = 0, val = 0;
    while (ini <= n / 2){
          for (int i = ini; i < n - ini; i++){
              if (mat[ini][i] != val){
                 cout << "0\n";
                 return 0;
              }
          }
          
          for (int i = ini; i < n - ini; i++){
              if (mat[i][ini] != val){
                 cout << "0\n";
                 return 0;
              }
          }
          for (int i = ini; i < n - ini; i++){
              if (mat[n - ini - 1][i] != val){
                 cout << "0\n";
                 return 0;
              }
          }
          for (int i = ini; i < n - ini; i++){
              if (mat[i][n - ini - 1] != val){
                 cout << "0\n";
                 return 0;
              }
          }
          ini++;
          val++;

    }
    cout << "1\n";
    return 0;
}
