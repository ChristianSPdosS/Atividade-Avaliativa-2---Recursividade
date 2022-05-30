#include <stdio.h>


int f(int n) {
// critério de parada
if(n == 1) return 1;
// passo recursivo (n > 1)
return n * f(n-1);
}

int main(){


printf("%d" ,f(5));


  return 0;
}