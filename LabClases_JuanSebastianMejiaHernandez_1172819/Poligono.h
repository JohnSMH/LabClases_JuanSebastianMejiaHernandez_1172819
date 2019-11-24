#pragma once
class Poligono
{
public:
	Poligono();
	~Poligono();
public:
	virtual double ObtenerArea(double largoLado) = 0;
	virtual double ObtenerPerimetro(double largoLado);
};

