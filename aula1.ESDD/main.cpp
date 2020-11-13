#include <iostream>
using namespace std;
#define QTDNC 2

    typedef struct {
     float real, imaginaria;
    } numcomplex;

void leNumComplex(numcomplex *nc) {
     cout << endl << "Parte Real: ";
     cin >> nc->real;
     cout << endl << "Parte Imaginaria: ";
     cin >> nc->imaginaria;
}

void escreveNumComplex(numcomplex nc) {
     cout << endl << "Numero Complexo: ";
     if ((nc.real != 0) || (nc.imaginaria == 0)) {
        cout << nc.real;
     }
     if (nc.imaginaria != 0) {
         if ((nc.imaginaria > 0) && (nc.real != 0)) {
         cout << "+" << nc.imaginaria;
     } else {
        cout << nc.imaginaria;
     }
        cout << "i";
     }
        cout << endl;
    }
  numcomplex somaNumComplex(numcomplex a, numcomplex b) {
        numcomplex aux;
        aux.real = a.real + b.real;
        aux.imaginaria = a.imaginaria + b.imaginaria;
        return aux;
}
    numcomplex produtoNumComplex(numcomplex a, numcomplex b) {
        numcomplex aux;
        aux.real = (a.real * b.real) - (a.imaginaria * b.imaginaria);
        aux.imaginaria = (a.real * b.imaginaria) + (a.imaginaria * b.real);
        return aux;
}
    int igualdadeNumComplex(numcomplex a, numcomplex b){
        if ((a.real == b.real) && (a.imaginaria == b.imaginaria) ){

            return 1;
        } else {

            return 0;
        }
    }
    numcomplex opostoNumComplex(numcomplex a){
        numcomplex aux;
        aux.real = a.real * (-1);
        aux.imaginaria = a.imaginaria * (-1);
        return aux;
    }
    numcomplex conjugadoNumComplex(numcomplex a){
        numcomplex aux;
        aux.real = a.real;
        aux.imaginaria = a.imaginaria * (-1);
        return aux;
    }

int main()
{
     int i;
     numcomplex vetorNC[QTDNC];
     numcomplex sNC, pNC, iNC, oNC1, oNC2, cNC1,cNC2;
     for (i=0; i<QTDNC; i++) {
         cout << endl << "====================";
         cout << endl << i+1 << "o Numero Complexo";
         cout << endl << "====================" << endl;
         leNumComplex(&vetorNC[i]);
         escreveNumComplex(vetorNC[i]);
     }
     cout << endl << "====================" << endl;
     cout << endl << "====================";
     cout << endl << "Soma";
     cout << endl << "====================" << endl;
     sNC = somaNumComplex(vetorNC[0], vetorNC[1]);
     escreveNumComplex(sNC);
     cout << endl << "====================" << endl;
     cout << endl << "====================";
     cout << endl << "Produto";
     cout << endl << "====================" << endl;
     pNC = produtoNumComplex(vetorNC[0], vetorNC[1]);
     escreveNumComplex(pNC);
     cout << endl << "====================" << endl;
     cout << endl << "====================" << endl;
     cout << endl << "====================";
     cout << endl << "IGUALDADE";
     cout << endl << "====================" << endl;
     iNC = igualdadeNumComplex(vetorNC[0], vetorNC[1]);
     if (iNC == 1){
        cout << "Partes reais e imaginarias respectivamente iguais";
     } else {
        cout << "Partes reais e imaginairias respectivamente diferentes";
     }
     cout << endl << "====================" << endl;
     cout << endl << "====================" << endl;
     cout << endl << "====================";
     cout << endl << "OPOSTO 1 ";
     cout << endl << "====================" << endl;
     oNC1 = opostoNumComplex(vetorNC[0]);
     escreveNumComplex(oNC1);
     cout << endl << "====================" << endl;
     cout << endl << "====================" << endl;
     cout << endl << "====================";
     cout << endl << "OPOSTO 2 ";
     cout << endl << "====================" << endl;
     oNC2 = opostoNumComplex(vetorNC[1]);
     escreveNumComplex(oNC1);
     cout << endl << "====================" << endl;
     cout << endl << "====================" << endl;
     cout << endl << "====================" << endl;
     cout << endl << "====================";
     cout << endl << "CONJUGADO 1 ";
     cout << endl << "====================" << endl;
     cNC1 = conjugadoNumComplex(vetorNC[0]);
     escreveNumComplex(cNC1);
     cout << endl << "====================" << endl;
     cout << endl << "====================" << endl;
     cout << endl << "====================" << endl;
     cout << endl << "====================" << endl;
     cout << endl << "====================";
     cout << endl << "CONJUGADO 2 ";
     cout << endl << "====================" << endl;
     cNC2 = conjugadoNumComplex(vetorNC[1]);
     escreveNumComplex(cNC2);
     cout << endl << "====================" << endl;
     return 0;
}
