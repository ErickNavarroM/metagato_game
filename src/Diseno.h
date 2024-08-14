//
// Created by Usuario on 22/05/2021.
//

#ifndef UNTITLED7_DISENO_H
#define UNTITLED7_DISENO_H
#include "ConstantesEstructuras.h"

// ****************************************************************************************

/**
 * \brief Funci�n que imprime los s�mbolos del jugador en el tablero
 *
 * \details Dependiendo del turno del jugador, y del color que escogi� para representarlo,
 *          la funci�n imprime el s�mbolo correspondiente al jugador en la celda indicada
 *          por el jugador.
 *
 * \param tema Colores Estructura que contiene los conjuntos de colores para los jugadores.
 * \param tablero Tablero Estructura que contiene la informaci�n de los cuadrantes como
 *                 los ganadores de cada uno, sus l�mites, etc�tera.
 *
 * \return void
 */
void ImprimirSimbolo(Colores tema, Tablero tablero);

// ****************************************************************************************

/**
 * \brief Pinta el cuadrante
 *
 * \details Rellena los lugares donde se imprim�an simbolos con espacios con el fondo de
 *          color dependiendo del resultado del juego en ese cuadrante.
 *
 * \param jugador int Valor que indica el jugador ganador del cuadrante.
 * \param tema Colores Estructura que contiene los conjuntos de colores para los jugadores.
 * \param indice_cuadrante int N�mero que representa a un cuadrante del tablero en un
 *                             arreglo unidimensional.
 *
 * \return void
 *
 */
void PintarCuadrante(int jugador, Colores tema, int indice_cuadrante);

// ****************************************************************************************

/**
 * \brief Rellena el arreglo.
 *
 * \details Rellena los lugares donde se imprim�an simbolos con el valor de los simbolos
 *          del resultado del juego en ese cuadrante.
 *
 * \param jugador int Valor que indica el jugador ganador del cuadrante.
 * \param T[] int Arreglo que contiene las casillas de un cuadrante.
 *
 * \return void
 *
 */
void RellenarCuadrante(int jugador, int T[]);

// ****************************************************************************************

/**
 * \brief Imprime el indicador de turno
 *
 * \details Abajo del tablero de juego imprime un indicador con los nombres de los
 *          jugadores, marcando con color al jugador del turno actual y en gris al otro.
 *
 * \param jugador int Valor que indica el jugador actual.
 * \param tema Colores Estructura que contiene los conjuntos de colores para los jugadores.
 * \param nombre Nombres Estructura que contiene a los nombres de los jugadores.
 *
 * \return void
 *
 */
void ImprimirTurno(int jugador, Colores tema, Nombres nombre);

// ****************************************************************************************

/**
 * \brief Imprime el resultado del juego.
 *
 * \details Imprime el cuadro que anuncia el fin de la partida en el cual se imprimir� el
 *          mensaje del color del jugador ganador y el nombre de este.
 *
 * \param jugador int Dependiendo del valor, indica al jugador ganador.
 * \param tema Colores Estructura que contiene los conjuntos de colores para los jugadores.
 * \param nombre Nombres Estructura que contiene a los nombres de los jugadores.
 *
 * \return void
 *
 */
void ImprimirCuadroMensaje(int jugador, Colores tema, Nombres nombre);

// ****************************************************************************************

/**
 * \brief Imprime el tablero del juego
 *
 * \details Esta funci�n construye la plantilla base del tablero del juego sobre la cual
 *          se imprimen los s�mbolos que representan a los jugadores.
 *
 * \param x Posici�n horizontal a donde se mover� el cursor. El cursor se
 *          mueve \b x unidades a la derecha a partir del inicio de la ventana.
 * \param y Posici�n vertical a donde se mover� el cursor. El cursor se mueve
 *          \b y unidades hacia abajo a partir del inicio de la ventana.
 *
 * \return void
 *
 */
void ImprimirTablero(int x, int y);

