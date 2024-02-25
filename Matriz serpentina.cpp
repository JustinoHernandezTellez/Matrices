///6123 Matriz serpentina
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, cont = 0;
    cin >> n >> m;
    int mat[n][m];
    int der = 0;
    for (int  i = 0; i < n; i++){
        if (der == 0){
            for (int j = 0; j < m; j++){
                cont++;
                mat[i][j] = cont;
            } 
            der = 1;
        } else {
            for (int j = m - 1; j > -1; j--){
                cont++;
                mat[i][j] = cont;
            } 
            der = 0;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << mat[i][j] << " "; 
        }
        cout << '\n';
    }    
        
    return 0;
}
