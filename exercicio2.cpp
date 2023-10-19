#include<iostream>
#include<string>
#include<cmath>

#define N 10

using namespace std;

int soma(int valor);
string bisexto(int ano);
string binario(int numero1, int numero2);
string s(string senha1);
double jurosCompostos(double valorInicial, double taxa, int ano);
void ordemCrescente();
int main(){
    
    int n1;
    cin >> n1;
    cout << soma(n1) << endl;

    int n2;
    cin >> n2;
    cout << bisexto(n2) << endl;

    int n3;
    cin >> n3;
    cout << binario(n3, n3) << endl;

    string s1;
    cin >> s1;
    cout << s(s1) << endl;

    double n4, n5;
    int n6;
    cin >> n4 >> n5;
    cin >> n6;
    cout << jurosCompostos(n4, n5, n6) << endl;

    ordemCrescente();

    return 0;
}

int soma(int valor){
    int soma = 0;

    while(valor != 0){
        soma += valor;
        valor--;
    }

    return soma;
}

string bisexto(int ano){
    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        return "Bisexto";
    }else{
        return "Nao bisexto";
    }
}

string binario(int numero1, int numero2){
    int divisoesPorDois = 0;
    string B;

    while (numero1 > 1) {
        if (numero1 % 2 == 0) {
            numero1 /= 2;
            divisoesPorDois++;
        } else {
            numero1 - 1;
            numero1 /= 2;
            divisoesPorDois ++;
        }
    }
    int nDivisores = divisoesPorDois + 1;

    while(nDivisores > 0){
        if( numero2 % 2 == 0){
            numero2 /= 2;
            B += "0";
            nDivisores --;
        }else{
            numero2 /= 2;
            B += "1";
            nDivisores--;
        }
    }
    string resultado;

    for(int i = B.length() - 1; i >= 0; i--){
        resultado += B[i];
    }
    
    return resultado;
}

string s(string senha1){

    bool numero = false;
    bool maiuscula = false;
    bool minuscula = false;

    if(senha1.length() < 8){
        return "Senha Invalida";
    }

    for (char c : senha1) {
        if (isupper(c)) {
            maiuscula = true;
        } else if (islower(c)) {
            minuscula = true;
        } else if (isdigit(c)) {
            numero = true;
        }
    }

    if(maiuscula == true && minuscula == true && numero == true){
        return "Senha valida";
    }else{
        return "Senha invalida";
    }

}

double jurosCompostos(double valorInicial, double taxa, int ano){

    double valorFinal;

    valorFinal = valorInicial * pow((1 + (taxa/100)), ano);

    return valorFinal;

}

void ordemCrescente(){
    
    int i, n;
    cout << "Insira o numero de elementos" << endl;
    cin >> n;
    int vetor2[n], vetor[n];
    cout << "Digite os elementos" << endl;
    
    for(i = 0; i < n; i++){
        cin >> vetor[i];
    }
    for(i = 0; i < n; i++) {
        vetor2[i] = vetor[n-i-1];
        cout << vetor2[i] << " ";
    }
}
