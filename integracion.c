
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
float sumRectangulitos();
float funcion(float x);


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



  float funcion(float x){

    float temp1 = 0;
    temp1 = 1/(sqrt(1 + cos(x)*sin(x)));
    return temp1;

  }

  float sumRectangulitos(){
  for(i = 0; i < num_pasos; i ++){
    
    float rectangulito = 0;
    rectangulito = h*(funcion(a + i*h));
    integral += rectangulito;
  }

  if( (division - num_pasos) != 0){
    float temp3 = (b - a) - (num_pasos*h);
    integral += temp3*(funcion(b));
  }
  return integral;
  }
  
  respuesta = sumRectangulitos();
  
  printf("%f", respuesta);

  return 0;

} 
