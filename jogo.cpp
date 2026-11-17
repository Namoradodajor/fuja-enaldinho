#include <iostream>
using namespace std;

int main() {
    int energia = 28, alerta = 0, op;
    cout << "=== FUGA DO ENALDINHO (28/16) ===\n";
    cout << "Ato 1: Piscina de Slime. (1) Caixas (-3 En) | (2) Correr (+3 Al): ";
    cin >> op;
    if (op == 1) energia -= 3; else { energia -= 1; alerta += 3; }

    cout << "Status -> Energia: " << energia << "/28 | Alerta: " << alerta << "/16\n";
    cout << "Ato 2: 100 Caixas. (1) Empurrar (-5 En, +4 Al) | (2) Caixa 99 (-1 En, +1 Al): ";
    cin >> op;
    if (op == 1) { energia -= 5; alerta += 4; } else { energia -= 1; alerta += 1; }

    if (energia > 0 && alerta < 16)
        cout << "VOCE ESCAPOU DA MANSAO ELO! Energia final: " << energia << "\n";
    else
        cout << "GAME OVER! O Enaldinho te pegou pro video!\n";
    return 0;
}