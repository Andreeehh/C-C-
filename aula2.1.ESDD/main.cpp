#include <iostream>

using namespace std;

int s(int a){
    if(a>1){
        return a + s(a-1);
    } else {
        return 1;
    }
}

int main()
{
    int n, soma;
    cout << "Digite um numero : ";
    cin >> n;
    soma = s(n);
    cout << "Soma de todos os numeros de 0 a "<<n<<" = "<< soma;
    return 0;
}
