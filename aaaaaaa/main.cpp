#include <iostream>

             using namespace std;

             int main()
             {

                              	int d1[5], d2[5], i; // o curso possui uma capacidade maxima de 20 alunos cada
                              	cout << "Matricula dos alunos participantes do curso D1: " << endl;
                              	for (i=0; i<5; i++) {
                              	cout << "Aluno " << i + 1 << ": " << endl;
                              	cin >> d1[i];
                              	}
                              	cout << "Matricula dos aluns participantes do curso D2: " << endl;
                              	for (i=0; i<5; i++) {
                              	cout << "Aluno " << i + 1 << ": " << endl;
                              	cin >> d2[i];
                              	}
                              	cout << "Alunos que participam dos dois cursos simultaneamente: " << endl;
                              	for (i=0; i<5; i++) {
                              	if (d1[i] == d2[i]) {
                              	cout << "Aluno " << i + 1 << ": " << d1[i] << endl;
                              	}
                              	}
                              	return 0;
             }
