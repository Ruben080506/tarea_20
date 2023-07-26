/*Diseñe la función que haga la suma de los factoriales del 1 al 15
suma=1!+2!+3!+...15!*/

#include<iostream>

using namespace std;

double factorial(int num)
{
  double fac=1;
  if(num==0)
   return 1;

  for(int k=1; k<=num; k++)
   fac=fac*k;

  return fac;
}


int main()
{
  double suma=0;
  for(int k=1; k<=15; k++)
   suma=suma+factorial(k);
  
  cout<<endl<<"La sumatoria de los factoriales del 1 al 15 es "<<suma;
  return 0;
}