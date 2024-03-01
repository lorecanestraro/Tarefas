#include <iostream>
using namespace std;

void realizarOperacoes() {
    int a = 5;
    int b = 10;
    int c = a + b;

    if (c > 10) {
        cout << "A soma é maior que 10" << endl;
    } else {
        cout << "A soma não é maior que 10" << endl;
    }
}

bool verificarMaiorQueDez(int resultado) {
    return resultado > 10;
}

void realizarOperacoes2() {
    int a = 5;
    int b = 10;
    int c = a + b;

    if (verificarMaiorQueDez(c)) {
        cout << "A soma é maior que 10" << endl;
    } else {
        cout << "A soma não é maior que 10" << endl;
    }
}
const double PI = 3.14159;

void exibirMensagem(double temperature) {
    if (estaMuitoQuente(temperature)) {
         << "Muito quente!";
    } else if (estaAgradavel(temperature)) {
         << "Clima agradável.";
    } else if (estaFresco(temperature)) {
         << "Fresco.";
    } else {
         << "Muito frio!";
    }
}

bool estaMuitoQuente(double temperature) {
    return temperature > 100;
}

bool estaAgradavel(double temperature) {
    return temperature > 70;
}

bool estaFresco(double temperature) {
    return temperature > 50;
}


int main() {
    realizarOperacoes();
    return 0;

    double principal = 1000.0;
    double taxa = 0.05;
    double tempo = 2.0;

    double montante = principal * pow(1 + taxa, tempo);
    
    cout << "O montante é: " << montante << endl;

    double precoProduto = 100.0; // Preço inicial do produto
    double desconto = 0.1; // Desconto de 10%
    double taxaEnvioFixa = 5.0; // Taxa de envio fixa
    double taxaImposto = 0.08; // Taxa de imposto de 8%

    // Cálculo do preço com desconto
    double precoComDesconto = precoProduto * (1 - desconto);

    // Cálculo do preço com taxa de envio
    double precoComTaxaEnvio = precoComDesconto + taxaEnvioFixa;

    // Cálculo do preço final com imposto
    double precoFinalComImposto = precoComTaxaEnvio * (1 + taxaImposto);

     << "O preço final do produto, com desconto, taxa de envio e imposto é: " << precoFinalComImposto << std::endl;

    double radius = 5.0; // Raio do círculo

    // Cálculo da área do círculo usando a constante PI
    double area = PI * radius * radius;

     << "A área do círculo é: " << area << std::endl;

    double temperature = 75; // Exemplo de temperatura

    exibirMensagem(temperature);

    return 0;
}
