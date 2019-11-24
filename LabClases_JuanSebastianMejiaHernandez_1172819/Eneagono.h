#pragma once
#include "Poligono.h"
class Eneagono : public Poligono
{
public:
	Eneagono();
	~Eneagono();
public:
	double ObtenerArea(double LargoLado);
	double ObtenerPerimetro(double LargoLado);
};

