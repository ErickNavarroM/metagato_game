//
// Created by Usuario on 22/05/2021.
//

#ifndef UNTITLED7_CONSTANTES_Y_ESTRUCTURAS_H
#define UNTITLED7_CONSTANTES_Y_ESTRUCTURAS_H

#include "Utileria.h"
#include <string>

const Color COLORFONDO = NEGRO;
const Color COLORLETRA = BLANCO;

// const Color COLORFONDO = BLANCO;
// const Color COLORLETRA = NEGRO;

// enum{
//     COLORFONDO = NEGRO,
//     COLORLETRA = BLANCO
// };

enum{
    ALTO_PANTALLA = 42,
    ANCHO_PANTALLA = 92
};

enum{
    ENTER = 13,
    FLECHA_ARRIBA = 72,
    FLECHA_IZQ = 75,
    FLECHA_DER = 77,
    FLECHA_ABAJO = 80
};

enum{
    POSY_ORIGEN = 16,
    POSX_ORIGEN = (ANCHO_PANTALLA-19)/2
};

enum{
    MINREN = POSY_ORIGEN + 1,
    MINCOL = POSX_ORIGEN + 1,
    MAXREN = MINREN + 16,
    MAXCOL = MINCOL + 16
};

enum{
    VACIO,
    JUGADOR1,
    JUGADOR2,
    EMPATE
};

//****************************************************************************************
/** \brief Informaci�n de l�mites y casillas de un cuadrante
 */
struct Cuadrante{
    int casilla[9] = {VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO};
    int lim_sup, lim_izq, lim_inf, lim_der;
};

//****************************************************************************************
/** \brief Informaci�n de ganadores de cuadrantes, cuadrantes en s� e indices.
 */
struct Tablero{
    Cuadrante cuadrante[9];
    int indice_actual, indice_proximo;
    int ganador_cuadrante[10] = {VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,JUGADOR1};
    int ganador = VACIO;
};

//****************************************************************************************
/** \brief Colores actuales de los jugadores segun el tema seleccionado
 */
struct Colores
{
    int par_de_colores = 1;
    Color COLOR1 = ROJOCLARO;
    Color COLOR2 = AZULCLARO;

};

//****************************************************************************************
/** \brief Nombre de los jugadores seg�n aquellos capturados
 */
struct Nombres
{
    std::string jugador1 = "Jugador 1";
    std::string jugador2 = "Jugador 2";
};

//****************************************************************************************

#endif //UNTITLED7_CONSTANTES_Y_ESTRUCTURAS_H
