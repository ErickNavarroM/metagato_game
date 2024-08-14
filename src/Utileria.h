#ifndef UNTITLED5_UTILERIA_H
#define UNTITLED5_UTILERIA_H

/**
 * \brief Mueve el cursor en la ventana de despliegue a la posición indicada
 *
 * \details Las posiciones de la ventana de despliegue inician con (0,0) en la
 * esquina superior izquierda. Podría decirse que la posición \b x indica la
 * columna de la ventana y la posición \b y indica el renglón, ambas iniciando
 * en cero.
 *
 * \param x Posición horizontal a donde se moverá el cursor. El cursor se
 *          mueve \b x unidades a la derecha a partir del inicio de la ventana.
 * \param y Posición vertical a donde se moverá el cursor. El cursor se mueve
 *          \b y unidades hacia abajo a partir del inicio de la ventana.
 *
 * \return Nada
 *
 * \warning Si alguna posición se sale de los límites de la ventana de
 *          despliegue, el cursor no se moverá.
 */
void ImprimirMarcoSimple(int x, int y, int anchura, int altura);

/** \brief Caracteres simples de esquinas, barras y cruces.*/
enum{
     BV = 179,      /**< Barra vertical */
     CD,            /**< Cruce derecho */
     ESD = 191,     /**< Esquina Superior Derecha */
     EII,           /**< Esquina Inferior Izquierda */
     CIF,           /**< Cruce Inferior */
     CSP,           /**< Cruce Superior */
     CI,            /**< Cruce Inferior */
     BH = 196,      /**< Barra Horizontal */
     C,             /**< Cruce central */
     EID = 217,     /**< Esquina Inferior Derecha */
     ESI            /**< Esquina Superior  Izquierda */
};

/** \brief Caracteres dobles de esquinas, barras y cruces. */
enum{
    CD_D = 185,     /**< Cruce Derecho Doble */
    BV_D,           /**< Barra Verical Doble */
    ESD_D,          /**< Esquina Superior Derecha Doble */
    EID_D,          /**< Esquina Inferior Derecha Doble */
    EII_D = 200,    /**< Esquina Inferior Izquierda Doble */
    ESI_D,          /**< Esquina Superior Izquierda Doble */
    CIF_D,          /**< Cruce Inferior Doble */
    CSP_D,          /**< Cruce Suoerior Doble */
    CI_D,           /**< Cruce Izquierdo Doble */
    BH_D,           /**< Barra Horizontal Doble */
    C_D             /**< Cruce Derecho Doble */
};

/** \brief Establece las dimensiones de la consola al ejecutar un programa
 *
 * \details La consola se divide en posiciones donde se disponen los caracteres
 * que se imprimen, uno por cada posici�n. Esta funci�n permite establecer las
 * dimensiones medidas en posiciones en que la consola es desplegada.
 *
 * \param ancho int Dimensi�n horizontal de la consola medido en posiciones.
 * \param alto int Dimensi�n vertical de la consola medido en posiciones.
 *
 * \return void
 *
 */
void EstablecerVentana(int ancho, int alto);

/** \brief Colores de texto y fondo de la ventana de despliegue */
enum Color{                 // Color es el nombre del tipo enumerado
    NEGRO,          /**< Color negro */
    AZUL,           /**< Color azul fuerte */
    VERDE,          /**< Color verde oscuro */
    AGUAMARINA,     /**< Color azul verde */
    ROJO,           /**< Color rojo oscuro */
    PURPURA,        /**< Color morado */
    AMARILLO,       /**< Color amarillo */
    GRISCLARO,      /**< Color gris claro */
    GRIS,           /**< Color gris oscuro */
    AZULCLARO,      /**< Color azul cielo */
    VERDECLARO,     /**< Color verde claro */
    AGUAMARINACLARO,/**< Color azul verde claro */
    ROJOCLARO,      /**< Color rojo claro */
    MAGENTA,        /**< Color rosa fuerte */
    AMARILLOCLARO,  /**< Color amarillo claro */
    BLANCO          /**< Color blanco */
};
/** \brief Establece el color de fondo y texto para impresi&oacute;n.
 * \details Despu�s de establecer el color, lo que se imprima aparecer� con
 * esta combinaci�n de colores.
 *
 * \param colorFondo El color de fondo del texto a imprimir
 * \param colorTexto El color del texto a imprimir
 *
 * \pre Tanto el color de fondo como de texto deben ser valores de la
 * enumeraci�n tipo Color: NEGRO, AZUL, VERDE, ..., BLANCO
 */
void EstablecerColor(Color colorFondo, Color colorTexto);

/**
 * \brief Mueve el cursor en la ventana de despliegue a la posici�n indicada
 *
 * \details Las posiciones de la ventana de despliegue inician con (0,0) en la
 * esquina superior izquierda. Podr�a decirse que la posici�n \b x indica la
 * columna de la ventana y la posici�n \b y indica el rengl�n, ambas iniciando
 * en cero.
 *
 * \param x Posici�n horizontal a donde se mover� el cursor. El cursor se
 *          mueve \b x unidades a la derecha a partir del inicio de la ventana.
 * \param y Posici�n vertical a donde se mover� el cursor. El cursor se mueve
 *          \b y unidades hacia abajo a partir del inicio de la ventana.
 *
 * \return Nada
 *
 * \warning Si alguna posici�n se sale de los l�mites de la ventana de
 *          despliegue, el cursor no se mover�.
 */
void MoverCursor(short x,short y);

/** \brief Estado del cursor*/
enum EstadoCursor{
    APAGADO,    /**< Apaga el cursor. Lo hace invisible */
    ENCENDIDO   /**< Enciende el cursor. Lo hace visible */
};

/** \brief Modo o tama�o del cursor*/
enum ModoCursor{
    NORMAL = 20,    /**< El cursor tiene un tama�o peque�o, tama�o normal */
    MEDIO = 50,     /**< El cursor tiene un tama�o medio, m�s alto del normal, ocupa la mitad del �rea de un car�cter en la ventana */
    SOLIDO = 100     /**< El cursor tiene el tama�o de todo el �rea de un car�cter en la ventana */
};

/** \brief Cambia el estado y el tama�o del cursor
 *
 * \param estado El estado a establecer. Los posibles valores son ENCENDIDO o APAGADO
 * \param modo El tama�o o modo del cursor a establecer. Los posibles valores son MINI, NORMAL y SOLIDO
 *
 * \return Nada
 */
void CambiarCursor(EstadoCursor estado, ModoCursor modo);

/**
 * \brief Establece el t�tulo de la consola
 *
 * \details El t�tulo en la barra de t�tulo de la consola es la direcci�n del ejecutable
 *          por defecto. Esta funci�n establece un nuevo t�tulo introduciendo como argumento
 *          una cadena de caracteres.
 *
 * \param titulo const char * Cadena de caracteres que contiene al t�tulo que se desea establecer.
 *
 * \return Nada
 *
 */
void EstablecerTitulo(const char * titulo);

#endif //UNTITLED5_UTILERIA_H
