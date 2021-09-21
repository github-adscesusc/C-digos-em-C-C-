/*Lista4 - 8. Leia um vetor de 40 posições.
Contar e escrever os valores e quantos 
valores são pares e o mesmo ímpares.

//Variáveis

Vetor[40] tipo inteiro;
QtidadePar, QtidadeImpar tipo inteiro;
op tipo caracter;

Início
Faça
limpa tela;
QtidadePar = 0;
QtidadeImpar = 0;
escreva("Gerar os 40 números inteiros");
para(int i=0;i<40;i++)
   Vetor[i] = randomizar 0-100;
   escreva("Vetor[",i,"]: ",Vetor[i]);   
fimpara

escreva("Selecionando os Números Pares");
para(int i=0;i<40;i++)
   se(Vetor[i] / 2 - resto = 0)
    escreva("Vetor[",i,"]: ",Vetor[i],"é Par");   
    QtidadePar++;
    fimse
fimpara
escreva("Qtidade Números Pares: ",QtidadePar);

escreva("Selecionando os Números Impares");
para(int i=0;i<40;i++)
   se(Vetor[i] / 2 - resto<>0)
    escreva("Vetor[",i,"]: ",Vetor[i],"é Impar");   
    QtidadeImpares++;
    fimse
fimpara
escreva("Qtidade Números Impares: ",QtidadeImpares);

escreva("Digite a opção <S> ou <N> para novos valores?");
leia(op);
op= maísculo(op);
Enquanto (op <> 'N');

fim algoritmo*/

//conveter para linguagem C

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
//variáveis
int Vetor[40];// tipo inteiro;
int QtidadePar, QtidadeImpar;// tipo inteiro;
char op;// tipo caracter;
using namespace std;//comando para ativar C++
//Início
main(){
setlocale(LC_ALL,"Portuguese");
//Faça
do{
//limpa tela;
system("cls");
QtidadePar = 0;
QtidadeImpar = 0;
//printf("\n Gerar os 40 números inteiros\n");
cout<<"\n Gerar os 40 números inteiros\n";
for(int i=0;i<40;i++){
   Vetor[i] = rand() % 100;
   printf("\n Vetor[%i]: %i ",i,Vetor[i]);   
}
printf("\n \n");

printf("\n Selecionando os Números Pares \n");
for(int i=0;i<40;i++){
   if(Vetor[i] % 2 == 0){
     printf("\n Vetor[%i]: %i é Par",i,Vetor[i]);   
     QtidadePar++;}//QtidadePar=QtidadePar+1;
}
printf("\n \n");
printf("\n Qtidade Números Pares: %i ",QtidadePar);
printf("\n \n");
printf("\n Selecionando os Números Impares \n");
for(int i=0;i<40;i++){
   if(Vetor[i] % 2 != 0){
    printf("\n Vetor[%i]: %i é Impar",i,Vetor[i]);   
    QtidadeImpar++;//QtidadeImpar=QtidadeImpar+1;
    }
}
printf("\n \n");
printf("\n Qtidade Números Impares: %i",QtidadeImpar);
printf("\n \n");
printf("\n \n");
printf("\n Digite a opção <S> ou <N> para novos valores?");
op=getche();
op = toupper(op);}while(op != 'N');
//Enquanto (op <> 'N');
}
//fim algoritmo*/
