#include "Cuadrado.h"

Cuadrado::Cuadrado() {};
Cuadrado::~Cuadrado() {};

double Cuadrado::ObtenerArea(double LargoLado) {
	return LargoLado*LargoLado;
};

double Cuadrado::ObtenerPerimetro(double LargoLado) {
	return 4 * LargoLado;
};