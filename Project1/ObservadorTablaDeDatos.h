#pragma once
#include "Observador.h"
#include "TablaDatos.h"
class ObservadorTablaDeDatos :public Observador
{private:
	TablaDatos* tabla;
public:
	ObservadorTablaDeDatos(Encuesta*,TablaDatos*);
	void update();
};

