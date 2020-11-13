#include <iostream>

using namespace std;

int validaEntrada(char *ent){
    char x;
    cin >> x;
    while(!(x == 'S' || x == 's' || x == 'N' || x == 'n')){
        cout << "(S/s ou N/n):";
        cin >> x;
    }
    *ent = x;
}

int main()
{
    char aux;
    cout << "Pergunta? ";
    validaEntrada(&aux);
    cout << "Resposta = "<< aux << endl;
}
