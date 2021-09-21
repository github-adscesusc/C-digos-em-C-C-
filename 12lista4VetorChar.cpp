/*12 lista 4. Leia um vetor de 13 posições contendo letras minúsculas,
 e na sequência mostre o vetor original, o vetor com as letras 
 em maiúscula. Após apresente cada letra do vetor das minúsculas 
 com o seu valor da tabela ASCII sendo o decimal, Hexadecimal e octal.
  E assim também para o vetor das Maiúsculas.

Variáveis
VetorCharm[13] tipo caracter;
VetorCharM[13] tipo caracter;
op caracter;

Início
Faça 
Limpa tela
escreva("Gerando 13 caracteres Minúsculos a-z");
para(int i=0;i<13;i++)
   VetorCharm[i] = randomizar 25+97;
   escreva("VetorCharm[",i,"]=",VetorCharm[i]);
   escreva("VetorCharm[",i,"]=",Valor Decimal);
   escreva("VetorCharm[",i,"]=",Valor Hexadecimal);
   escreva("VetorCharm[",i,"]=",Valor Octal);
   
fimpara


escreva("Converetendo 13 caracteres Maísculo A-Z");
para(int i=0;i<13;i++)
   VetorCharM[i] = toupper(VetorCharm[i]);
   escreva("VetorCharM[",i,"]=",VetorCharM[i]);
   escreva("VetorCharM[",i,"]=",Valor Decimal);
   escreva("VetorCharM[",i,"]=",Valor Hexadecimal);
   escreva("VetorCharM[",i,"]=",Valor Octal);
fimpara
 escreva("Deseja gerar novos caracteres <S> ou <N>");
  leia(op);
  op=maísculo(op);
  Enquanto(op <> 'N');
  fimalgoritmo
 */
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
//Variáveis
char VetorCharm[13];// tipo caracter;
char VetorCharM[13];// tipo caracter;
char op;

//Início
main(){

//Faça 
do{

system("cls");//Limpa tela
printf("\n Gerando 13 caracteres Minúsculos a-z");
for(int i=0;i<13;i++){
   VetorCharm[i] = rand() % 25+97;
   printf("\n VetorCharm[%i]= %c caracter",i,VetorCharm[i]);
   printf("\n VetorCharm[%i]= %i Decimal",i,VetorCharm[i]);
   printf("\n VetorCharm[%i]= %x Hexadecimal",i,VetorCharm[i]);
   printf("\n VetorCharm[%i]= %o Octal",i,VetorCharm[i]);
}//fimpara

printf("\n \n");
printf("\n Convertendo 13 caracteres Maísculo A-Z");
for(int i=0;i<13;i++){
   VetorCharM[i] = toupper(VetorCharm[i]);
   printf("\n VetorCharM[%i]= %c caracter",i,VetorCharM[i]);
   printf("\n VetorCharM[%i]= %i Decimal",i,VetorCharM[i]);
   printf("\n VetorCharM[%i]= %x Hexadecimal",i,VetorCharM[i]);
   printf("\n VetorCharM[%i]= %o Octal",i,VetorCharM[i]);
}//fimpara
printf("\n \n");
 printf("\n Deseja gerar novos caracteres <S> ou <N>");
  op=getche();
  op=toupper(op);}
  while(op != 'N');}
//  fimalgoritmo
    
