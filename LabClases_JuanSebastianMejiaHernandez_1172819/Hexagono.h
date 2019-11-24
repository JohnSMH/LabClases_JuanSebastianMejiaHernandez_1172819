#pragma once
#include "Poligono.h"
class Hexagono : public Poligono
{ 
public:
	Hexagono();
	~Hexagono();
public:
	double ObtenerArea(double LargoLado);
	double ObtenerPerimetro(double LargoLado);
};

