//Diseñe la función que transforme números entero a binario

#include <iostream>

using namespace std;

string decimalBinario(int num)
{
  int residuo=0;
  string aux="";
  while(num>0)
  {
    residuo = num % 2;
    aux=to_string(residuo)+aux;
    num = num /2;
  }

  return aux;
}

int main()
{
  cout<<endl<<"Conversion de decimal a binarios"<<endl<<"=================================";
  cout<<endl<<"25 en binario es "<<decimalBinario(25);
  cout<<endl<<"255 en binario es "<<decimalBinario(255);

  return 0;
}