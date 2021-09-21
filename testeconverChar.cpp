#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>

char caracter[5];

main(){
   for(int i=0;i<5;i++) {
       caracter[i]=rand() % 25+65;
       printf("\n %c   %i   %X",caracter[i],caracter[i],caracter[i]);
       printf("\n %c   %i   %X",caracter[i],caracter[i],caracter[i]);
   }
   getche();
}
    
