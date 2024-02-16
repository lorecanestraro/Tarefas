#include <iostream>
#include<ctime>
using namespace std;


int main() {
    const int enderecos_v = 4096;
    const int paginas_v = 8;

    const int enderecos_f = 4096;
    const int  paginas_f = 4;


    int pv[enderecos_v][paginas_v];

    
    for (int i = 0; i < enderecos_v; ++i) {
        for (int j = 0; j < paginas_v; ++j) {
            pv[i][j] = i + (j * enderecos_v);
            if (pv[i][j] > 32768) 
                pv[i][j] = 32768;
        }
    }


    int indice_v[paginas_v] = {0, 1, 2, 3, 4, 5, 6, 7};
    int indice_f[paginas_f];

    srand(time(nullptr)); // Seed para gerar números aleatórios

    // Embaralhar os índices das páginas virtuais
    for (int i = paginas_v - 1; i > 0; --i) {
        int j = rand() % (i + 1); // Gerar um índice aleatório
        // Trocar os elementos nas posições i e j
        int temp = indice_v[i];
        indice_v[i] = indice_v[j];
        indice_v[j] = temp;
    }

    // Selecionar os primeiros paginas_f índices embaralhados para as páginas físicas
    for (int i = 0; i < paginas_f; ++i) {
        indice_f[i] = indice_v[i];
    }


    int pf[enderecos_f][paginas_f];
   
    
    for (int i = 0; i < enderecos_f; ++i) {
        for (int j = 0; j < paginas_f; ++j) {
            pf[i][j] = i + (j * enderecos_f);
            if (pf[i][j] > 16384) 
                pf[i][j] = 16384;
        }
    }

    // Exibindo os índices das páginas físicas selecionadas
    cout << "Paginas vituais no espaco de memoria:" << endl;
    for (int i = 0; i < paginas_f; ++i) {
        cout << indice_f[i] << " ";
    }
    cout << endl;

    int endereco;
    cout << "Digite um endereco (1 - 32768): ";
    cin >> endereco;

    int p_virtual;

    p_virtual = -1; // Inicialize com -1, indicando que o endereço não foi encontrado

    // Buscando o endereço na matriz pv e armazenando a coluna correspondente em p_virtual
    for (int i = 0; i < enderecos_v; ++i) {
        for (int j = 0; j < paginas_v; ++j) {
            if (pv[i][j] == endereco) {
                p_virtual = j; // Armazenando a coluna correspondente
                break;
            }
        }
        if (p_virtual != -1) 
            break;
    }

    if (p_virtual != -1){
        cout << "O endereco " << endereco << " foi encontrado na pagina " << p_virtual << " da memoria vitual." << endl;
    }else{
        cout << "O endereco " << endereco << " nao foi encontrado na matriz pv." << endl;
    }
    int linha = -1;
    for (int i = 0; i < enderecos_v; ++i) {
        for (int j = 0; j < paginas_v; ++j) {
            if (pv[i][j] == endereco) {
                linha = i; // Armazenando a linha correspondente
                break;
            }
        }
        if (linha != -1) 
            break;
    }

    if (linha != -1){
        cout << "O endereco " << endereco << " foi encontrado na linha " << linha << " da matriz pv." << endl;
    }else{
        cout << "O endereco " << endereco << " nao foi encontrado na matriz pv." << endl;
    }
    bool hit = false;
    int encontrado;
    for (int i = 0; i < paginas_f; ++i) {
        if (p_virtual == indice_f[i]) {
            encontrado = i;
            hit = true;
            break;
        }
    }

    if(hit == false){
        cout << "Pagina nao encontrada no espaco de memoria" << endl;
    }

   

    cout << "Endereco na memoria fisica: " << pf[linha][encontrado] << endl;


    return 0;
}
