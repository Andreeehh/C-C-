#include <iostream>

using namespace std;

int main()
{
    float i ,n , t,t1,t2;
    cout<< "digite um valor de n: ";
    cin >> n;
    while (n<2){
        cout << "Digite um valor n>2: ";
        cin >> n;
    }
    t2=1;
    cout <<t2 << " ";
    t1=2;
    cout << t1 << " ";

    for (i=3;i<=n;i++){
        t=t1+t2;
        cout << t<<" ";
        t2=t1;
        t1=t;
    }

   }
