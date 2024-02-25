////5986 Comida del maestro carlos
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, g, suma = 0, aux = 0;
    cin >> a >> g;
    for (int i = 0; i < a; i++){
        for (int j = 0; j < g; j++){
            cin >> aux;
            suma += aux; 
        }
        cout << suma << '\n';
        suma = 0;
    }
    return 0;
}
