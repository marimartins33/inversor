  
/* Data de submissao:17/03/2020
 * Nome: Mariane Martins
 * RA:221919
 */

#include <stdio.h>
const int tam_buffer=100; //determina o tamanho do buffer


char pilha[100]; //cria pilha com 100 elementos 
int n_pilha=0; //cria índice para pilha

void push(char c) {
/* Insere caractere c na pilha */
  if (n_pilha < 10) {
    pilha[n_pilha]=c;
    n_pilha++;
  }
}

char pop() {
/* Remove caractere do topo da pilha */
  char c;
  if (n_pilha>0) {
    n_pilha--;
    c = pilha[n_pilha];
  }
  return c;
}

int main() {
  char buffer[tam_buffer]; //cria um buffer de 100 elementos
  char buffer_aux[tam_buffer]; //cria um buffer auxiliar de 100 elementos
  char c;
  fgets(buffer, tam_buffer, stdin);
  int i = 0; //índice do buffer
  int j = 0; //índice do buffer auxiliar

  while (buffer[i] != '\0'){ //verificar final do buffer
   	 while ((buffer[i] != '\n' ) && (buffer[i] != ' ')){ //ler letra por letra, se caso for um espaço, pular de palavra
		 push (buffer[i]); //armazena letra na pilha 
     	i = i+1; //incrementa indice para adicionar proxima letra na pilha
    } 
    
    while (j<i){
    	buffer_aux[j] = pop(); //tira letra da pilha e coloca num buffer auxiliar
		printf("%c", buffer_aux[j]);//printa letra por letra do buffer auxiliar
   		j = j+1; //incrementa indice para pintar proxima letra do buffer auxiliar
	}
    if (buffer[i] != '\n') {
	
    printf("%s", " ");}
	j = j+1; 
    i = i+1;   //incrementa indice para pular o caractere " " do buffer a

    }
 
  printf("\n");
}
