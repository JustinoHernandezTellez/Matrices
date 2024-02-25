///11400 Calculadora de operaciones matriciales
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int filas_1, columnas_1, filas_2, columnas_2, respuesta = 0;

    ///Leer matriz 1
    cin >> filas_1 >> columnas_1;
    int matriz_1 [filas_1] [columnas_1];
    int transpuesta [columnas_1] [filas_1];
    for (int i = 0; i < filas_1; i++)
        {
            for (int j = 0; j < columnas_1; j++)
                {
                    cin >> matriz_1 [i] [j];
                }
        }

    /// leer matriz 2
    cin >> filas_2 >> columnas_2;
    int matriz_2 [filas_2] [columnas_2];
    int suma_resta [filas_1] [columnas_1];
    int multi [filas_1] [columnas_2];
    for (int i = 0; i < filas_2; i++)
        {
            for (int j = 0; j < columnas_2; j++)
                {
                    cin >> matriz_2 [i] [j];
                }
        }
    string accion = "";
    while (accion != "SALIR")
          {
              cin >> accion;
              if (accion == "SALIR")break;

              if (accion == "TRASPUESTA")
                 {
                     for (int i = 0; i < filas_1; i++)
                         {
                             for (int j = 0; j < columnas_1; j++)
                                 {
                                     transpuesta [j] [i] = matriz_1 [i] [j];
                                 }
                         }
                     for (int i = 0; i < columnas_1; i++)
                         {
                             for (int j = 0; j < filas_1; j++)
                                 {
                                     cout << transpuesta [i] [j] << " ";
                                 }
                             cout << "\n";
                         }
                 }

              else if (accion == "RESTA" && filas_1 == filas_2 && columnas_1 == columnas_2)
                  {
                      for (int i = 0; i < filas_2; i++)
                          {
                              for (int j = 0; j < columnas_2; j++)
                                  {
                                      suma_resta [i] [j] = matriz_1 [i] [j] - matriz_2 [i] [j];
                                  }
                          }

                      for (int i = 0; i < filas_2; i++)
                          {
                              for (int j = 0; j < columnas_2; j++)
                                  {
                                     cout << suma_resta [i] [j] << " ";
                                  }
                              cout << "\n";
                          }
                  } else if (accion == "SUMA" && filas_1 == filas_2 && columnas_1 == columnas_2)
                  {
                      for (int i = 0; i < filas_2; i++)
                          {
                              for (int j = 0; j < columnas_2; j++)
                                  {
                                      suma_resta [i] [j] = matriz_1 [i] [j] + matriz_2 [i] [j];
                                  }
                          }

                      for (int i = 0; i < filas_2; i++)
                          {
                              for (int j = 0; j < columnas_2; j++)
                                  {
                                      cout << suma_resta [i] [j] << " ";
                                  }
                              cout << "\n";
                          }
                  } else if (accion == "MULTIPLICACION" && columnas_1 == filas_2)
                  {

                      for (int i = 0; i < filas_1; i++)
                          {
                              for (int j = 0; j < columnas_2; j++)
                                  {
                                      for (int k = 0; k < filas_2; k++)
                                          {
                                              respuesta += matriz_1 [i] [k] * matriz_2 [k] [j];

                                          }
                                      multi [i] [j] = respuesta;
                                      respuesta = 0;
                                  }

                          }

                      for (int i = 0; i < filas_1; i++)
                          {
                              for (int j = 0; j < columnas_2; j++)
                                  {
                                      cout << multi [i] [j] << " ";
                                  }
                              cout << "\n";
                          }

                  } else {
                             cout << "X\n";
                         }



          }
    return 0;
}
