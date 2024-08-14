#include "Utileria.h"
#include "Diseno.h"
#include "Pantallas.h"
#include "ConstantesEstructuras.h"

int main()
{
    EstablecerColor(COLORFONDO, COLORLETRA);
    CambiarCursor(APAGADO, NORMAL);
    // EstablecerTitulo("Metagato");
    EstablecerVentana(ANCHO_PANTALLA, ALTO_PANTALLA);
    ImprimirMarcoSimple (1, 1, ANCHO_PANTALLA-2, ALTO_PANTALLA-2);
    MelodiaIntro();
    
    int dec = 1;
    Colores Tema;
    Menu(Tema, dec);
}