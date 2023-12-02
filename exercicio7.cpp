#include<iostream>
using namespace std;
#define N 5

//A. alternativa c)
//B. 4
//C. V F F
//D. Nada de errado
//E. 9
//F. 1000  1001  1005  1000

//G
void maiorEmenor(int v[N], int *p1, int *p2);

int main(){

    int vet[N];
    int *ptr1, *ptr2;
    int maior, menor;

    menor = 10000;
    maior = -10000;

    ptr1 = &menor;
    ptr2 = &maior;

    for(int i = 0; i < N; i++){
        cin >> vet[i];
    }

    maiorEmenor(vet, ptr1, ptr2);


}

void maiorEmenor(int v[N], int *p1, int *p2){
    

    for(int i = 0; i < N; i++){
        if(v[i] < *p1){
            *p1 = v[i];
        }
    }

    for(int i = 0; i < N; i++){
        if(v[i] > *p2){
            *p2 = v[i];
        }
    }

    cout << "Maior: " << *p2 << endl;
    cout << "Menor: " << *p1 << endl;
}