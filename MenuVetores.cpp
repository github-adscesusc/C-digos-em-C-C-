/*Exerc1 da lista 4 - 1 - Construa um programa em C/C++
que tenha as seguintes op��es de Menu:
1.1 - Leia um vetor de 10 posi��es com valores 
aleat�rios 0-100 e na sequ�ncia selecione
aleatoriamente tr�s posi��es/�ndices deste 
vetor e apresente os seus valores e 
a multiplica��o destes.

1.2 - Leia dois vetores de 5 posi��es 
com valores inteiros cada e gere um 
terceiro com os resultados da soma dos 
valores sendo a l�gica: soma o 1� elemento 
do 1� vetor com o 5� elemento do 2� vetor,
2� elemento do 1� vetor com o 4� elemento 
do 2� vetor, e assim sucessivamente.

1.3 - Construa um vetor de 13 posi��es com 
valores caracteres aleat�rios e na 
sequ�ncia pedir para o usu�rio digitar 
um caractere e localizar onde este est� 
no vetor e quantas vezes aparece.

//Vari�veis
1 - VetorA[10] tipo inteiro;
    Ind1,Ind2,Ind3 tipo inteiro;
	MultipValores tipo inteiro; 
	
2 - Vetor1[5],Vetor2[5],Vetor3Soma[5] tipo inteiro;
     
3 - VetorChar[13] tipo caracter;
    caracter tipo caracter;
    QtasVezes inteiro;
	
Vari�veis gerais
op tipo caracter;

In�cio
Menu:  //r�tulo Menu
 limpa tela
 escreva("Menu de Op��es de Manupula��o de Vetores");
 escreva("1 - Vetor 10 posi��es aleat�ria 0-100");
 escreva("2 - Vetores 5 posi��es - Soma intercalada");
 escreva("3 - Vetores 13 posi��es carcateres");
 escreva("4 - Sair do sistema");
 leia(op);
 
 se(op == '1') ent�o
	 escreva("Gere aletaoriamente 10 valores inteiros aleat�rios");
	 para(i=0;i<10;i++) fa�a
	    VetorA[i] = randomizar(0-100);
	    escreva("VetorA[",i,"]=",VetorA[i]);
	 fimpara
	 
	 escreva("Digite o 1� indice a buscar o conte�do");
	 leia(Ind1);
	 escreva("Digite o 2� indice a buscar o conte�do");
	 leia(Ind2);
	 escreva("Digite o 3� indice a buscar o conte�do");
	 leia(Ind3);
	    
     MultipValores = VetorA[Ind1] * VetorA[Ind2] * VetorA[Ind3];
     
     escreva("VetorA[",Ind1,] = ",VetorA[Ind1]);
     escreva("VetorA[",Ind2,] = ",VetorA[Ind2]);
     escreva("VetorA[",Ind3,] = ",VetorA[Ind3]);
     
     escreva("Valor da Mutiplica��o dos Tr�s:",MultipValores);
     escreva("Tecle entre para voltar ao Menu Principal");
     tecle algo; V� para Menu;
fimse //op��o 1

se(op == '2') ent�o 
  escreva("Valores do Vetor1[5]");
  para(i=0;i<5;i++) fa�a
     escreva("Digite o valor do Vetor1[",i,"]:");
     leia(Vator1[i]);
  fimpara
  
  escreva("Valores do Vetor2[5]");
  para(i=0;i<5;i++) fa�a//{abre chave
     escreva("Digite o valor do Vetor2[",i,"]:");
     leia(Vator2[i]);
  fimpara//}fecha chave
     
//cria��o do 3� vetor
tamanho=5;
para(i=0;i<5;i++) fa�a
   Vetor3Soma[i] = Vetor1[i] + Vetor2[tamanho-i];
fimpara   

//mostrar os vetores

escreva("Vetor1");
Para(i=0;i<5;i++) fa�a
  escreva("Vetor1[",i,"]:",Vetor1[i]);
fimpara

escreva("Vetor2");
Para(i=0;i<5;i++) fa�a
  escreva("Vetor2[",i,"]:",Vetor2[i]);
fimpara  

escreva("Vetor3Soma");
Para(i=0;i<5;i++) fa�a
  escreva("Vetor3Soma[",i,"]:",Vetor3Soma[i]);
fimpara

escreva("Tecle entre para voltar ao Menu Principal");
tecle algo; V� para Menu;
fimse //op��o 2

se(op == '3') ent�o 
escreva("Preechimento aleat�rios de 13 caracteres");
para(i=0;i<13;i++) fa�a
  VetorChar[i] = Randomizar(0-255);
  escreva("VetorChar[",i,"]:",VetorChar[i]); 
fimpara

escreva("Digite um caracacter qualquer:");
leia(caracter);
QtasVezes = 0;
para(i=0;i<13;i++) fa�a
   se(caracter == VetorChar[i]) ent�o
         QtasVezes=QtasVezes+1;
         escreva("VetorChar[",i,"]:",caracter);
   fimse
fimpara  
escreva("Total de Vezes:",QtasVezes); 
escreva("Tecle entre para voltar ao Menu Principal");
tecle algo; V� para Menu;
fimse //op��o 3

se(op == '4') ent�o
  escreva("Saindo do Sistema.......");
  escreva("tecle enter......");
  tecle algo;
  Sair do sistema;
fimse //op��o 4

fimalgoritmo

        



