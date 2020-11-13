#include <iostream>

using namespace std;

float elevado(float x,float y){
    float soma, aux;
    soma = x;
    aux = x;
    if(y == 0){
        return 1;
    }else{if(y == 1){
        return x;
    }else{for (int i=2; i<=y; i++){
        soma= soma *x;
    }
    }
    }
    return soma;

}

int main()
{
    float x, y, r;
    cout << "X:";
    cin >> x;
    cout << "Y:";
    cin >>y;
    r = elevado(x, y);
    cout << "Resposta = "<<r;
}
