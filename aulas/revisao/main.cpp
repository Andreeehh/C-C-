#include <iostream>

using namespace std;

#define L 50
#define C 50

int main()
{
    float a[L][C], b[L][C], c[L][C],somatoria,linhaA,colA,linhaB,colB;
    somatoria=0;
    cout << "Linha a: ";
    cin >> linhaA;
    cout << "Coluna a: ";
    cin >> colA;
    cout << "Linha b = coluna de A"<<endl;
    linhaB = colA;
    cout << "Coluna b: ";
    cin >> colB;
    int i, j, k;
    for(i=0; i<linhaA; i++){
        for(j=0; j<colA; j++){
            cout << "Digite um valor de A["<<i<<"]["<<j<<"] : ";
            cin >> a[i][j];
        }
    }
    for(i=0; i<linhaB; i++){
        for(j=0; j<colB; j++){
            cout << "Digite um valor de B["<<i<<"]["<<j<<"] : ";
            cin >> b[i][j];
        }
    }
    for(i=0; i<linhaA; i++){
        for(j=0; j<colB; j++){
            somatoria=0;
            for(k=0; k<colA; k++){
                somatoria = somatoria + a[i][k]*b[k][j];
            }
        c[i][j]=somatoria;
        }
    }
    cout << "Matriz A :"<<endl;
    for(i=0; i<linhaA; i++){
        for(j=0; j<colA; j++){
            cout <<"\t"<< a[i][j];
        }
        cout<<endl;
    }
    cout << "Matriz B :"<<endl;
    for(i=0; i<linhaB; i++){
        for(j=0; j<colB; j++){
            cout <<"\t"<< b[i][j];
        }
        cout<<endl;
    }
    cout <<endl;
    cout<<"x"<<endl;
    cout<<"\t--------------------"<<endl;
    cout << "Matriz C :"<<endl;
    for(i=0; i<linhaB; i++){
        for(j=0; j<colA; j++){
            cout <<"\t"<< c[i][j];
        }
        cout<<endl;
    }
}




