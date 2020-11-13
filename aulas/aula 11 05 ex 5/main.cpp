#include <iostream>

using namespace std;

void aumentar(int *a){
    *a = *a+1;
}

void decrementar(int *d){
    *d = *d-1;
}

int main()
{
    int x, r, r1;
    cout<< "Digite um numero : ";
    cin >> x;
    aumentar(&x);
    cout << "aumentar : "<<x<<endl ;
    cout<< "Digite um numero : ";
    cin >> x;
    decrementar(&x);
    cout << "decrementar : "<<x ;
}
