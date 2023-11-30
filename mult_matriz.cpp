#include <iostream>

using namespace std;



int main() {
    int m, n, p;

    
    cout << "Digite o numero de linhas da primeira matriz: ";
    cin >> m;
    cout << "Digite o numero de colunas da primeira matriz: ";
    cin >> n;

   
    int matriz1[m][n];

   
    cout << "Digite os elementos da primeira matriz:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            
            cin >> matriz1[i][j];
        }
    }

    
    cout << "Digite o numero de colunas da segunda matriz: ";
    cin >> p;

    
    int matriz2[n][p];

   
    cout << "Digite os elementos da segunda matriz:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            
            cin >> matriz2[i][j];
        }
    }

  
    int resultado[m][p];

    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            resultado[i][j] = 0;
        }
    }

   
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < n; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    
    cout << "Matriz Resultante:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
