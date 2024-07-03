#include <iostream>

using namespace std;

void mistrcat(char str1[], char str2[], int tam)
{
    for(int i=0; str2[i] != '\0'; i++)
    { 
        str1[i + tam] = str2[i];
    }
}

int main(){
	
	char str1[]="hola mundo ";
	char str2[]="prueba";
	
	int tam = sizeof(str2) / sizeof(str2[0]);
	
	mistrcat(str1, str2, tam);
	
	cout << str1;
	
	return 0;
}
