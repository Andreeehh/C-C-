#include <iostream>

using namespace std;

string nomec(string n,string s){
    return n+" "+s;
}

int main()
{
    string n;
    string s;
    cout << "Digite seu nome :" ;
    cin >> n;
    cout << "Digite seu sobrenome :" ;
    cin >> s;
    cout << nomec(n, s);
    return 0;
}
