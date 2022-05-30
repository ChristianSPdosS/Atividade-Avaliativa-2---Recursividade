#include <stdio.h>


int f2(int n2){
  //critério de parada
  if(n2 == 1) return 2;
  //passo recursivo (n > 1)
  return 3 + f2(n2 - 1);
}

int main(){


printf("%d" ,f2(3));


  return 0;
}