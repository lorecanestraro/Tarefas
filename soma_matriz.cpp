#include <iostream>

using namespace std;

int main() {
    int m, n, p;

    
    cout << "Digite o numero de linhas das matrizes: ";
    cin >> m;
    cout << "Digite o numero de colunas das matrizes: ";
    cin >> n;

   
    int matriz1[m][n];

    cout << "Digite os elementos da primeira matriz:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            
            cin >> matriz1[i][j];
        }
    }

    int matriz2[m][n];

    cout << "Digite os elementos da segunda matriz:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            
            cin >> matriz2[i][j];
        }
    }

    int resultado[m][n];

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            resultado[i][j] = 0;
        }
    }

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    cout << endl;
    cout << "Matriz resultante" << endl;

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}