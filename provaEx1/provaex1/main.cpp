#include <iostream>

using namespace std;

int main()
{
    int n1, n2, soma, aux;

    cout << "Digite 2 numeros :";
    cin >> n1;
    cin >> n2;

    while (n1>n2){
        cout << "Primeiro numero deve ser maior que o segundo"<<endl;
        cout << "Digite 2 numeros :";
        cin >> n1;
        cin >> n2;
    }
    aux = n1+1;
    while (aux == n2){
        cout << "Nao existe nenhum numero inteiro entre eles"<<endl;
        cout << "Digite 2 numeros :";
        cin >> n1;
        cin >> n2;
    }
    soma =0;
    for (aux; aux<n2; aux++){
        soma = aux + soma;
    }
    cout << "A soma de todos os numeros inteiros entre "<<n1<<" e "<<n2<<" eh igual a :"<< soma;
    return 0;
}
