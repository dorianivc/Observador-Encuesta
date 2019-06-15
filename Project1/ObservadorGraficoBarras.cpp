#include "ObservadorGraficoBarras.h"

ObservadorGraficoBarras::ObservadorGraficoBarras(Encuesta* x, GraficoDeBarras* y): Observador(x)
{
	grafico = y;
}

void ObservadorGraficoBarras::update()
{
	if (grafico != NULL) {
		delete grafico;
	}
	grafico = new GraficoDeBarras(objObservado);
}
