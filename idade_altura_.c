#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int G, i, somaInt=0, mediaIdade;
	float somaFlo=0, mediaAltura;
	
	printf("----- IDADE, ALTURA E MEDIA DOS ATLETAS -----\n\nNumero de Atletas: ");
	scanf("%d", &G);
	
	int idade[G];
	float altura[G];
	
	for (i=0; i<G; i++){
		system("CLS");
		printf("Atlea %d \nIdade e Altura: ", i+1);
		scanf("%d%f", & idade[i], & altura[i]);
		somaInt+=idade[i];
		somaFlo+=altura[i];
	}
	
	mediaIdade=somaInt/G;
	mediaAltura=somaFlo/G;
	
	printf("\n----- Valores Informados -----\n");
	
	for (i=0; i<G; i++){
	printf("\nAtleta %d \nIdade: %d\nAltura: %.2f\n", i+1, idade[i], altura[i]);
	}
	
	printf("\n----- Analise dos Dados -----\n");
	printf("\nMedia das Idades: %d\nMedia das Alturas: %.2f\n", mediaIdade, mediaAltura);
	
	return 0;
}
