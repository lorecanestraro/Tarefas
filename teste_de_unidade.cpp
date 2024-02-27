#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

using namespace std;

// Declare a function to test
void smatriz();

// Test case(s)
TEST(SMatrizTest, AddMatrices) {
    // Simulate user input for 2x2 matrices
    stringstream input;
    input << "2\n2\n";
    input << "1 2\n3 4\n"; // First matrix
    input << "5 6\n7 8\n"; // Second matrix

    // Redirect cin to simulate user input
    streambuf* old_cin = cin.rdbuf(input.rdbuf());

    // Redirect cout to capture output
    stringstream output;
    streambuf* old_cout = cout.rdbuf(output.rdbuf());

    // Call the function to test
    smatriz();

    // Reset cin and cout
    cin.rdbuf(old_cin);
    cout.rdbuf(old_cout);

    // Verify output
    string expected_output = "Digite o numero de linhas das matrizes: Digite o numero de colunas das matrizes: Digite os elementos da primeira matriz:\nDigite os elementos da segunda matriz:\nMatriz resultante\n6 8 \n10 12 \n";
    ASSERT_EQ(output.str(), expected_output);
}

// Define the function to test
void smatriz() {
    int m, n;

    cout << "Digite o numero de linhas das matrizes: ";
    cin >> m;
    cout << "Digite o numero de colunas das matrizes: ";
    cin >> n;

    int matriz1[m][n];

    cout << "Digite os elementos da primeira matriz:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matriz1[i][j];
        }
    }

    int matriz2[m][n];

    cout << "Digite os elementos da segunda matriz:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matriz2[i][j];
        }
    }

    int resultado[m][n];

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout << endl;
    cout << "Matriz resultante" << endl;

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
}

// Define the main function to run tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
