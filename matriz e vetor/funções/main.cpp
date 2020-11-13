#include <iostream>

using namespace std;

int numero(int x){
    if(x<0){
        return 0;
    }else{
        return 1;
    }
}

int main()
{
    int x, resp;
    cout << "digite um numero :";
    cin >> x;
    resp =numero(x);
    cout << "Retorno :"<< resp;
    return 0;
}
