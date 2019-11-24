#include "Decagono.h"

Decagono::Decagono() {};
Decagono::~Decagono() {};

double Decagono::ObtenerArea(double LargoLado) {
	return ((LargoLado * LargoLado * 10) / 0.6498393925);
};

double Decagono::ObtenerPerimetro(double LargoLado) {
	return 10 * LargoLado;
};

