#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void ordenaNumeros(int [], int tam);

int main(){
	int opc;
	
	cout << "Digite uma opcao: \n1-Ordenar numeros \n2-Ordenar palavras \n3-ordenar letras \n4-Sair";
	cin >> opc;
	
	while(1){
			switch(opc){
				case 1:
					
					system("cls");
					int array[] = {};
					int qtdeElementos = 0;
					int valores = 0;
					cout << "Quantos elementos deseja inserir no seu array? ";
					cin >> qtdeElementos;
					
					for(int i = 0; i < qtdeElementos; i++){
						cout << "Digite os valores do seu array: ";
						cin >> valores;
						array[i] = valores;
					}
					int tam = sizeof(array) / sizeof(array[0]);
				break;
				
				case 2:
					system("cls");
					
				break;
				
				case 3:
					system("cls");
					
				break;
				
				case 4:
					system("cls");
					
				break;
				
				default:
					system("cls");
					cout << "Verifique o que foi digitado!!";
				break;
			}
	}
	
	
//	int array[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
//	int tam = sizeof(array) / sizeof(array[0]);
//	
//	ordenaNumeros(array, tam);
	
	return 0;
}


void ordenaNumeros(int array[], int tam){
	
	sort(array, array + tam);
	
	for (int i = 0; i < tam; ++i){
		cout << array[i] << " ";
	}
        
}
