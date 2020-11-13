#include <iostream>

using namespace std;

int operacoes(float a, float b, float *soma, float *sub, float *mult, float *div){
    if(a<b){
        return 0;
    }else{
        *soma=a+b;
        *sub=a-b;
        *mult=a*b;
        *div=a/b;
        return 1;
    }

}

int main()
{
    float soma, sub, mult, div, r;
    int a, b;
    cout << "Digite valor de A:";
    cin >> a;
    cout << "Digite valor de A:";
    cin >> b;
    soma = 0;
    sub = 0;
    mult = 0;
    div = 0;
    r =operacoes(a, b, &soma, &sub, &mult, &div);
    if (r == 0){
        cout << "Erro!!";
    }else{
        cout << "Soma = "<< soma<<endl;
        cout << "Subtracao = "<< sub<<endl;
        cout << "Multiplicacao = "<< mult<<endl;
        cout << "Divisao = "<< div<<endl;
    }
}
