#include <iostream>
using namespace std;

void troca();
void vetorE();
int dobro(int* p);
int contagem(string palvr, int* pont);
void inverterString();

int main() {
    troca();
    vetorE();

    int valor;
    cin >> valor;
    int *pt = &valor;
    cout << dobro(pt) << endl;

    string nome;
    cin >> nome;
    int pto; 
    cout << contagem(nome, &pto) << endl;

    inverterString();

    return 0;
}

void troca() {
    int a, b;
    cin >> a >> b;
    int* ptr = &a;
    *ptr = *ptr + b;
    b = *ptr - b;
    *ptr = *ptr - b;

    cout << a << " " << b << endl;
}

void vetorE() {
    int V[3];
    for (int i = 0; i < 3; i++) {
        cin >> V[i];
    }

    int *p = V; 
    for (int i = 0; i < 3; i++) {
        cout << *p << " "; 
        p++; 
    }
    cout << endl;
}

int dobro(int* p) {
    *p = 2 * *p;
    return *p;
}

int contagem(string palvr, int* pont) {
    int contador = 0;
    int n = palvr.length();

    for (int i = 0; i < n; i++) {
        if (palvr[i] == 'a' || palvr[i] == 'e' || palvr[i] == 'i' || palvr[i] == 'o' || palvr[i] == 'u') {
            contador++;
        }
    }
    
    *pont = contador; 
    return contador;
}

void inverterString(){
    string nome;
    cin >> nome;
    char *p;
    
    int tam = nome.length();

    char novo[tam];
    p = &novo[0];

    int j = 0;

    for(int i = tam - 1; i >= 0; i--){
        novo[j] = nome[i];
        j++;
    }

    for(int i = 0; i < tam; i++){
        cout << p[i];
    }
    
}
