/*12 lista 4. Leia um vetor de 13 posi��es contendo letras min�sculas,
 e na sequ�ncia mostre o vetor original, o vetor com as letras 
 em mai�scula. Ap�s apresente cada letra do vetor das min�sculas 
 com o seu valor da tabela ASCII sendo o decimal, Hexadecimal e octal.
  E assim tamb�m para o vetor das Mai�sculas.

Vari�veis
VetorCharm[13] tipo caracter;
VetorCharM[13] tipo caracter;
op caracter;

In�cio
Fa�a 
Limpa tela
escreva("Gerando 13 caracteres Min�sculos a-z");
para(int i=0;i<13;i++)
   VetorCharm[i] = randomizar 25+97;
   escreva("VetorCharm[",i,"]=",VetorCharm[i]);
   escreva("VetorCharm[",i,"]=",Valor Decimal);
   escreva("VetorCharm[",i,"]=",Valor Hexadecimal);
   escreva("VetorCharm[",i,"]=",Valor Octal);
   
fimpara


escreva("Converetendo 13 caracteres Ma�sculo A-Z");
para(int i=0;i<13;i++)
   VetorCharM[i] = toupper(VetorCharm[i]);
   escreva("VetorCharM[",i,"]=",VetorCharM[i]);
   escreva("VetorCharM[",i,"]=",Valor Decimal);
   escreva("VetorCharM[",i,"]=",Valor Hexadecimal);
   escreva("VetorCharM[",i,"]=",Valor Octal);
fimpara
 escreva("Deseja gerar novos caracteres <S> ou <N>");
  leia(op);
  op=ma�sculo(op);
  Enquanto(op <> 'N');
  fimalgoritmo
 */
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
//Vari�veis
char VetorCharm[13];// tipo caracter;
char VetorCharM[13];// tipo caracter;
char op;

//In�cio
main(){

//Fa�a 
do{

system("cls");//Limpa tela
printf("\n Gerando 13 caracteres Min�sculos a-z");
for(int i=0;i<13;i++){
   VetorCharm[i] = rand() % 25+97;
   printf("\n VetorCharm[%i]= %c caracter",i,VetorCharm[i]);
   printf("\n VetorCharm[%i]= %i Decimal",i,VetorCharm[i]);
   printf("\n VetorCharm[%i]= %x Hexadecimal",i,VetorCharm[i]);
   printf("\n VetorCharm[%i]= %o Octal",i,VetorCharm[i]);
}//fimpara

printf("\n \n");
printf("\n Convertendo 13 caracteres Ma�sculo A-Z");
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
    
