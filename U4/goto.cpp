#include <windows.h>
#include <iostream>
using namespace std;

void clrscr()
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {0, 0};
    DWORD count;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hStdOut, &csbi);
    FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y,
                               coord, &count);
    SetConsoleCursorPosition(hStdOut, coord);
}

void gotoxy(int x, int y)
{
    HANDLE hconsola;
    COORD Wpos;
    Wpos.X = x;
    Wpos.Y = y;
    hconsola = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hconsola, Wpos);
}

void ValorCordenadas(int tableroC[3][3])
{
    int contador = 1;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            tableroC[i][j] = contador;
            contador = contador + 1;
        }
    }
}

bool comprobarCasilla(int jugada, int tableroC[3][3], char Tablero[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (jugada == tableroC[i][j])
            {
                if ((Tablero[i][j] == 'x') || (Tablero[i][j] == 'o'))
                {
                    return true;
                }
            }
        }
    }
    return false;
}

void ImprimirTablero(char Tablero[3][3], int poscision, int tableroC[3][3], char jugador)
{
    clrscr();
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (tableroC[i][j] == poscision)
            {
                Tablero[i][j] = jugador;
                gotoxy(12 + j * 4, 7 + i * 3);
                cout << Tablero[i][j];
            }
            else
            {
                gotoxy(12 + j * 4, 7 + i * 3);
                cout << Tablero[i][j];
            }
        }
    }
    for (int i = 0; i <= 1; i++)
    {
        gotoxy(11, 9 + i * 3);
        cout << "---|---|---";
    }
    for (int i = 0; i <= 7; i++)
    {
        gotoxy(14, 7 + i);
        cout << "|";
        gotoxy(18, 7 + i);
        cout << "|";
    }
    cout << endl;
    cout << endl;
}

int Esganador(char Tablero[3][3], int ganador)
{
    if ((Tablero[0][0] == 'x' && Tablero[0][1] == 'x' && Tablero[0][2] == 'x') ||
        ((Tablero[1][0] == 'x' && Tablero[1][1] == 'x' && Tablero[1][2] == 'x')) ||
        ((Tablero[2][0] == 'x' && Tablero[2][1] == 'x' && Tablero[2][2] == 'x')) ||
        ((Tablero[0][0] == 'x' && Tablero[1][0] == 'x' && Tablero[2][0] == 'x')) ||
        ((Tablero[0][1] == 'x' && Tablero[1][1] == 'x' && Tablero[2][1] == 'x')) ||
        ((Tablero[0][2] == 'x' && Tablero[1][2] == 'x' && Tablero[2][2] == 'x')) ||
        ((Tablero[0][0] == 'x' && Tablero[1][1] == 'x' && Tablero[2][2] == 'x')) ||
        ((Tablero[0][2] == 'x' && Tablero[1][1] == 'x' && Tablero[2][0] == 'x')))
    {
        ganador = 1;
    }
    else if ((Tablero[0][0] == 'o' && Tablero[0][1] == 'o' && Tablero[0][2] == 'o') ||
             ((Tablero[1][0] == 'o' && Tablero[1][1] == 'o' && Tablero[1][2] == 'o')) ||
             ((Tablero[2][0] == 'o' && Tablero[2][1] == 'o' && Tablero[2][2] == 'o')) ||
             ((Tablero[0][0] == 'o' && Tablero[1][0] == 'o' && Tablero[2][0] == 'o')) ||
             ((Tablero[0][1] == 'o' && Tablero[1][1] == 'o' && Tablero[2][1] == 'o')) ||
             ((Tablero[0][2] == 'o' && Tablero[1][2] == 'o' && Tablero[2][2] == 'o')) ||
             ((Tablero[0][0] == 'o' && Tablero[1][1] == 'o' && Tablero[2][2] == 'o')) ||
             ((Tablero[0][2] == 'o' && Tablero[1][1] == 'o' && Tablero[2][0] == 'o')))
    {
        ganador = 2;
    }
    else
    {
        ganador = 0;
    }
    return ganador;
}

int main(int argc, char const *argv[])
{
    clrscr();
    char jugador;
    int jugada, cont, op;
    int ganador;
    int tableroC[3][3];
    char Tablero[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

    do
    {
        clrscr();
        gotoxy(35,1);cout << "TIC TAC TOE" << endl;
        gotoxy(25,2);cout << "David Alejandro Moreno Chaparro" << endl;
        gotoxy(30,5);cout << "Oprime 1 para jugar" << endl;
        gotoxy(30,6);cout << "Oprime 0 para salir" << endl;
        gotoxy(30,7);cin >> op;

    }while(op != 1 && op !=0);

    if (op==1)
    {
        ValorCordenadas(tableroC);
        ImprimirTablero(Tablero, 0, tableroC, 'x');

        for (int i = 0; i < 9; i++)
        {
            if (i % 2 == 0)
            {
                gotoxy(8,18);cout << "Tunrno del Jugador 1" << endl;
                gotoxy(8,19);cin >> jugada;
                while (comprobarCasilla(jugada, tableroC, Tablero) == true)
                {
                    cout << "Casilla ocupada \nIngrese otra casilla" << endl;
                    cin >> jugada;
                }
            ImprimirTablero(Tablero, jugada, tableroC, 'x');
            }
            else    
            {
                gotoxy(8,18);cout << "Turno del Jugador 2" << endl;
                gotoxy(8,19);cin >> jugada;
                while (comprobarCasilla(jugada, tableroC, Tablero) == true)
                {
                    cout << "Casilla ocupada \nIngrese otra casilla" << endl;
                    cin >> jugada;
                }
                ImprimirTablero(Tablero, jugada, tableroC, 'o');
            }
            if (Esganador(Tablero, ganador) == 1)
            {
                cout << "Ganó el jugador 1 \n"<< endl;
                i = 9;
            }
            else if (Esganador(Tablero, ganador) == 2)
            {
                cout << "Ganó el jugador 2 \n" << endl;
                i = 9;
            }
        }
    }else{
        cout << "\n EMPATE" << endl;
    }
    return 0;
}
