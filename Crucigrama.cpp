///7783 Crucigrama
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    int indice_b = -1, indice_a = -1;
    for (int i = 0; i < a.length(); i++){
        for (int j = 0; j < b.length(); j++){
            if (a[i] == b[j]){
                indice_a = i;
                indice_b = j;
                break;
            }
        }
        if (indice_b != -1) break;
    }
    int columnas, filas;
    int apuntador_a = 0, apuntador_b = 0;
    columnas = b.length();
    filas = a.length();
    for (int i = 0; i < columnas; i++){
        for (int j = 0; j < filas; j++){
            if (j == indice_a & i == indice_b){
               cout << a[apuntador_a];
               apuntador_a++;
               apuntador_b++; 
            } else {
               if (j == indice_a){
                    cout << b[apuntador_b];
                    apuntador_b++; 
               } else if (i == indice_b){
                    cout << a[apuntador_a];
                    apuntador_a++; 
              } else {
                    cout << "."; 
              } 
            }
        }
        cout << '\n';
    }

    return 0;
}
