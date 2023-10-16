#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void multiplo(){
    int numero;
    cin >> numero;

    if(numero % 4 == 0){
        cout << "Multiplo de 4" << endl;
    }else{
        cout << "Nao e multiplo de 4" << endl;
    }

}

void pOUi(){
    int n;
    cin >> n;

    if(n % 2 == 0){
        cout << n << " e um numero par" << endl;
    }else{
        cout << n << " e um numero impar" << endl;
    }
}

void soma(){
    int n1, n2;
    int soma = 0;

    cin >> n1 >> n2;

    for(int i = n1; i <= n2; i++){
        soma += i;
    }

    cout << "Soma: " << soma << endl;
}

void volume(){

    float raio;
    double pi = M_PI;

    cin >> raio;
    float volume = (4 *  pi * raio * raio * raio)/3;
    cout << "Volume: " << volume << setprecision(3) << endl;
}

void fatorial(){
    int num;
    int resultado = 1;
    cin >> num;

    for(int i = num; i >= 1; i--){
        resultado *= i;
    }

    cout << "Fatorial de " << num << " = " << resultado << endl;


}

void potencia(){
    int base, expoente;
    cin >> base >> expoente;
    int resultado = 1;
    while(expoente > 0){
        resultado *= base;
        expoente--;
    }
    cout << resultado << endl;

}

string multiplo2(int numero){
    string resultado;
    if(numero % 4 == 0){
        resultado = "Multiplo";
    }else{
        resultado = "Nao multiplo";
    }
    return resultado;
}

string pOUi2(int numero){
    string resultado;

    if(numero % 2 == 0){
        resultado = "Par";
    }else{
        resultado = "Impar";
    }
    return resultado;
}

int soma2 (int a, int b){
    int soma = 0;
    for(int i = a; i <= b; i++){
        soma += i;
    }
    return soma;
}

float volume2(float raio){

    float volume = (4 *  3.14 * raio * raio * raio)/3;
    return volume;

}

int fatorial2(int valor){
    int resultado = 1;

    for(int i = valor; i >= 1; i--){
        resultado *= i;
    }

    return resultado;
}

int potencia2(int base, int expoente){
    int resultado = 1;
    while(expoente > 0){
        resultado *= base;
        expoente--;
    }

    return resultado;
}


int main(){

    multiplo();
    pOUi();
    soma();
    volume();
    fatorial();
    potencia();

   int n;
   cin >> n;
   cout << multiplo2(n) << endl;

   int n2;
   cin >> n2;
   cout << pOUi2(n2) << endl;

   int n3;
   int n31;
   cin >> n3;
   cin >> n31;
   cout << soma2(n3, n31) << endl;

   float n4;
   cin >> n4;
   cout << volume2(n4) << endl;

   int n5;
   cin >> n5;
   cout << fatorial2(n5) << endl;

   int n6, n61;
   cin >> n6 >> n61;
   cout << potencia2(n6, n61) << endl;

    return 0;
}