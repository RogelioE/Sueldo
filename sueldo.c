#include <stdio.h>
#include <stdlib.h>
int main()
{
int dias=30; 
int sdiario=200; 
float presta=0.0025; 
float gmedicos=0.00375; 
float iyv=0.00625; 
float pgi=presta+gmedicos+iyv; 
float smes=sdiario*dias; 
float r1=smes*pgi; 
float sbr=(sdiario*61)*0.1125; 
float r2=((r1*2)+sbr)/2; 
float sueldo=smes-r2; 
printf("%f",sueldo);
return sueldo;
}