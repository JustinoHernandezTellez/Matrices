///92 Amigos
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> competidores(n + 1);
    int amigos[n][n];
    for (int i = 1; i <= n; i++){
        cin >> competidores[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> amigos[i][j];
        }
    }
    int preguntas;
    cin >> preguntas;
    while (preguntas--){
          string part_1 = "", part_2 = "";
          int fila, columna;
          int amigos_reciprocos = 0;
          cin >> part_1 >> part_2;
          for (int i = 1; i <= n; i++){
              if (part_1 == competidores[i]){
                 fila = i;
              }
          }
          for (int i= 1; i <= n; i++){
              if (part_2 == competidores[i]){
                 columna = i;
              }
          }
          if (amigos[fila - 1][columna - 1] == 1) amigos_reciprocos++;
          
          if (amigos_reciprocos == 1) cout << "1\n";
          else cout << "0\n";


    }


    return 0;
}
