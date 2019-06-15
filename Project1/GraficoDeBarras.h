#pragma once
#include "Encuesta.h"
class GraficoDeBarras
{
private:
	Encuesta* enc;
public:
	GraficoDeBarras(Encuesta*);
	int porcentaje(Partidos*);
	vector<string> getBarra(int);
	string toString();

};

