/*Construa um algoritmo que leia um Vetor de 10 posi��es com
valores inteiros.

Vari�vel
Vetor[10] do tipo inteiro;
op tipo caracter

Inicio

fa�a 
limpa tela

escreva("Entrada de dados do Vetor[10]");
para(ind=0;ind<10;ind=ind+1){
    escreva("Digite o valor inteiro Vetor[",ind",]:");
    leia(Vetor[ind]);}
    

escreva("saida de dados do Vetor[10]");
para(ind=0;ind<10;ind=ind+1){
    escreva("Vetor[",ind",]:",Vetor[ind]);
}
 
escreva("Digite a op��o <S> ou <N> para novos valores?");
leia(op);
op= ma�sculo(op);
Enquanto (op <> 'N');

fim algoritmo*/

//conveter para linguagem C

#include<conio.h>
#include<stdio.h>
#include<iostream>

//vari�veis

int Vetor[10];// do tipo inteiro;
char op;// tipo caracter

//Inicio
main(){
//fa�a 
do{

//limpa tela
system("cls"); //cl clear s screen 

printf("\n Entrada de dados do Vetor[10]");
for(int ind=0;ind<10;ind=ind+1){//la�o de repeti��o
    printf("\n Digite o valor inteiro Vetor[%d]:",ind);
    scanf("%d",&Vetor[ind]);}
    

printf("\n saida de dados do Vetor[10]");
for(int ind=0;ind<10;ind=ind+1){
    printf("\n Vetor[%d]: %d",ind,Vetor[ind]);
}
printf("\n\n");
printf("\n la�o de repeti��o com uso do do{   }while()");
int i=0;
do{
     printf("\n Vetor[%d]: %d",i,Vetor[i]);
     i++;
}while(i<10);



fflush(stdin);//limpa buffer teclado
printf("\n Digite a op��o <S> ou <N> para novos valores?");
scanf("%c",&op);
op = toupper(op);}while(op != 'N');
//Enquanto (op <> 'N');
}
//fim algoritmo*/
 
    


