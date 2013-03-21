
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
float funcion(float x);
float sumRectangulitos(int num_pasos, float h, float a);

int main(int argc, char ** argv){

  float a;
  float b;
  float h;

  a = atof(argv[1]);
  b = atof(argv[2]);
  h = atof(argv[3]);

  float integral = 0;
  int num_pasos = ((b - a)/h);
  int i;
  float respuesta = 0;
  float division = ((b - a)/h);

  respuesta = sumRectangulitos(num_pasos, h, a);
  
  printf("%f", respuesta);

  return 0;

} 



float sumRectangulitos(int num_pasos, float h, float a){
  int i;
  float rectangulito;
  float integral;
  integral = 0;
  for(i = 0; i < num_pasos; i ++){   
    rectangulito = h*(funcion(a + i*h));
    integral += rectangulito;
  }
  return integral;

}

float funcion(float x){

    float temp1 = 0;
    temp1 = 1/(sqrt(1 + cos(x)*sin(x)));
    return temp1;
}
