#include "Observador.h"

Observador::Observador(Encuesta* x)
{
	objObservado = x;
	x->agregarObservador(this);
}

Encuesta* Observador::getObjObservado()
{
	return objObservado;
}
