#include "Triangulo.h"

Triangulo::Triangulo() {};
Triangulo::~Triangulo() {};

double Triangulo::ObtenerArea(double LargoLado) {
	return ((LargoLado * LargoLado * 1.732050808) / 4);
};

double Triangulo::ObtenerPerimetro(double LargoLado) {
	return 3 * LargoLado;
};
