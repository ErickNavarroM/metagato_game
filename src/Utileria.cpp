#include <iostream>
#include <windows.h>
#include "Utileria.h"


void ImprimirMarcoSimple(int x, int y, int anchura, int altura)
{
    MoverCursor(x, y);
    std::cout << (char)ESI;
    for(int i = 2; i < anchura; ++i) std::cout << (char)BH;
    std::cout << (char)ESD << std::endl;

    for(int i = 2; i < altura; ++i){
        MoverCursor(x, y + i - 1);
        std::cout << (char)BV;
        for(int i = 2; i < anchura; ++i) std::cout << ' ';
        std::cout << (char)BV << std::endl;
    }

    MoverCursor(x, y + altura - 1);
    std::cout << (char)EII;
    for(int i = 2; i < anchura; ++i) std::cout << (char)BH;
    std::cout << (char)EID << std::endl;
}

void EstablecerColor(Color colorFondo, Color colorTexto)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorFondo*16 + colorTexto);
}

void EstablecerVentana(int ancho, int alto)
{
    _COORD coord;
    coord.X = ancho;
    coord.Y = alto;

    _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = alto - 1;
    Rect.Right = ancho - 1;

    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);      // Get Handle
    SetConsoleScreenBufferSize(Handle, coord);            // Set Buffer Size
    SetConsoleWindowInfo(Handle, TRUE, &Rect);            // Set Window Size
}

void MoverCursor(short x,short y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {x,y};
    SetConsoleCursorPosition(handle,coord);
}

void CambiarCursor(EstadoCursor estado, ModoCursor modo)
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConCurInf = {modo, estado};
    SetConsoleCursorInfo(hOut, &ConCurInf);
}

// void EstablecerTitulo(std::string titulo)
// {
//     SetConsoleTitle(titulo);
// }

