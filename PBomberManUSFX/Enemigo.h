#pragma once
#include "Movimiento.h"
class Enemigo
{
private:
	DireccionMovimiento direccionActual;
	DireccionMovimiento direccionSiguiente;
public:
	DireccionMovimiento getDireccionActual() { return direccionActual; }
	void setDireccionActual(DireccionMovimiento _direccionActual) { direccionActual = _direccionActual;}

	DireccionMovimiento getDireccionSiguiente() { return direccionSiguiente; }
	void setDireccionSiguiente(DireccionMovimiento _direccionSiguiente) { direccionSiguiente = _direccionSiguiente; }



};

