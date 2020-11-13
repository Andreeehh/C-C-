#include <iostream>

using namespace std;

int func(int a,int b,int c){
    int i, soma;
    soma = 0;
    if ( b>c ){
        for (c; c<=b; c++){
            if(c%a == 0){
                soma = soma + c;
        }
        }
        return soma;
    }else{
        for (b; b<=c; b++){
            if(b%a == 0){
                soma = soma + b;
        }
        }
        return soma;
        }


}

int main()
{
    int a, b, c;
    cout << "A: ";
    cin >> a;
    while(a<1){
        cout <<"Digite um valor de a>=1"<<endl;
        cin >> a;
    }
    cout << "B: ";
    cin >> b;
    cout << "C: ";
    cin >> c;

    cout << "Soma = " <<func(a, b , c);
}
