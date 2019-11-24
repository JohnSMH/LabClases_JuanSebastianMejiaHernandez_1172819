#pragma once
#include "Poligono.h"
class Decagono : public Poligono
{
public:
	Decagono();
	~Decagono();
public:
	double ObtenerArea(double LargoLado);
	double ObtenerPerimetro(double LargoLado);
};

