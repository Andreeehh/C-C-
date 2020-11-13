#include <iostream>

using namespace std;

int main()
{
   float n, n1,c;
   cout <<"Digite um numero : ";
   cin >> n;
    n1=1;
    c=n1*(n1+1)*(n1+2);
    while (c<n){
        n1++;
        c=n1*(n1+1)*(n1+2);
    }
    if(c==n){
        cout<< "Triangular";
    }else{
        cout<<"nao triangular";
    }

   }
