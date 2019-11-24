#pragma once
#include "Poligono.h"
class Cuadrado : public Poligono
{
public:
	Cuadrado();
	~Cuadrado();
public:
	double ObtenerArea(double LargoLado);
	double ObtenerPerimetro(double LargoLado);
};

