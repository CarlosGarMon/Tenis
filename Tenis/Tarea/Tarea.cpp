
#include <stdio.h>


int main()
{
    int jugador1 = 0;
    int jugador2 = 0;
    int i = 0, j = 0;
    char estatus[10] = "love";


    printf_s("-- Juego de Tenis --");
    printf_s("\nIncio del juego");
    printf_s("\n\nMarcador: \nJugador 1: %i | Jugador 2: %i", jugador1, jugador2);
    printf_s("\nEstatus del juego: Love");

    while (i == 0) {
        printf_s("\n\nQue jugador anoto? \nJugador 1: Pulse 1 | Jugador 2 : Pulse 2\n Eleccion:");
        scanf_s("%i", &j);

        if (jugador1 == 40 || jugador2 == 40)
        {
            if (jugador1 == 40 && jugador2 == 40) {
                printf_s("\nEstatus del juego: Deuce\n");
            }
            if (j == 1) {
                printf("Jugador 1 con VENTAJA");
            }
            else {
                printf("Jugador 2 con VENTAJA");
            }

        }

            if (j == 1) {
                if (jugador1 == 30) {
                    jugador1 = 40;
                }
                else {
                    if (jugador1 == 40) {
                        i = 1;
                    }
                    jugador1 = jugador1 + 15;
                }
               
            }
            else {
                if (jugador2 == 30) {
                    jugador2 = 40;
                }
                else {
                    if (jugador2 == 40) {
                        i = 1;

                    }
                    jugador2 = jugador2 + 15;
                }
            }
           

    
        

        
        printf_s("\n\nMarcador: \nJugador 1: %i | Jugador 2: %i", jugador1, jugador2);
    }
   


}

