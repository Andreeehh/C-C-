#include <iostream>
#include <math.h>

using namespace std;

float raizes(int a, int b, int c, float *r1, float *r2){
    float delta = (b*b)-4*a*c;
    float raiz1 = (-b + sqrt(delta)) / (2*a);
    float raiz2 = (-b - sqrt(delta)) / (2*a);
    *r1 = raiz1;
    *r2 = raiz2;
    if(delta<0){
         return -1;

    }else{if(delta==0){

        return 0;
    }else{

        return 1;
    }
    }
}

int main()
{
    float a, b , c, r;
    float r1 = 0;
    float r2 = 0;
    cout<< "Digite A:";
    cin>>a;
    cout<< "Digite B:";
    cin>>b;
    cout<< "Digite C:";
    cin>>c;
    r =raizes(a,b,c,&r1,&r2);
    if (r<0){
        cout<< "Nenhuma raiz real";
    }else{if(r==0){
        cout <<"uma raiz real = "<<r1;
    }else{
        cout <<"Duas raizes r1 ="<<r1<< " r2 = "<<r2;
    }
    }
}
