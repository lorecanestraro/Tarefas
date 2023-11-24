#include<iostream>
using namespace std;


typedef struct {
    string nome;
    int idade;
    float nota;
} Aluno;

typedef struct {
    string curso;
    Aluno estudante;
    int carga_horaria;
}Curso;

void aluno();
void vetorAluno();
void ptrAluno();
void cursoAluno();
Aluno  *ptr;

int main(){
    
    aluno();
    
    vetorAluno();
    cout << "hglg";

    ptrAluno();

    cursoAluno();

    return 0;
}

void aluno(){
    Aluno aluno = {"Lorenzo", 19, 9.3};

    cout << "Nome: " << aluno.nome << endl;
    cout << "Idade: " << aluno.idade << endl;
    cout << "Nota: " << aluno.nota << endl;

}

void vetorAluno(){
    Aluno vAluno[3];

    for(int i = 0; i < 3; i++){
        cin.ignore();
        getline(cin, vAluno[i].nome);
        cin >> vAluno[i].idade;
        cin >> vAluno[i].nota;
    }

    for(int i = 0; i < 3; i++){
        cout << "Nome: " << vAluno[i].nome << endl;
        cout << "Idade: " << vAluno[i].idade << endl;
        cout << "Nota: " << vAluno[i].nota << endl;
    }
}

void ptrAluno(){
    
    ptr->nome = "Lorenzo Santos";
    ptr->idade = 23;
    ptr->nota = 8.8;

    cout << "Nome: " << ptr->nome << endl;
    cout << "Idade: " << ptr->idade << endl;
    cout << "Nota: " << ptr->nota << endl;

}

void cursoAluno(){
    Curso curso2 = {"Ciencia da Computacao", "Lorenzo", 19, 9, 300};

    cout << "Curso: " << curso2.curso << endl;
    cout << "Nome: " << curso2.estudante.nome << endl;
    cout << "Idade: " << curso2.estudante.idade << endl;
    cout << "Nota: " << curso2.estudante.nota << endl;
    cout << "Carga Horaria: " << curso2.carga_horaria << endl;
}

