/*Unidad 2.  Pizzeria
Autor: David Alejandro Moreno Chaparro
Fecha: 17/10/2022
Descripcion:Escribir un programa que pregunte al usuario si quiere una pizza vegetariana
o no, y enfunción de su respuesta le muestre un menú con los ingredientes disponibles para
que elija.
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
   string t = "";
   string i = "";
   cout << "¿Quieres una pizza vegetariana?" << endl;
   cin >> t;

   if (t == "si")
   {
      cout << "Los ingredientes son: pimiento y tofu \n ¿De que quieres tu pizza?";
      cin >> i;
      if (i == "pimiento")
      {
         cout << "Su pizza es vegetariana y contiene mozarella, tomate y pimiento.";
      }
      else if (i == "tofu")
      {
         cout << "Su pizza es vegetariana y contiene mozarella, tomate y tofu." << endl;
      }
   }
   else if (t == "no")
   {
      cout << "Los ingredientes son: peperoni, jamon y salmon \n ¿De que quieres tu pizza?";
      cin >> i;
      if (i == "peperoni")
      {
         cout << "Su pizza es vegetariana y contiene mozarella, tomate y peperoni." << endl;
      }
      else if (i == "jamon")
      {
         cout << "Su pizza es vegetariana y contiene mozarella, tomate y jamon.";
      }
      else if (i == "salmon")
      {
         cout << "Su pizza es vegetariana y contiene mozarella, tomate y salmon.";
      }
   }

   return 0;
}
