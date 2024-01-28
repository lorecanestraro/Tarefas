#include <iostream>
using namespace std;

int somarElementos(int vetor[], int inicio, int fim) {
    
    if (inicio > fim) {
        return 0;
    }
    
    else {
        return vetor[inicio] + somarElementos(vetor, inicio + 1, fim);
    }
}

int somaInteiros(int n){
    if (n <= 1){
        return 1;
    }else{
        return n + somaInteiros(n - 1);
    }
}

int potencia(int n, int expoente){
    if(expoente == 0){
        return 1;
    }else{
        return n * potencia(n, expoente - 1);
    }

}
int mult(int m, int n){
    if(n == 1){
        return m;
    }else{
        return m +  mult(m, n - 1);
    }

}
int func(int n){
    int r = 0;
    for(int i = n; i >=1; i--){
        r += i;
    }
    return r;
}

int main() {

    int vetor[] = {1, 2, 3, 4, 5};
    
    int resultado = somarElementos(vetor, 0, 4);

    cout << "A soma dos elementos do vetor e: " << resultado << endl;

    int num;
    cout << "Digite um numero" << endl;
    cin >> num;
    cout << "A soma dos inteiros e: " <<  somaInteiros(num) << endl;

    cout << "Digite um numero e um expoente" << endl;
    int num2, exp;
    cin >> num2 >> exp;
    cout << "Resultado: " << potencia(num2, exp) << endl;

    int num3, num4;
    cout << "Digite dois numeros para multiplicar" << endl;
    cin >> num3 >> num4;
    cout << "Resultado: " << mult(num3, num4) << endl;

    int num5;
    cout << "Digite um numero" << endl;
    cin >> num5;
    cout << "A soma dos inteiros e: " <<  func(num5) << endl;

    return 0;
}

