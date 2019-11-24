#pragma once
#include "Poligono.h"
class Octagono : public Poligono
{
public:
	Octagono();
	~Octagono();
public:
	double ObtenerArea(double LargoLado);
	double ObtenerPerimetro(double LargoLado);
};

