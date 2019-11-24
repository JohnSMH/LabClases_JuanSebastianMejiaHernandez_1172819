#include "Eneagono.h"

Eneagono::Eneagono() {};
Eneagono::~Eneagono() {};

double Eneagono::ObtenerArea(double LargoLado) {
	return ((LargoLado * LargoLado * 9) / 0.72794);
};

double Eneagono::ObtenerPerimetro(double LargoLado) {
	return 9 * LargoLado;
};

