#include<iostream>
using namespace std;

struct Aluno {
    std::string nome;
    int serie;
    float nota;
};

static int *v;
void addInteiros(int n);
void inteiros(int v[], int n);
void lerNotas(float *notas, int alunos);
void mediaNotas(float *notas, int alunos);
void lerNotas2(Aluno *alunos, int alunos2);
void mediaNotas2(Aluno *alunos, int alunos2);


int main(){

    int num;
    cout << "Quantidade de numeros: ";
    cin >> num;

    addInteiros(num);
    inteiros(v, num);
    delete[] v;
    cout << endl;

    int qAlunos;
    cout << "Quantidade de alunos: ";
    cin >> qAlunos;

    float *notas = new float[qAlunos];

    lerNotas(notas, qAlunos);
    mediaNotas(notas, qAlunos);

    delete[] notas;

    Aluno *alunos = new Aluno[qAlunos];

    lerNotas2(alunos, qAlunos);
    mediaNotas2(alunos, qAlunos);

    delete[] alunos;
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

void lerNotas(float *notas, int alunos){
    cout << "Digite as notas" << endl;

    for(int i = 0; i < alunos; i++){
        cin >> notas[i];// notas[i] pode ser substituido por *(notas + i) em todos os casos, sem alteracao do resultado
    }
}

void mediaNotas(float *notas, int alunos){
    float soma = 0.0;
    for (int i = 0; i < alunos; i++) {
        soma += notas[i];
    }

    float media = soma / alunos;
    cout << "Media: " << media << endl;
}

void lerNotas2(Aluno *alunos, int alunos2){
    for(int i = 0; i < alunos2; i++){
        cout << "Digite o nome do aluno " << (i + 1) << ": ";
        cin >> alunos[i].nome;

        cout << "Digite a serie do aluno " << (i + 1) << ": ";
        cin >> alunos[i].serie;

        cout << "Digite a nota do aluno " << (i + 1) << ": ";
        cin >> alunos[i].nota;
    }
}

void mediaNotas2(Aluno *alunos, int alunos2){
    float soma = 0.0;
    for (int i = 0; i < alunos2; i++) {
        soma += alunos[i].nota;
    }

    float media = soma / alunos2;
    cout << "Media: " << media << endl;
}

    