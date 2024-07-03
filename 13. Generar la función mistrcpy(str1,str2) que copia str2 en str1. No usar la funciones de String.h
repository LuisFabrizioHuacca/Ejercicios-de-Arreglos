#include <iostream>

using namespace std;

void mistrcpy(char str1[], char str2[], int tam){
	for (int i = 0; i<tam; i++) {
		str2[i] = str1[i];
	}
}

int main(){
	
	char str1[]="hola mundo";
	char str2[]="";
	
	int tam = sizeof(str1) / sizeof(str1[0]);
	
	mistrcpy(str1, str2, tam);
	
	cout << str2;
	
	return 0;
}
