/* Unidad 2. Cadenas
Autor: David Alejandro Moreno Chaparro
Fecha: 07/10/2022
Descripcion: Muestra el tamaño de una palabra
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string cadena = "Universidad";
    char texto[30] = "PoliTecnicA";
    int i = 0;
    int m;
    int longitud = cadena.length();
    for (int i = 0; i < longitud; i++)
    {
        cout << cadena[i] << " ";
    }

    i = 0;
    while (texto[i] != '\0')
    {
        cout << texto[i] << " ";
        i++;
    }

    for (int i = 0; i < 30; i++)
    {
        cout << texto[i] << " ";
    }

    cout << endl;

    if (isalpha(texto[0]))
    {
        cout << "..hecho" << endl;
    }

    for (int i = 0; i <= 30; i++)
    {
        if (texto[i]==issupper(texto[i]))
        {
            m=m+1;

        }
    }

    return 0;
}