#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void maior(int v1, int v2);
void fracao(float v1);
string temZero(int v[], int n);
int maiorValor(int v2[], int t);
void media(int v3[], int t2);
int nPositivos(int v4[], int t3);
void apresentarValores(int v5[], int t4);
void maiorEmenor(int *v6, int t5);

int main(){

    int n1, n2;
    cin >> n1 >> n2;
    cout << "Ordem Crescente:  ";
    maior(n1, n2);
    cout << endl;

    float n3;
    cin >> n3;
    fracao(n3);

    int ne;
    cin >> ne;
    int v[ne];
    for(int i = 0; i < ne; i++){
        cin >> v[i];
    }

    cout << temZero(v, ne) << endl;

    cout << "Maior valor: ";
    cout << maiorValor(v, ne) << endl;

    cout << "Media: ";
    media(v, ne);

    cout << endl << "Numero de positivos: ";
    cout << nPositivos(v, ne) << endl;

    int ne2;
    cin >> ne2;
    int ve2[ne2];
    apresentarValores(ve2, ne2);

    cout << endl;

    maiorEmenor(v, ne);
    

}

void maior(int v1, int v2){

    int a, b;

   if(v1 > v2){
        a = v2;
        b = v1;
   }else{
        if(v1 < v2){
            a = v1;
            b = v2;
        }else{
            a = v2;
            b = v1;
        }
   }

   cout << a << "  " << b << endl;
}

void fracao(float v1){

    int partint = static_cast<int>(v1);  
    float fracpart = v1 - partint;        

    cout << "Parte Inteira: " << partint << endl;
    cout << "Parte Fracionaria: " << fracpart << endl;

}

string temZero(int v[], int n){

    int cont = 0;

    for(int i = 0; i < n; i++){
        if(v[i] == 0){
            cont++;
        }
    }
    if(cont > 0){
        return "true";
    }else{
        return "false";
    }
}

int maiorValor(int v2[], int t){
    int maior = -1000;

    for(int i = 0; i < t; i++){
        if(v2[i] > maior){
            maior = v2[i];
        }
    }
    return maior;
}

void media(int v3[], int t2){
    float soma = 0;

    for(int i = 0; i<t2; i++){
        soma += v3[i];
    }
    float media = soma/t2;

    cout << fixed << setprecision(2) << media << endl;
}

int nPositivos(int v4[], int t3){

    int cont2 = 0;

    for(int i = 0; i < t3; i++){
        if(v4[i] > 0){
            cont2++;
        }
    }

    return cont2;
}

void apresentarValores(int v5[], int t4){
    for(int i = 0; i < t4; i++){
        cin >> v5[i];
    }
    cout << "Elementos: ";
    for(int i = 0; i < t4; i++){
        cout << v5[i] << " ";
    }
}

void maiorEmenor(int *v6, int t5){
    int maior = -1000;
    int menor = 1000;

    for(int i = 0; i < t5; i++){
        if(v6[i] > maior){
            maior = v6[i];
        }
    }

     for(int i = 0; i < t5; i++){
        if(v6[i] < menor){
            menor = v6[i];
        }
    }
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;


}
