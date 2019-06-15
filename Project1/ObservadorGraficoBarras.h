#pragma once
#include "Observador.h"
#include "GraficoDeBarras.h"
class ObservadorGraficoBarras :public Observador
{
private:
	GraficoDeBarras* grafico;
public:
	ObservadorGraficoBarras(Encuesta*, GraficoDeBarras*);
	void update();
};

