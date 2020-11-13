#include <iostream>
using namespace std;
typedef char TInfo;
typedef struct no {
 TInfo info;
 no *prox;
} TNo;
typedef TNo *PNo;
void criaLista(PNo *l) {
 *l = NULL;
}
void insereInicioLista(PNo *l, TInfo dado) {
 PNo p = (PNo)malloc(sizeof(TNo));
 p->info = dado;
 p->prox = *l;
 *l = p;
}
void insereFimLista(PNo *l, TInfo dado){
 PNo p = (PNo)malloc(sizeof(TNo));
 p->info = dado;
 p->prox = NULL;
PNo q;
 if (*l) {
 q = *l;
 while (q->prox) {
 q = q->prox;
 }
 q->prox=p;
}else{
*l=p;
}
}

int eliminaFimLista(PNo *l, TInfo *dado) {
    PNo p, q;
    if (*l) {
        p = *l;
        q = NULL;
        while (p->prox) {
            q = p;
            p = p->prox;
        }
        if (q) {
            q->prox = NULL;
        } else {
            *l = NULL;
        }
        *dado = p->info;
        free(p);
        return 1;
    } else {
        return 0;
    }
}


int eliminaInicioLista(PNo *l, TInfo *dado) {
 PNo p;
 if (*l) {
 p = *l;
 *dado = p->info;
 *l = p->prox;
 free(p);
 return 1;
 } else {
 return 0;
 }
}
int contaNosLista(PNo l) {
 PNo p;
 int n;
 n = 0;
 p = l;
 while (p) {
 n++;
 p = p->prox;
 }
 return n;
}
void mostraLista(PNo l) {
 cout << "Lista (" << contaNosLista(l) << "):";
 while (l) {
 cout << " " << l->info;
 l = l->prox;
 }
}
int mostraUltimoLista(PNo l, TInfo *dado) {
 PNo p;
 if (l) {
 p = l;
 while (p->prox) {
 p = p->prox;
 }
 *dado = p->info;
 return 1;
 } else {
 return 0;
 }
}
int mostraEnesimoLista(PNo l, int n, TInfo *dado) {
 PNo p;
 int i;
 p = l;
 i = 1;
 while (p && (i<n)) {
 p = p->prox;
 i++;
 }
 if (p) {
 *dado = p->info;
 return 1;
 } else {
 return 0;
 }
}
void terminaLista(PNo *l) {
 TInfo v;
 while (eliminaInicioLista(l, &v));
}
int main() {
 PNo lista;
 TInfo valor;
 cout << endl << "Criando Lista...";
 criaLista(&lista);
 cout << endl << "Criado!" << endl;
 cout << endl << "Inserindo Lista...";
 insereInicioLista(&lista, 'D');
 insereInicioLista(&lista, 'C');
 insereInicioLista(&lista, 'B');
 insereInicioLista(&lista, 'A');
 cout << endl << "Inserido!" << endl;
 cout << endl << "Mostrando Lista..." << endl;
 mostraLista(lista);
 cout << endl << "Mostrado!" << endl;
 insereFimLista(&lista, 'G');
 cout << endl << "Inserido! AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << endl;
 cout << endl << "Mostrando Lista..." << endl;
 mostraLista(lista);
 cout << endl << "Mostrado!" << endl;
 cout << endl << "Excluindo NO FIM DA Lista..." << endl;
 if (eliminaFimLista(&lista, &valor)) {
 cout << "Valor: " << valor;
 } else {
 cout << "Lista Vazia!";
 }
 cout << endl << "Mostrando Lista..." << endl;
 mostraLista(lista);
 cout << endl << "Mostrado!" << endl;
 cout << endl << "Excluindo Lista..." << endl;
 if (eliminaInicioLista(&lista, &valor)) {
 cout << "Valor: " << valor;
 } else {
 cout << "Lista Vazia!";
 }
 cout << endl << "Excluido!" << endl;
 cout << endl << "Mostrando Lista..." << endl;
 mostraLista(lista);
 cout << endl << "Mostrado!" << endl;
 cout << endl << "Mostrando Ultimo Lista..." << endl;
 if (mostraUltimoLista(lista, &valor)) {
 cout << "Valor: " << valor;
 } else {
 cout << "Lista Vazia!";
 }
 cout << endl << "Mostrado!" << endl;
 cout << endl << "Mostrando Segundo Lista..." << endl;
 if (mostraEnesimoLista(lista, 2, &valor)) {
 cout << "Valor: " << valor;
 } else {
 cout << "Nao Encontrado!";
 }
 cout << endl << "Mostrado!" << endl;
 cout << endl << "Terminando Lista...";
 terminaLista(&lista);
 cout << endl << "Terminado!" << endl;
 cout << endl << "Mostrando Lista..." << endl;
 mostraLista(lista);
 cout << endl << "Mostrado!" << endl;
 cout << endl << "*****" << endl;
 return 0;
}
