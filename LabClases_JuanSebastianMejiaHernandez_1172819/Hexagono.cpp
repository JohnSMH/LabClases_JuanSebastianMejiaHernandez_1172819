#include "Hexagono.h"

Hexagono::Hexagono() {};
Hexagono::~Hexagono() {};

double Hexagono::ObtenerArea(double LargoLado) {
	return ((LargoLado * LargoLado * 6) / 1.1547);
};

double Hexagono::ObtenerPerimetro(double LargoLado) {
	return 6 * LargoLado;
};
