#include <iostream>


int main()
{
    int anchoPantalla, altoPantalla;
    scanf_s("%i", &anchoPantalla);
    scanf_s("%i", &altoPantalla);

    float porcentajeX, porcentajeY, porcentajeAnchoElemento, porcentajeAltoElemento;
    scanf_s("%f", &porcentajeX);
    scanf_s("%f", &porcentajeY);
    scanf_s("%f", &porcentajeAnchoElemento);
    scanf_s("%f", &porcentajeAltoElemento);

    int ESIposX;
    int ESIposY;
    int EIDposX;
    int EIDposY;
    ESIposX = porcentajeX * anchoPantalla;
    ESIposY = porcentajeY * altoPantalla;
    EIDposX = (anchoPantalla * porcentajeAnchoElemento + ESIposX);
    EIDposY = (altoPantalla * porcentajeAltoElemento + ESIposY);
    printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", anchoPantalla, altoPantalla, porcentajeX, porcentajeY, porcentajeAnchoElemento, porcentajeAltoElemento, ESIposX, ESIposY, EIDposX, EIDposY);

    return 0;

}

 