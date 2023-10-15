#include <stdio.h>
int suma(int a, int b) {

  int s = a + b;
  return s;
}
int resta(int a, int b) {

  int s = a - b;
  return s;
}
int multi(int a, int b) {

  int s = a * b;
  return s;
}
float div(float x, int y) {

  int s = x / y;
  return s;
}
int fac(int a){
  int aux = 1;
  int fac;
  do{
    fac=a*aux;
    aux++;
  }while(aux<= a);
  return fac;
}

int main(void) {
  int a, b, c, menu,RespF;
  float x, y, totalD;
  
  do{
    printf("\nBienvenido\n");
    printf("Que opercaion deseas Relizar?\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Divicion\n");
    printf("5. Factorial\n");
    printf("6. Salir\n");
    scanf("%d", &menu);
    switch (menu) {
    case 1: // Suma
      printf("Ingrese los datos a sumar\n");
      printf("Sumando 1\n");
      scanf("%d", &a);
      printf("Sumando 2\n");
      scanf("%d", &b);
      c = suma(a, b);
      printf("La suma es: %d", c);
    break;
    case 2: // resta
      printf("Ingrese los datos a restar\n");
      printf("Restando 1\n");
      scanf("%d", &a);
      printf("Restando 2\n");
      scanf("%d", &b);
      c = resta(a, b);
      printf("La resta es: %d", c);
    break;
    case 3: // multiplicacion
      printf("Ingrese los datos a multiplicar\n");
      printf("Multiplicando 1\n");
      scanf("%d", &a);
      printf("Multiplicando 2\n");
      scanf("%d", &b);
      c = multi(a, b);
      printf("La multiplicacion es: %d", c);
    break;
    case 4: // Division
      printf("Ingrese los datos a dividir\n");
      printf("Dividendo\n");
      scanf("%f", &x);
      printf("Divisor\n");
      scanf("%f", &y);
      totalD = div(x, y);
      if(y==0){
        printf("No existe la division por 0\n");
        break;
      }
      printf("La Division es: %f", totalD);
      break;
    case 5://Factorial
      printf("Ingrese el numero para calcuar el factorial\n");
      scanf("%d", &a);
      if(a<0){
        printf("No se puede calcular el factorial de un numero negativo\n");
        break;
      }
      RespF = fac(a);
      printf("Su factorial es: %d",RespF);
     break;
      case 6://Salir 
      printf("Gracias por usar el programa\n");
      return 0;
    default:
      printf("Opcion invalida");
      break;
    }
  
  } while (menu != 6);
  return 0;
}