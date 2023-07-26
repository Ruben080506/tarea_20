//Ejercicios con sobre carga de funciones
#include<iostream>

using namespace std;

int suma(int a, int b)
{
  return a+b;
}

double suma(double a, double b)
{
  return a+b;
}

string saludos()
{
  return "Bienvenidos a la PUCE Esmeraldas";
}

string saludos(string nombre)
{
  return "Hola "+nombre+", Bienvenidos a la PUCE Esmeraldas";
}

string saludos(string nombre, int edad)
{
  if(edad>=18)
   return "Hola "+nombre+", Ya puedes votar en las elecciones de agosto 2023";
  else
   return "Hola "+nombre+", No puedes votar en las elecciones de agosto 2023";

}

int main()
{
  cout<<endl<<"La suma de 10 + 23 es "<<suma (10,23);
  cout<<endl<<"La suma de 15.67 + 4.88 es "<<suma (15.67,4.88);

  cout<<endl<<saludos();
  cout<<endl<<saludos("Vivian Bone");
  cout<<endl<<saludos("Yamile guagua");
  cout<<endl<<saludos("Ruben Carvajal");
  cout<<endl<<saludos("Dario Murillo");
  cout<<endl<<saludos("wilmer Mera");
  return 0;
}