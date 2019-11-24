#pragma once
#include "Poligono.h"
class Pentagono : public Poligono
{
public:
	Pentagono();
	~Pentagono();

public:
	double ObtenerArea(double LargoLado);
	double ObtenerPerimetro(double LargoLado);
};

