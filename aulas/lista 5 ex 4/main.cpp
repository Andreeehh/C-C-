#include <iostream>

using namespace std;

void novadata(int *dia,int *mes,int *ano){
    int vetor[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (*ano %4 == 0){
        vetor[1] = vetor [1] + 1;
    }

    *dia=*dia+1;
    if(*dia>vetor[*mes-1]){
        *mes= *mes+1;
        *dia=1;
    }
    if (*mes>12){
        *ano=*ano+1;
        *mes=1;
    }
}

int validadata(int dia,int mes,int ano){
    int vetor[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (ano %4 == 0){
        vetor[1] = vetor [1] + 1;
    }
    if(mes>12 || mes<1){
        return 0;
    }   else    {
            if(dia>vetor[mes-1] || dia<1){
                return 0;
            }   else{
                    return 1;
                }
        }
}

int main()
{
   int dia, mes, ano;
   cout << "Dia :";
   cin >> dia;
   cout << "Mes :";
   cin >> mes;
   cout << "Ano :";
   cin >> ano;

   while (!validadata(dia,mes,ano)){
    cout << "Data invalida "<<endl;
    cout << "Dia :";
    cin >> dia;
    cout << "Mes :";
    cin >> mes;
    cout << "Ano :";
    cin >> ano;
   }

   cout << "Data "<<dia<<"/"<<mes<<"/"<<ano;
   cout <<endl;
   novadata(&dia, &mes, &ano);
   cout << "Nova data "<<dia<<"/"<<mes<<"/"<<ano;


}
