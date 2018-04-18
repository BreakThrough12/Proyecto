#include <stdio.h>

int main(int argc, char const *argv[])
{
	float altura;
	int peso;
	double IMC;
	printf("Ingrese su altura en metros\n");
	scanf("%f",&altura);
	printf("Ingrese su peso\n");
	scanf("%d",&peso);

	IMC=  peso/(altura*altura);

	
}