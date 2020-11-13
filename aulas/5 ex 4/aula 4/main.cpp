#include <iostream>

using namespace std;

float subtracao (float x,float y){
    float sub;
    sub = x-y;
    return sub;
}
float multiplicacao (float x,float y){
    float mult;
    mult = x*y;
    return mult;
}
float divisao (float x,float y){
    float div;
    div = x*y;
    return div;
}
float fatorial (float x){
    float fat=1;
    int aux;
    for(aux=1; aux<=x; aux++){
        fat= fat * aux;
    }
    return fat;
}
float arranjo (float x, float y){
    float arranj;
    arranj = (fatorial(x))/(fatorial(subtracao(x,y)));
    cout << "Arranjo = "<<arranj;
    return arranj;
}
float combinacoes (float x, float y){
    float comb;
    comb = (fatorial(x))/multiplicacao(fatorial(y),fatorial(subtracao(x,y)));
    cout << "Combinacoes = "<<comb;
    return comb;
}

int main()
{
    float m, p;
    cout << "(m) :";
    cin >> m;
    cout << "(p) :";
    cin >> p;
    if(m>p){
        arranjo(m,p);
        cout << endl;
        combinacoes(m,p);
    }else{
        cout << "P>M, portando r= 0";
    }
}
