#include <iostream>

using namespace std;

int main()
{
    int n,i,soma;
    cout << "Digite um valor de n <=20 :";
    cin >> n;
    soma=0;
    int v[n];
    if(n<=20){
            for(i=0;i<n;i++){
                cout << "Vetorial de V["<<i<<"]";
                cin >> v[i];
                soma=v[i]+soma;
            }
            cout<<"soma dos valores = "<<soma;
            }

    else{
    cout <<"N maior que 20"<<endl;
     }
}
