#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

// Função para calcular a distância entre dois pontos em um plano bidimensional
double calcularDistancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Função para realizar a busca binária em uma lista ordenada
int buscaBinaria(vector<int> lista, int alvo) {
    int esquerda = 0;
    int direita = lista.size() - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Verificando se o elemento alvo está no meio da lista
        if (lista[meio] == alvo)
            return meio;

        // Se o alvo estiver à esquerda do meio, atualize a posição da direita
        if (lista[meio] < alvo)
            esquerda = meio + 1;
        // Se o alvo estiver à direita do meio, atualize a posição da esquerda
        else
            direita = meio - 1;
    }

    // Se o elemento não estiver na lista, retorne -1
    return -1;
}

int main() {
    // 1. Caso de Teste: Comparação de datas
    string data1, data2;
    cout << "Insira a primeira data (formato dd/mm/aaaa): ";
    cin >> data1;
    cout << "Insira a segunda data (formato dd/mm/aaaa): ";
    cin >> data2;
    if (data1 < data2) {
        cout << "A primeira data é anterior à segunda.\n";
    } else {
        cout << "A primeira data não é anterior à segunda.\n";
    }

    // 2. Técnica de Depuração: Cálculo da área de um círculo
    double raio = 5.0; // Definindo o raio do círculo
    double area = M_PI * pow(raio, 2);
    cout << "A área do círculo é: " << area << endl;

    // 3. Erro Léxico: Cálculo do fatorial de um número (introduzindo um erro léxico)
    int n;
    cout << "Digite um número para calcular o fatorial: ";
    cin >> n;
    int fatorial = 1;
    for (int i = 1; i <= n; i++ fatorial *= i); // Introduzindo um erro léxico, faltando o operador de incremento
    cout << "O fatorial de " << n << " é: " << fatorial << endl;

    // 4. Caso de Teste: Ordenação de uma lista de números em ordem crescente
    vector<int> numeros = {5, 2, 7, 1, 8, 3}; // Lista de números desordenada
    sort(numeros.begin(), numeros.end());
    cout << "Lista ordenada: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // 5. Técnica de Depuração: Resolução de um sistema de equações lineares
    double x, y;
    x = 2; // Valor arbitrário para demonstração
    y = (8 - (3 * x)) / 2;
    cout << "Solução para o sistema de equações:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // 6. Erro Sintático: Realização de uma divisão (introduzindo um erro sintático)
    int dividendo = 10;
    int divisor = 2;
    int quociente;
    quociente = dividendo divisor; // Introduzindo um erro sintático, falta o operador de divisão
    cout << "O quociente da divisão é: " << quociente << endl;

    // 7. Caso de Teste: Cálculo da distância entre dois pontos em um plano bidimensional
    double ponto1_x, ponto1_y, ponto2_x, ponto2_y;
    cout << "Digite as coordenadas do primeiro ponto (x1 y1): ";
    cin >> ponto1_x >> ponto1_y;
    cout << "Digite as coordenadas do segundo ponto (x2 y2): ";
    cin >> ponto2_x >> ponto2_y;
    double distancia = calcularDistancia(ponto1_x, ponto1_y, ponto2_x, ponto2_y);
    cout << "A distância entre os dois pontos é: " << distancia << endl;

    // 8. Técnica de Depuração: Busca binária em uma lista ordenada de números
    int alvo = 5;
    int indice = buscaBinaria(numeros, alvo);
    if (indice != -1)
        cout << "O elemento " << alvo << " está na posição " << indice << " da lista." << endl;
    else
        cout << "O elemento " << alvo << " não está na lista." << endl;

    return 0;
}
