#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Digite o n de elementos de X e Y:";
    cin >> n;
    int i,j, x[n], y[n], c[n][n];
    for (i=0; i<n; i++){
        cout << "Digite o valor de X["<<i<<"]";
        cin >> x[i];
    }
    for (i=0; i<n; i++){
        cout << "Digite o valor de Y["<<i<<"]";
        cin >> y[i];
    }
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
           c[i][j] = x[i] * y[j];
        }
    }
    for (i=0; i<n; i++){
        cout << "X["<<i<<"]"<<x[i]<<endl;

    }
    for (i=0; i<n; i++){
        cout << "Y["<<i<<"]"<<y[i]<<endl;

    }
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
           cout << "C ["<<i<<"]["<<j<<"]= "<< c[i][j]<<endl;
        }
    }

}
