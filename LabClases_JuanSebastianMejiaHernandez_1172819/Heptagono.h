#pragma once
#include "Poligono.h"
class Heptagono : public Poligono
{
public:
	Heptagono();
	~Heptagono();
public:
	double ObtenerArea(double LargoLado);
	double ObtenerPerimetro(double LargoLado);
};

