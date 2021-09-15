#include <iostream>
#include <stdlib.h>
using namespace std ;
int main ()
{
char palavra [30], letra [1],secreta [30] ;
// palavraa armazena a palavra secreta o letra armazena 1 letra de cada vez		secreta é a palavra sendo desvendada mostrando onde as letra estao// 
int tam,i, chances,acertos ;
// tam armazena  o tamanho i e o indecie chances é as vidas q faltam ?/
// 	acertos quando ele acertr a palavra //
bool acerto ;
// o bool acerto serve para verificar se a letra e certa ou errada//
chances = 6 ;
tam = 0 ;
acerto = false ; // o jogo começa sem acerto //
acertos = 0 ;

cout << "digite a palvra secreta :" ;
cin >> palavra ;

system ("cls");  // para limpar a tela //
 
 while (palavra [i] != '\0'){
 	i ++ ; // incremanta o i para ir para a proxima posiçao
 	tam ++ ; // incrementa o tam pq ainda nao foi o barra 0 entao ele aumenta
 	 // para coletar o tamanho da palavra -> enquantoo a palavrva na pasiçao i for diferente de \0  o barra 0 e o caracter do enter para indica q ali terminou a string o q foi digitado acaba ali//
 }
 // agora a secreta
 
 for (i=0 ; i<30; i++) {// para prencher o vetor secreto com traço -> para i iniciando em 0 enquanto i for menor q 30 eu incremeto  o i
 secreta [i]= '-' ; }// secreta na posiçao i começando do 0 ate 30 eu coloco o caracter - //
  // rotina do jogo
  
  while ((chances > 0) && (acertos < tam)) { //o jogo tem uma rotina q e repetida varias vezes a pessoa digita a letra a letra tem q ser verificada pra ver se ela existe na palavra tem q verificar se ouve erro ou acerto e indica vitoria ou derrota
   // lupe principal
   // enquanto essas alternativas for satisfeita ele vai executar
   cout << "Chances restantes: " << chances << "\n\n";  // para o jogador saber a todo tempo quantas falatam
   cout << "Palavra secreta: ";   // rotina para ir revelando a palavra
   for (i=0; i<tam; i++) {
   	cout << secreta[i] ;
   }
}
   cout << "\n\n digite uma letra" ; // o usuario digita a letra
   cin >> letra [0] ;
   
   // agora verificar se a letra existe em uma ou mais posiçao comparar letra por letra
   for (i=0; i<tam; i++){
   	if (palavra [i] == letra [0]){
	   acerto= true;
	   secreta [i] =palavra[i] ; // verificar posiçao por posiçao -> se palavra na pisiçao i for igual a letra posiçao 0 a letra digitada entao acerto se nao erro
   	   acertos++;                      // se aposiçao tem na palavra ele copia para a palavra secreta e conta o acerto
   	}
   }
   	if (! acerto ) // saindo da rotina anterior se a letra nao estiver na palavra secreta entao erro diminui as chances 
{
	chances--;
}

acerto = false ; // acabou volta para false para começar de novo

system ("cls") ;

// quando sai ele acertou ou perdeu 

if (acerto == tam) { // enta se verifica pq saiu
	cout <<"voce venceu:";
}else{
	cout << "voce perdeu : (*;*)" ;
}
}


  
