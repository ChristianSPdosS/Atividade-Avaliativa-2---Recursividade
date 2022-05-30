#include <stdio.h>


int f1(int n1) {
// critério de parada
if(n1 == 1) return 1;
// passo recursivo (n > 1)
return n1 + f1(n1-1);
  }

int main(){


printf("%d" ,f1(5));


  return 0;
}













  