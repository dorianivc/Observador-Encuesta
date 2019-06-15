#include "ObservadorTablaDeDatos.h"

ObservadorTablaDeDatos::ObservadorTablaDeDatos(Encuesta* y, TablaDatos* x):Observador(y)
{
	tabla = x;
}

void ObservadorTablaDeDatos::update()
{
	if (tabla != NULL) {
		delete tabla;
	}
	tabla = new TablaDatos(objObservado);
}
