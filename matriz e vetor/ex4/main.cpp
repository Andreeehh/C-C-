#include <iostream>

using namespace std;
#define QTDL 10
#define QTDC 3
int main()
{
    float nota [QTDL][3], menornota;
    int i,j,qtd[3],menorprova ;
    for (i=0; i<QTDL; i++){
        for (j=0; j<3; j++){
                cout << "Prova "<<j+1<<" do aluno "<<i+1<<" :";
                cin >> nota [i][j];
        }
        cout << endl;
    }
    cout << "\tRelatorio"<<endl;
    cout << "\tAlunos\tNota"<<endl;
    for (j=0; j<3; j++){
        qtd[j] = 0;
    }
    for (i=0; i<QTDL; i++){
        menornota = nota[i][0];
        menorprova = 0;
        for (j=1; j<3; j++){
            if(nota[i][j] < menornota){
                menornota = nota[i][j];
                menorprova = j;
            }
        }
        qtd[menorprova]= qtd[menorprova] + 1;
        cout << "\t"<< i+1 << "\t" << menorprova+1 << endl;
    }
    cout << endl;
    for (j=0; j<3; j++){
        cout << "\t Alunos menor  nota " << j+1 << " = " << qtd[j]<< endl;
    }

    return 0;
}


