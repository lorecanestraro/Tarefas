#include<iostream>
#include "complemento8.cpp"
using namespace std;


extern int var;

void pont(int *p);
int adicao(int *p);
int subtracao(int *p);
int subtracaoPonteiros(int *p1, int *p2);
string comparacao(int *p1, int *p2);
void vEstatica();
void vRegister();
void mostraArray();
void comparaEnderecos(int a, int b);

int main(){

    cout << "Incrementar e Decrementar" << endl;
    int *ptr;
    pont(ptr);

    cout << "Adicao de constante" << endl;
    int *ptr2;
    cout << adicao(ptr2) << endl;

    cout << "Subtracao de constante" << endl;
    int *ptr3;
    cout << subtracao(ptr3) << endl;

    cout << "Subtracao de ponteiros" << endl;
    int *ptr4, *ptr5;
    cout << subtracaoPonteiros(ptr4, ptr5) << endl;

    cout << "Comparacao de ponteiros" << endl;
    int *ptr6, *ptr7;
    cout << comparacao(ptr6, ptr7) << endl;

    cout << "Variavel estatica" << endl;
    vEstatica();
    vEstatica();
    vEstatica();

    cout << endl << "Variavel externa" << endl;
    var += 12;
    cout << var << endl;

    cout << "Classe register" << endl;
    vRegister();
    vRegister();
    vRegister();

    cout << endl;

    mostraArray();

    cout << endl;

    int var1, var2;
    cout << "Digite um valor para var1" << endl;
    cin >> var1;
    cout << "Digite um valor para var2" << endl;
    cin >> var2;

    comparaEnderecos(var1, var2);


}

void pont(int *p){
    int num;
    cin >> num;
    
    p = &num;

    (*p)++;
    
    cout << *p << endl;

    (*p)--;
    
    cout << *p << endl;

}

int adicao(int *p){

    int num2;
    cin >> num2;

    p = &num2;
    *p += 8;

    return *p;
}

int subtracao(int *p){
    int num3;
    cin >> num3;

    p = &num3;
    *p -= 9;

    return *p;
}

int subtracaoPonteiros(int *p1, int *p2){
    int num4, num5;
    cin >> num4 >> num5;

    p1 = &num4;
    p2 = &num5;

    return *p1 - *p2;
}

string comparacao(int *p1, int *p2){
    int num6, num7;
    cin >> num6 >> num7;

    p1 = &num6;
    p2 = &num7;

    if(*p1 > *p2){
        return "Ponteiro 1 maior";
    }else{
        if(*p1 < *p2){
            return "Ponteiro 2 maior";
        }else{
            return "Ponteiros iguais";
        }
    }
}

void vEstatica(){
    static int num8 = 0;
    num8++;
    cout << num8 << " ";
}

void vRegister(){
    register int num9 = 0;
    num9++;
    cout << num9 << " ";
}

void mostraArray(){
    int tam;
    cout << "Digite o tamanho do vetor" << endl;
    cin >> tam;

    cout << "Insira os valores" << endl;
    int vet[tam];
    for(int i = 0; i < tam; i++){
        cin >> vet[i];
    }

    int *p = vet;
    cout << "Valores:" << endl;

    for(int i = 0; i < tam; i++){
        cout << *(p + i) << " ";
    }
}

void comparaEnderecos(int a, int b){
    int *p1 = &a;
    int *p2 = &b;

    if (p1 > p2) {
        cout << "A variavel var1 esta em um endereco de memoria mais alto." << endl;
    } else if (p2 > p1) {
        cout << "A variavel var2 esta em um endereco de memoria mais alto." << endl;
    } else {
        cout << "Os enderecos de memoria sao iguais." << endl;
    }
}