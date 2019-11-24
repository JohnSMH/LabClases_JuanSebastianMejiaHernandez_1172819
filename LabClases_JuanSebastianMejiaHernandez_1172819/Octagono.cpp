#include "Octagono.h"

Octagono::Octagono() {}
Octagono::~Octagono() {}

double Octagono::ObtenerArea(double LargoLado) {
	return ((LargoLado * LargoLado * 8) / 0.828427);
};

double Octagono::ObtenerPerimetro(double LargoLado) {
	return 8 * LargoLado;
};
