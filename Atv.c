//Nome :Christian Soares Pereira dos Santos;

//Matrícula: 2122130002;

/*
1. (2 pontos) Qual a diferença entre algoritmo iterativo e recursivo?

Resposta: O iterativo é mais  rápido que o recursivo, pois no algoritmo recursivo todas as chamadas de função devem ser armazenadas em uma pilha para permitir o retorno às funções do chamador, no entento a recursão é mais intuitiva e mais fácil de ser utilizada em alguns casos.
*/

//2. (8 pontos) Para cada um dos itens abaixo: (i) encontre a definição recursiva da sequência; e (ii) implemente o algoritmo recursivo.

//a) 

/*
(i) Definição recursiva: seja n > 0, f(n) = {1  n = 1(Critério de parada)  
n x f(n - 1)  n > 1}(Passo recursivo)
*/

//(ii) Algoritmo recursivo:

int f(int n) {
// critério de parada
if(n == 1) return 1;
// passo recursivo (n > 1)
return n * f(n-1);
}

//b)

/*
  (i) Definição recursiva: seja n1 > 0, f1(n1) = {1  n1 = 1(Critério de parada)  
n1 + f1(n1 - 1)  n1 > 1}(Passo recursivo)
*/


//(ii) Algoritmo recursivo:
int f1(int n1) {
// critério de parada
if(n1 == 1) return 1;
// passo recursivo (n > 1)
return n1 + f1(n1-1);
}

//c)

/*
  (i) Definição recursiva: seja n2 > 0, f2(n2) = {2  n2 = 1(Critério de parada)  
3 + f2(n2 - 1)  n1 > 1}(Passo recursivo)
*/

//(ii) Algoritmo recursivo:
int f2(int n2){
  //critério de parada
  if(n2 == 1) return 2;
  //passo recursivo (n > 1)
  return 3 + f2(n2 - 1);
}

//d)