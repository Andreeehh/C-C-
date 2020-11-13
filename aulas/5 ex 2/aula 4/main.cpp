#include <iostream>

using namespace std;

int somatorio (int a, int b){
    int aux, soma = 0;
    for (aux=a; aux<=b; aux++){
        soma= soma + aux;
    }
    return soma;
}

int main()
{
    int resp;
    int a, b;
    cout << "Digite 2 numeros :"<<endl;
    cin >> a;
    cin >> b;
    resp = somatorio(a, b);
    cout << "Soma = " << resp;
}
