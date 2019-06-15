#pragma once
#include "Encuesta.h"
class TablaDatos
{ private:
	Encuesta* enc;
public:
	TablaDatos(Encuesta*);
	int porcentaje(Partidos*);
	string toString();
};

