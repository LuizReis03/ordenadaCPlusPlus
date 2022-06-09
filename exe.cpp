#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void ordenaNumeros(int [], int tam);

int main(){
	
	int array[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int tam = sizeof(array) / sizeof(array[0]);
	
	ordenaNumeros(array, tam);
	
	return 0;
}


void ordenaNumeros(int array[], int tam){
	
	sort(array, array + tam);
	
	for (int i = 0; i < tam; ++i){
		cout << array[i] << " ";
	}
        
}
