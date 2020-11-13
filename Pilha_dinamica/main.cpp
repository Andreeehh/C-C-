#include <iostream>
using namespace std;
typedef char TInfo;
typedef struct no {
 TInfo info;
 no *prox;
} TNo;
typedef TNo *PNo;
void criaPilha(PNo *l) {
 *l = NULL;
}
void insereInicioPilha(PNo *l, TInfo dado) {
 PNo p = (PNo)malloc(sizeof(TNo));
 p->info = dado;
 p->prox = *l;
 *l = p;
 cout << "Inserido: "<<dado<<endl;
}
void insereFimPilha(PNo *l, TInfo dado){
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

int eliminaFimPilha(PNo *l, TInfo *dado){
PNo p;
PNo q;
if (*l) {
 q = *l;
 while (q->prox) {
 p = q;
 q = q->prox;
}
p->prox = NULL;
*dado = q->info;
free(q);

return 1;
}else{
return 0;
}
}


int eliminaInicioPilha(PNo *l, TInfo *dado) {
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
int contaNosPilha(PNo l) {
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
void mostraPilha(PNo l) {
 cout << "Pilha (" << contaNosPilha(l) << "):";
 while (l) {
 cout << " " << l->info;
 l = l->prox;
 }
}
int mostraUltimoPilha(PNo l, TInfo *dado) {
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
int mostraEnesimoPilha(PNo l, int n, TInfo *dado) {
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
void terminaPilha(PNo *l) {
 TInfo v;
 while (eliminaInicioPilha(l, &v));
}
int main() {
 PNo Pilha;
 TInfo valor;
 cout << endl << "Criando Pilha...";
 criaPilha(&Pilha);
 cout << endl << "Criado!" << endl;
 cout << endl << "Inserindo Pilha..."<<endl;
 insereInicioPilha(&Pilha, 'A');
 insereInicioPilha(&Pilha, 'B');
 insereInicioPilha(&Pilha, 'C');
 insereInicioPilha(&Pilha, 'D');
 cout << endl << "Inserido!" << endl;
 cout << endl << "Mostrando Pilha..." << endl;
 mostraPilha(Pilha);
 cout << endl << "Mostrado!" << endl;
 cout << endl << "Excluindo valor da Pilha..." << endl;
 if (eliminaInicioPilha(&Pilha, &valor)) {
 cout << "Valor: " << valor;
 } else {
 cout << "Pilha Vazia!";
 }
 cout << endl << "Excluido!" << endl;
 cout << endl << "Mostrando Pilha..." << endl;
 mostraPilha(Pilha);
 cout << endl << "Mostrado!" << endl;

 cout << endl << "Terminando Pilha...";
 terminaPilha(&Pilha);
 cout << endl << "Terminado!" << endl;
 cout << endl << "Mostrando Pilha..." << endl;
 mostraPilha(Pilha);
 cout << endl << "Mostrado!" << endl;
 cout << endl << "*****" << endl;
 return 0;
}
