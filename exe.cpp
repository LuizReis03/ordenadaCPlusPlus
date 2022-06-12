#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;
void ordenaNumeros(int [], int tam);
void ordenaString(string &str);

int main(){
	
	int qtdeElementos = 0;
	int array[] = {};
	int valores = 0;
	string letras;
	int i = 0;
	int opc;
	
	while(1){
			cout << "--------------MENU--------------\n";
			cout << "1-Ordenar numeros \n2-Ordenar palavras \n3-Ordenar letras \n4-Sair\n";
			cout << "\nDigite uma opcao: ";
			cin >> opc;
			system("cls");
			switch(opc){
				case 1:
					cout << "Quantos elementos deseja inserir no seu array? ";
					cin >> qtdeElementos; 
					
					while(i < qtdeElementos){
						printf ("Digite o %d valor: ", i+1);
						scanf ("%d", &valores);
						array[i] = valores;
						i++;
					}
					
					cout << "\nValores ordenados: ";
					ordenaNumeros(array, qtdeElementos);
					cout << "\n\n";
					
				break;
				
				case 2:
					system("cls");
					
				break;
				
				case 3:
					printf ("Digite uma sequencia de letras: ");
					scanf ("%s", &letras);
					
					cout << "\nLetras ordenadas: ";
					ordenaString(letras);
					
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
	
	return 0;
}


void ordenaNumeros(int array[], int tam){
	
	sort(array, array + tam);
	
	for (int i = 0; i < tam; ++i){
		cout << array[i] << " ";
	}
        
}

void ordenaString(string &str){

    int charCount[MAX_CHAR] = {0};

    for (int i=0; i<str.length(); i++){
    	charCount[str[i]-'a']++; 
	}  
     
    for (int i=0;i<MAX_CHAR;i++){
    	for (int j=0;j<charCount[i];j++){
    		cout << (char)('a'+i);
		}
	}
         
}
