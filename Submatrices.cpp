///829 Submatrices
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ///Decl. var
    int renglones, columnas, r, c, k, l;
    int i, j;
    bool iguales = true;

    ///Ini. var
    i = j = renglones = columnas = r = c = k = l = 0;


    ///Sol. var
    cin >> renglones >> columnas; ///Matriz

    int matriz [ renglones ] [ columnas ];
    int matriz_final [ renglones ] [ columnas ];

    ///Creacion de la matriz final
    for (i = 0; i < renglones; i++)
        {
            for (j = 0; j < columnas; j++)
                {
                    matriz_final [ i ] [ j ] = 0;
                }
        }

    ///Solicitud de datos de la matriz
    for (i = 0; i < renglones; i++)
        {
            for (j = 0; j < columnas; j++)
                {
                    cin >> matriz [ i ] [ j ];
                }
        }
    ///Solicitud de datos para crear la submatriz
    cin >> r >> c;
    int submatriz [ r ] [ c ];
    for (i = 0; i < r; i++) ///Submatriz
        {
            for (j = 0; j < c; j++)
                {
                     cin >> submatriz [ i ] [ j ];
                }
        }

    ///Calculos

     for (i = 0; i < renglones - r + 1; i++)
        {
            for (j = 0; j  < columnas - c + 1; j++)
                {
                    iguales = true;
                    for (k = 0; k < r && iguales == true; k++)
                        {
                            for (l = 0; l < c && iguales == true; l++)
                                {
                                    if (matriz[i + k] [j + l] != submatriz [k][l])
                                       {
                                           iguales = false;
                                           break;
                                       }

                                }
                        }
                        if (iguales == true)
                           {
                               for (k = i; k < i + r; k++)
                                   {
                                       for (l = j; l < j + c; l++)
                                           {
                                               matriz_final [k][l] = 1;
                                           }
                                   }
                           }
                }
        }

    ///Imprimir resultados
    for (i = 0; i < renglones; i++)
        {
            for (j = 0; j < columnas; j++)
                {
                    cout << matriz_final [ i ] [ j ] << " ";
                }
            cout << endl;
        }

    return 0;
}