// ****************************************************************************************
/**
 * \brief Imprime una rejilla simple
 *
 * \details Imprime una cuadrícula sin borde indicando el ancho y alto de cada cuadro que lo conforma,
 *          la posición x e y de la esquina superior izquierda y los cuadros que conforman el ancho y
 *          alto de la rejilla.
 *
 * \param x short Posición horizontal con respecto al borde izquierdo de la pantalla de la esquina
 *                superior derecha de la rejilla.
 * \param y short Posici�n vertical con respecto al borde superior de la pantalla de la esquina
 *                superior derecha de la rejilla.
 * \param ancho_cuadro int Ancho en espacos de caracteres de los cuadros de la rejilla.
 * \param alto_cuadrol int Alto en espacos de caracteres de los cuadros de la rejilla.
 * \param cant_columnas int Cantidad de cuadros que conforman el ancho de la rejilla.
 * \param cant_filas int Cantidad de cuadros que conforman el alto de la rejilla.
 *
 * \return void
 *
 */
void ImprimirRejillaSimple(short x, short y);

/**
 * \brief Imprimir cuadricula con linea doble
 *
 * \details Imprime una cuadricula doble indicando la posici�n x e y de la esquina superios izquierda,
 *          el ancho y alto de cada cuadro y la cantidad de cuadros que conforman el ancho y alto de
 *          cuadr�cula.
 *
 * \param x short Posici�n horizontal con respecto al borde izquierdo de la pantalla de la esquina
 *                superior derecha de la cuadr�cula.
 * \param y short Posici�n vertical con respecto al borde superior de la pantalla de la esquina
 *                superior derecha de la cuadricula.
 *
 * \return void
 *
 */
void ImprimirCuadriculaDoble(int x, int y);

/**
 * \brief Imprime el titulo del juego, con un formato especial.
 *
 * \details Imprime cada linea del texto del titulo con un color especifico, en una posici�n
 *          determinada por las coordenadas indicadas en los par�metros.
 *
 * \param x La coordenada en el eje x de la consola
 * \param y La coordenada en el eje y de la consola
 *
 * \return void
 *
 */
void ImprimirTitulo(int x, int y);

// ****************************************************************************************

/**
 * \brief Imprime las opciones para la navegaci�n del juego, en la pantalla principal.
 *
 * \details Incluye las secciones de "Jugar", "Configuraci�n", "Instrucciones",
 *          "Cr�ditos" y "Salir".
 *
 * \return void
 *
 */
void ImprimirMenu();

// ****************************************************************************************

/**
 * \brief Seleccion en el cuadro del fin de la partida
 *
 * \details Permite seleccionar entre las dos opciones mediante las teclas [ARRIBA] y
 *          [ABAJO] utilizando [ENTER] para confirmar la selecci�n.
 *
 * \param tema Colores Estructura que contiene los conjuntos de colores para los jugadores.
 * \param nombre Nombres Estructura que contiene a los nombres de los jugadores.
 *
 * \return void
 *
 */
void SeleccionFin(Colores tema, Nombres nombre);

// ****************************************************************************************

/**
 * \brief Men� de la pantalla principal
 *
 * \details Es la funci�n que indica en que opci�n del men� se encuentra actualmente el
 *          usuario.
 *
 * \param dec int Entero que representa la decisi�n de opciones en el men�.
 *
 * \return void
 *
 */
void SeleccionMenu(int dec);

// ****************************************************************************************

/**
 * \brief Establece el tema actual de colores de los jugadores
 *
 * \details Es la funci�n que indica en que opci�n de los temas se encuentra actualmente
 *          el usuario.
 *
 * \param tema Colores Estructura que contiene los conjuntos de colores para los jugadores.
 *
 * \return void
 *
 */
void Jugadores(Colores &Tema);

// ****************************************************************************************

/**
 * \brief Funci�n que genera una serie corta de tonos, al comienzo del programa
 *
 * \return void
 */
void MelodiaIntro();


/**
 * \brief Funci�n que genera una serie corta de tonos festivos
 *
 * \return void
 */
void MelodiaGanadora();



#endif //UNTITLED7_DISENO_H
