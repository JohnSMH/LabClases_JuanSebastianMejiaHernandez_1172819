#include "Heptagono.h"

Heptagono::Heptagono() {};
Heptagono::~Heptagono() {};

double Heptagono::ObtenerArea(double LargoLado) {
	return ((LargoLado * LargoLado * 7) / 0.963149);
};

double Heptagono::ObtenerPerimetro(double LargoLado) {
	return 7 * LargoLado;
};
