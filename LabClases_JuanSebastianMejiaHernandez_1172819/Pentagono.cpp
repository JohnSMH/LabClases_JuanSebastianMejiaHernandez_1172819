#include "Pentagono.h"

Pentagono::Pentagono() {};
Pentagono::~Pentagono() {};

double Pentagono::ObtenerArea(double LargoLado) {
	return ((LargoLado*LargoLado*5)/2.90) ;
};

double Pentagono::ObtenerPerimetro(double LargoLado) {
	return 5 * LargoLado;
};
