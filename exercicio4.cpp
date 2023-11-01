#include<iostream>
#include <cctype>

using namespace std;

int multiplicacao(int a, int b);
int multiplicacao2(int *a, int *b);
int somaDez(int a);
int somaDez2(int *a);
int subCinco(int a);
int subCinco2(int *a);
void inverterVetor(int *p, int num);
void converterParaMaiusculas(string &str);


int main(){

   

    int n1, n2;
    cin >> n1 >> n2;
    cout << multiplicacao(n1, n2) << endl;
    cout << multiplicacao2(&n1, &n2) << endl;

    int n3;
    cin >> n3;
    cout << somaDez(n3) << endl;
    cout << somaDez2(&n3) << endl;

    int n4;
    cin >> n4;
    cout << subCinco(n4) << endl;
    cout << subCinco2(&n4) << endl;

    
    int n;


    cout << "Numero de elementos" << endl;
    cin >> n;

    int V[n];

    inverterVetor(V, n);
    cout << endl;


    string minhaString;
    cout << "Escreva algo para converter" << endl;
    cin >> minhaString;;
    
    converterParaMaiusculas(minhaString);
    
    cout << minhaString << endl;

   

    

    
}

int multiplicacao(int a, int b){
    return a*b;
}

int multiplicacao2(int *a, int *b){
    return *a * *b;
}

int somaDez(int a){
    return a + 10;
}

int somaDez2(int *a){
    return *a + 10;
}

int subCinco(int a){
    return a - 5;
}

int subCinco2(int *a){
    return *a - 5;
}

void inverterVetor(int *p, int num){
    
    cout << "Elementos do vetor" << endl;
    for(int i = 0; i < num; i++){
        cin >> p[i];
    }

    int v2[num];
    int j = num - 1;

    for(int i = 0; i < num; i++){
        v2[i] = p[j];
        j--;
    }

    for(int i = 0; i < num; i++){
        cout << v2[i] << " ";
    }
     
}

void converterParaMaiusculas(string &str) {
    for (char &c : str) {
        c = toupper(c);
    }
}
