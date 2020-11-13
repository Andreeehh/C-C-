#include <iostream>

using namespace std;
//3 linhas e 3 colunas
#define L 3
#define C 3

int main()
{
    float a[L][C], b[L][C], c[L][C];
    int i, j;
    for(i=0; i<L; i++){
        for(j=0; j<C; j++){
            cout << "Digite um valor de A["<<i<<"]["<<j<<"] : ";
            cin >> a[i][j];
        }
    }
    for(i=0; i<L; i++){
        for(j=0; j<C; j++){
            cout << "Digite um valor de B["<<i<<"]["<<j<<"] : ";
            cin >> b[i][j];
        }
    }
    for(i=0; i<L; i++){
        for(j=0; j<C; j++){
            c[i][j] = a[i][j] * b[i][j];
        }
    }
    cout << "Matriz A :"<<endl;
    for(i=0; i<L; i++){
        for(j=0; j<C; j++){
            cout <<"\t"<< a[i][j];
        }
        cout<<endl;
    }
    cout << "Matriz B :"<<endl;
    for(i=0; i<L; i++){
        for(j=0; j<C; j++){
            cout <<"\t"<< b[i][j];
        }
        cout<<endl;
    }
    cout <<endl;
    cout<<"x"<<endl;
    cout<<"\t--------------------"<<endl;
    cout << "Matriz C :"<<endl;
    for(i=0; i<L; i++){
        for(j=0; j<C; j++){
            cout <<"\t"<< c[i][j];
        }
        cout<<endl;
    }
}

