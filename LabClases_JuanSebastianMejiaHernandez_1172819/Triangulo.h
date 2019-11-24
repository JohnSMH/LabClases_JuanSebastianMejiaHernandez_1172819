#pragma once
#include "Poligono.h"
class Triangulo : public Poligono
{
public:
	Triangulo();
	~Triangulo();
public:
	double ObtenerArea(double LargoLado);
	double ObtenerPerimetro(double LargoLado);
};

