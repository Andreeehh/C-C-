#include <iostream>

using namespace std;

float absoluto(float x){
    if(x<0){
        return x*-1;
    }else{
        return x;
    }
}

int main()
{
    float x;
    cout << "Digite um numero :";
    cin >>  x;
    absoluto(x);
    cout << "N absoluto :"<< absoluto(x);
    return 0;
}
