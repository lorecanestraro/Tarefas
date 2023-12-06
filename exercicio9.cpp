#include<iostream>
using namespace std;

static int *v;
void addInteiros(int n);
void inteiros(int v[], int n);

int main(){

    int num;
    cout << "Quantidade de numeros: ";
    cin >> num;

    addInteiros(num);
    inteiros(v, num);
    delete[] v;

}

void addInteiros(int n){
    
    if (!(v = new(nothrow) int[n])){
        cout << "Falha de alocacao de memoria" << endl;
        
    }
    for (int i = 0; i < n; i++){
        v[i] = i;
    }
}

void inteiros(int v[], int n){

    for (int i = 0; i < n; i++){
        v[i] = i;
        cout << v[i] << " ";
    }    
}