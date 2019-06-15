#pragma once
#include "Encuesta.h"
class Encuesta;
class Observador
{protected:
	Encuesta* objObservado;
public:
	Observador(Encuesta*);
	virtual Encuesta* getObjObservado();
	virtual void update()=0;
};

