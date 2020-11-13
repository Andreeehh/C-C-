#include <iostream>

using namespace std;

float conta(float x,float y){
    float r;
    r = x * y;
    if(r<11.20){
        return 11.20;
    } else {
        return r;
    }

}

int main()
{
    float r, codigo, qtd;
    char nome[30];
    cout << "Digite o Nome do consumidor :";
    cin >> nome;
    cout << "Digite o Codigo do consumidor :";
    cin >> codigo;
    float kWh;
    kWh = 1.54;
    cout << "Preco do kWh :" <<kWh<<endl;
    cout << "Digite a qtd de kWh consumido :";
    cin >> qtd;
    r =conta(kWh, qtd);
    cout << "Total a pagar = R$"<<r;

}
