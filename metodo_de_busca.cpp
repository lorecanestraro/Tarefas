#include<iostream>

using namespace std;

int busca_sequencial(int x, int *v, int n) {
 int j;
 for (j = 0; j < n; j++){
    if (v[j] < x && v[j + 1] >= x){
        return j;
    }    
 }
 return -1;
}

int busca_binaria(int x, int *v, int n){
    int ini = 0;
    int fim = n-1;

    while(ini <= fim){
        int i = (ini + fim)/2;

        if(v[i - 1] <= x && v[i] >= x){
            return i;
        }

        if(v[i] < x){
            ini = i + 1;
        }else{
            fim = i;
        }
    }
    return -1;
}   

int busca_sequencial_recursiva(int x, int *v, int n, int inicio, int fim){
    if(inicio > fim){
        return -1;
    }
    if(v[inicio] == x){
        return inicio;
    }

    return busca_sequencial_recursiva(x, v, n, inicio + 1, fim);
}

int busca_binaria2(int x, int *v, int n){
    int ini = 0;
    int fim = n-1;

    while(ini <= fim){
        int i = (ini + fim)/2;

        if(v[i] >= x){
            return i;
        }

        if(v[i] < x){
            ini = i + 1;
        }else{
            fim = i;
        }
    }
    return -1;
}   

void duas_somas(int x, int *v, int n){
    int inicio = 0;
    int fim = n - 1;
    bool parada = false;

    while(inicio < fim && parada == false){
        int soma = v[inicio] + v[fim];

        if(soma == x){
            cout << "Os indices sao: " << inicio << " e " << fim << endl;
            parada = true;
        }else{
            if(soma < x){
                inicio++;
            }else{
                fim--;
            }
        }
    }
}


int main(){
    cout << "Numero de elementos: ";
    int n;
    cin >> n;
    
    int v[n];
    cout << "Elementos: ";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int num;
    cout << "Numero de busca: ";
    cin >> num;

    cout << "Indice: ";
    cout << busca_sequencial(num, v, n) << endl;

    int num2;
    cout << "Numero de busca: ";
    cin >> num2;

    cout << "Indice: ";
    cout << busca_binaria(num2, v, n) << endl;

    int num3;
    cout << "Numero de busca: ";
    cin >> num3;

    cout << "Indice: ";
    cout << busca_sequencial_recursiva(num3, v, n, 0, n - 1) << endl;

    int num4;
    cout << "Numero de busca: ";
    cin >> num4;

    cout << "Indice: ";
    cout << busca_binaria2(num4, v, n) << endl;

    int num5;
    cout << "Numero alvo: ";
    cin >> num5;

    duas_somas(num5, v, n);




}