#include <iostream>
using namespace std;

// Declare duas variáveis do tipo unsigned short
// Use cout para mostrar uma mensagem solicitando o número de lados
// Use cin para ler o número de lados para a primeira variável
// [Opcional] Verifique usando if se o número de lados é maior ou igual a 3
// Calcule o número de diagonais armazenando o resultado na segunda variável
// Use cout para mostrar o número de diagonais calculado
int main() {
    unsigned short lados, diagonais;
    cout << "Indique o numero de lados: ";
    cin >> lados;
    do {
    if (lados < 3) {
        cout << "O numero de lados precisa ser maior que 3! Coloque outro valor:" << endl;
        cin >> lados;
    }
    } while (lados < 3);
    diagonais = (lados * (lados - 3))/2;
    cout << " O numero de diagonais e: " << diagonais << endl;
    return 0;
}
