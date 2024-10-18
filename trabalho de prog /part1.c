#include <stdio.h>
#define alunos 100
float calcularMediaPonderada(float notas1[], float notas2[], 
float notas3[], int pesos1[], int pesos2[], int pesos3[], int tamanho){
float resultado = (notas1[tamanho]*pesos1[tamanho])+(notas2[tamanho]*pesos2[tamanho]+(notas3[tamanho]*pesos3[tamanho]))/ pesos1[tamanho]+pesos2[tamanho]+pesos3[tamanho];
return resultado;
}

float calcularMediaTurma(float medias[], int tam);
 


float encontrarNotaMaxima(float media[], int tam);

float encontrarNotaMinima(float medias[], int tam);

int main(){
   float notas1[alunos], notas2[alunos], notas3[alunos];
   float pesos1[alunos], pesos2[alunos], pesos3[alunos];
   int inserir=1;
   int quantDeAlunos=0;
   float medias[alunos];
   do 
   {
    printf("digite a nota primeira e o primeiro peso");
    scanf("%f %f", &notas1[quantDeAlunos], &pesos1[quantDeAlunos]);
    
    printf("digite a segunda nota e o segundo peso");
    scanf("%f %f",&notas2[quantDeAlunos], &pesos2[quantDeAlunos]);

    printf("digite a terceira nota e o terceiro peso");
    scanf("%f %f", &notas3[quantDeAlunos], &pesos3[quantDeAlunos]);

    printf("deseja inserir mais notas?");
    scanf("%d", &inserir);
    quantDeAlunos++;
   }while (inserir==1 && quantDeAlunos < alunos);

for (int i=0; i<quantDeAlunos; i++){
  medias[i]= calcularMediaPonderada (notas1, notas2, notas3, pesos1, pesos2, pesos3, i);
printf("a media:%f", medias[i]);
}   



  return 0;
}
