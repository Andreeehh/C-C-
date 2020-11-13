#include <iostream>

using namespace std;

float notas(float p1, float p2, float p3, char x){
    float media;
    if ((x == 'A')||(x == 'a')){
        media = (p1+p2+p3)/3;
        return media;
    }
    if ((x == 'P')||(x == 'p')){
        media = ((p1*5) + (p2*3) + (p3*2)) / (p1+p2+p3);
        return media;
    }
}

int main()
{
    float p1, p2, p3,r;
    char x;
    cout << "P1: ";
    cin>> p1;
    cout << "P2: ";
    cin>> p2;
    cout << "P3: ";
    cin>> p3;
    cout << "Digite o tipo de media, ponderada(P/p) ou aritimetica(A/a)";
    cin >> x;
    r= notas(p1,p2,p3,x);
    cout << "Media = "<<r;

}
