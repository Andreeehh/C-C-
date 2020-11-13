#include <iostream>

using namespace std;

int main()
{
    int x,p,aux,testes, altura[50],puloA[30],puloB[30];
    cout << "Digite o numero de testes: ";
    cin >> x;

    // numeros de paredes e alturas para cada teste
    for(testes = 0; testes<x; testes++){
        cout <<"Digite o numero de paredes : ";
        cin >> p;


        for (aux=0; aux<p; aux++){
            cout << "Altura das paredes p["<<aux+1<<"]";
            cin >> altura[aux];

        }
        //checar pulos
        puloA[testes]=0;
        puloB[testes]=0;
        for (aux = 0; aux<p-1; aux++){

            if(altura[aux]>altura[aux+1]){
                puloB[testes] = puloB[testes]+1;
            } else {if(altura[aux]<altura[aux+1]){
                puloA[testes] = puloA[testes] + 1;
                } else {
                puloA[testes] = puloA[testes];
                puloB[testes] = puloB[testes];
            }
            }
        }

        //cout dos numeros de pulo por teste
        cout << "Resultados teste n("<<testes+1<<")"<<endl;
        cout << "Pulos altos = "<<puloA[testes]<<endl;
        cout << "Pulos baixos = "<<puloB[testes]<<endl;
    }

}
