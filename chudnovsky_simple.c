#include <stdio.h>
#include <math.h>

//Funcion que devuelve el factorial de un numero
double fact(double n) {
  if(n == 0) return 1;
  else return n * fact(n-1);
}

int main(void) {
  double k, pi;

  //Algoritmo de Chudnovsky
  for(k=0.0; k<=1.0; k++) {
    pi += fact((6.0 * k)) * (13591409.0 + (545140134.0 * k)) / ((fact(3.0 * k) * pow(fact(k),3.0)) * pow(-640320.0,(3.0 * k)));
  }

  pi = 426880 * sqrt(10005) / pi;

  printf("%.16f\n", pi);

  return 0;
}
