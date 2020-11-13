#include <iostream>

using namespace std;

int exercicio(int n1,int *n1dobro, int n2, int *n2dobro){
    *n1dobro = *n1dobro*2;
    *n2dobro = *n2dobro*2;
    return n1+n2;
}

int main()
{
    int n1, n2, n1dobro, n2dobro, r;
    cout << "Digite valor 1 : ";
    cin >> n1;
    n1dobro = n1;
    cout << "Digite valor 2 : ";
    cin >> n2;
    n2dobro = n2;
    r = exercicio(n1, &n1dobro, n2, &n2dobro);

    cout << "Soma dos valores iniciais = "<<r<<endl;
    cout << "Valor inicial 1 = "<<n1<<" * 2 = "<< n1dobro<<endl;
    cout << "Valor inicial 2 = "<<n2<<" * 2 = "<< n2dobro<<endl;
}
