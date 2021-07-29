// HelloWorld.cpp : Defines the entry point for the console application.
//

/*
#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
    std::cout << "Hello World C++!\n\r";
    return 0;
}

*/

#include <stdio.h>
#include <conio.h>
#include <dos.h>

struct punto
{
    int ix, iy;
};

void main(void)
{
    int gato[9], ip, ia, jugadores[3][3], icontador;
    char c;

    for (ia = 0; ia < 3; ia++)
    {
        for (ip = 0; ip < 3; ip++)
        {
            jugadores[ia][ip] = 0;
        }
    }

    for (ia = 0; ia < 9; ia++)
    {
        gato[ia] = 0;
    }

    ip = 0;
    ia = 1;
    icontador = 0;
    /*Inicializo variables y arreglos*/




    gotoxy(35, 10);
    printf("   *   *   ");
    gotoxy(35, 11);
    printf("   *   *   ");
    gotoxy(35, 12);
    printf("   *   *   ");
    gotoxy(35, 13);
    printf("***********");
    gotoxy(35, 14);
    printf("   *   *   ");
    gotoxy(35, 15);
    printf("   *   *   ");
    gotoxy(35, 16);
    printf("   *   *   ");
    gotoxy(35, 17);
    printf("***********");
    gotoxy(35, 18);
    printf("   *   *   ");
    gotoxy(35, 19);
    printf("   *   *   ");
    gotoxy(35, 20);
    printf("   *   *   ");
    gotoxy(23, 3);
    printf("Juego del gato para dos jugadores");
    gotoxy(26, 6);
    printf("Jugador1(X) Vs Jugador2(O)");
    /*Hasta aqui solo he pintado el gatito y algunas instrucciones*/


    getch();

    punto tab[9];

    tab[0].ix = 36;
    tab[0].iy = 11;

    tab[1].ix = 40;
    tab[1].iy = 11;

    tab[2].ix = 44;
    tab[2].iy = 11;

    tab[3].ix = 36;
    tab[3].iy = 15;

    tab[4].ix = 40;
    tab[4].iy = 15;

    tab[5].ix = 44;
    tab[5].iy = 15;

    tab[6].ix = 36;
    tab[6].iy = 19;

    tab[7].ix = 40;
    tab[7].iy = 19;

    tab[8].ix = 44;
    tab[8].iy = 19;

    /*Aqui solo especifico las coordenadas en para cada valor de la cadena tab*/

    for (;;)
    {
        gotoxy(tab[ip].ix, tab[ip].iy);
        c = getch();

        switch (c)
        {
        case 77:
            ip++;
            if (ip == 9)
                ip = 0;
            break;

        case 75:
            ip--;
            if (ip == -1)
                ip = 8;
            break;

        case 13:
            if (gato[ip] == 0)
            {

                if (ia == 0)
                {
                    gotoxy(tab[ip].ix, tab[ip].iy);
                    printf("O");
                    ia = 1;

                    if (tab[ip].iy == 11)
                    {
                        if (tab[ip].ix == 36)
                        {
                            jugadores[0][0] = 10;
                        }

                        if (tab[ip].ix == 40)
                        {
                            jugadores[0][1] = 10;
                        }

                        if (tab[ip].ix == 44)
                        {
                            jugadores[0][2] = 10;
                        }
                    }

                    if (tab[ip].iy == 15)
                    {
                        if (tab[ip].ix == 36)
                        {
                            jugadores[1][0] = 10;
                        }

                        if (tab[ip].ix == 40)
                        {
                            jugadores[1][1] = 10;
                        }

                        if (tab[ip].ix == 44)
                        {
                            jugadores[1][2] = 10;
                        }
                    }

                    if (tab[ip].iy == 19)
                    {
                        if (tab[ip].ix == 36)
                        {
                            jugadores[2][0] = 10;
                        }

                        if (tab[ip].ix == 40)
                        {
                            jugadores[2][1] = 10;
                        }

                        if (tab[ip].ix == 44)
                        {
                            jugadores[2][2] = 10;
                        }
                    }
                    /*Aqui lo que hago es en una matriz de 3x3 ir poniendole valores
                      a cada casilla de la matriz dependiendo de que jugador juegue
                      y en que casilla lo haga, con el objetivo de que cuando acabe el programa
                      poder hacer sumas o compraciones para saber quien es el ganador*/

                }

                else
                {
                    gotoxy(tab[ip].ix, tab[ip].iy);
                    printf("X");
                    ia = 0;

                    if (tab[ip].iy == 11)
                    {
                        if (tab[ip].ix == 36)
                        {
                            jugadores[0][0] = 1;
                        }

                        if (tab[ip].ix == 40)
                        {
                            jugadores[0][1] = 1;
                        }

                        if (tab[ip].ix == 44)
                        {
                            jugadores[0][2] = 1;
                        }
                    }

                    if (tab[ip].iy == 15)
                    {
                        if (tab[ip].ix == 36)
                        {
                            jugadores[1][0] = 1;
                        }

                        if (tab[ip].ix == 40)
                        {
                            jugadores[1][1] = 1;
                        }

                        if (tab[ip].ix == 44)
                        {
                            jugadores[1][2] = 1;
                        }
                    }

                    if (tab[ip].iy == 19)
                    {
                        if (tab[ip].ix == 36)
                        {
                            jugadores[2][0] = 1;
                        }

                        if (tab[ip].ix == 40)
                        {
                            jugadores[2][1] = 1;
                        }

                        if (tab[ip].ix == 44)
                        {
                            jugadores[2][2] = 1;
                        }
                    }


                }

                gato[ip] = 1;
                icontador++;
            }
            break;


        default:
            break;
        }

        /*Estas son las comprobaciones de quien y quien gana */

        if ((jugadores[0][0] + jugadores[0][1] + jugadores[0][2]) == 3)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador1(X) ha ganado");
            break;
        }

        if ((jugadores[1][0] + jugadores[1][1] + jugadores[1][2]) == 3)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador1(X) ha ganado");
            break;
        }

        if ((jugadores[2][0] + jugadores[2][1] + jugadores[2][2]) == 3)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador1(X) ha ganado");
            break;
        }

        if ((jugadores[0][0] + jugadores[1][0] + jugadores[2][0]) == 3)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador1(X) ha ganado");
            break;
        }

        if ((jugadores[0][1] + jugadores[1][1] + jugadores[2][1]) == 3)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador1(X) ha ganado");
            break;
        }

        if ((jugadores[0][2] + jugadores[1][2] + jugadores[2][2]) == 3)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador1(X) ha ganado");
            break;
        }

        if ((jugadores[0][0] + jugadores[1][1] + jugadores[2][2]) == 3)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador1(X) ha ganado");
            break;
        }

        if ((jugadores[2][0] + jugadores[1][1] + jugadores[0][2]) == 3)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador1(X) ha ganado");
            break;
        }
        /** De aqui en adelante es el dos  **/


        if ((jugadores[0][0] + jugadores[0][1] + jugadores[0][2]) == 30)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador2(O) ha ganado");
            break;
        }

        if ((jugadores[1][0] + jugadores[1][1] + jugadores[1][2]) == 30)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador2(O) ha ganado");
            break;
        }

        if ((jugadores[2][0] + jugadores[2][1] + jugadores[2][2]) == 30)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador2(O) ha ganado");
            break;
        }

        if ((jugadores[0][0] + jugadores[1][0] + jugadores[2][0]) == 30)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador2(O) ha ganado");
            break;
        }

        if ((jugadores[0][1] + jugadores[1][1] + jugadores[2][1]) == 30)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador2(O) ha ganado");
            break;
        }

        if ((jugadores[0][2] + jugadores[1][2] + jugadores[2][2]) == 30)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador2(O) ha ganado");
            break;
        }

        if ((jugadores[0][0] + jugadores[1][1] + jugadores[2][2]) == 30)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador2(O) ha ganado");
            break;
        }

        if ((jugadores[2][0] + jugadores[1][1] + jugadores[0][2]) == 30)
        {
            gotoxy(21, 6);
            printf("Felicidades el Jugador2(O) ha ganado");
            break;
        }

        /*En caso de no haber ganador cuando se llenen las casillas del gato el juego terminara*/

        if (icontador == 9)
        {
            gotoxy(22, 6);
            printf("El juego ha terminado, no hay ganador");
            break;
        }

    }

    getch();





}



