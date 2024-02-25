////6276 Buscaminas
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n, cont = 0;
    cin >> m >> n;
    int mat[m + 2][n + 2];
    for (int i = 0; i <= m + 1; i++)
        for(int j = 0; j <= n + 1; j++)
           mat[i][j] = 0;

    for (int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
           cin >> mat[i][j];
       
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (mat[i][j] == 1){
               cout << "9 "; 
            } else {
                if (mat[i-1][j-1] == 1){
                cont++;
                }
                if (mat[i-1][j] == 1){
                cont++;
                }
                if (mat[i-1][j+1] == 1){
                cont++;
                }
                if (mat[i][j-1] == 1){
                cont++;
                }
                if (mat[i+1][j+1] == 1){
                cont++;
                }
                if (mat[i][j+1] == 1){
                cont++;
                }
                if (mat[i+1][j-1] == 1){
                cont++;
                }
                if (mat[i+1][j] == 1){
                cont++;
                }
                cout << cont << " ";
                cont = 0;
            }
            cont = 0;
            
        }
        cout << endl;
    }    
           
    return 0;
}
