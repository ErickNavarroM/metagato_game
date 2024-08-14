//
// Created by Usuario on 22/05/2021.
//

#ifndef UNTITLED7_JUGABILIDAD_H
#define UNTITLED7_JUGABILIDAD_H
#include "ConstantesEstructuras.h"

//****************************************************************************************

/**
 * \brief Comprueba quien es el ganador
 *
 * \details Analiza el arreglo que representa, ya sea las 9 casillas
 *          de un cuadrante o los 9 cuadrantes del tablero para encontrar si un
 *          jugador gan� un cuadrante o el tablero en general.
 *
 * \param T[] Arreglo unidimensional que puede representar dos cosas: las 9 casillas
 *            de un cuadrante o los 9 cuadrantes del tablero.
 *
 * \return int Dependiendo del contenido del arrglo puede devolver cuatro valores:
 *         0 (si no hay ganador), 1 (si gana el jugador 1), 2 (si gana el jugador)
 *
 */
int ComprobarGanador(int T[]);

//****************************************************************************************

/**
 * \brief Selecci�n de casilla del cuadrante donde colocar simbolo.
 *
 * \details Permite escoger la casilla del cuadrante concreto en la que se desea colocar
 *          el simbolo del jugador en un turno. La selecci�n se limita �nicamente a los
 *          l�mites de dicho cuadrante.
 *
 * \param turno int Variable entera que representa el turno actual del jugador.
 *                  su valor debe ser 1 o 2.
 * \param tablero& Tablero Estructura que contiene la informaci�n de los cuadrantes como
 *                 los ganadores de cada uno, sus l�mites, etc�tera.
 *
 * \return void
 *
 */
void SeleccionRestringida(int turno, Tablero &tablero);

//****************************************************************************************

/**
 * \brief Selecci�n de casilla del tablero donde colocar simbolo.
 *
 * \details Permite escoger cualquier casilla del tablero en la que se desea colocar
 *          el simbolo del jugador en un turno. La selecci�n se limita a cualquier lugar
 *          del tablero.
 *
 * \param turno int Variable entera que representa el turno actual del jugador.
 *                  su valor debe ser 1 o 2.
 * \param tablero& Tablero Estructura que contiene la informaci�n de los cuadrantes como
 *                 los ganadores de cada uno, sus l�mites, etc�tera.
 *
 * \return void
 *
 */
void SeleccionLibre(int turno, Tablero &tablero);

//****************************************************************************************

#endif //UNTITLED7_JUGABILIDAD_H
