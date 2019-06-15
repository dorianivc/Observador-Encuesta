#include "TablaDatos.h"

TablaDatos::TablaDatos(Encuesta* x)
{
	enc = x;
}

int TablaDatos::porcentaje(Partidos* x)
{
	int total = enc->getVotosTotales();
	int votosA = x->getNumeroVotos();
	int porcentaje = (votosA * 100) / total;
	return porcentaje;
}


string TablaDatos::toString()
{
	stringstream p;
	for (int i = 0; i < enc->getPartidos().size(); i++) {
		p << "Cantidad votos Partido " << enc->getPartidos()[i]->getNombre() << " : " << enc->getPartidos()[i]->getNumeroVotos() << endl;
	}

	p << "Total: " << enc->getVotosTotales() << endl;
	for (int i = 0; i < enc->getPartidos().size(); i++) {
		p << "Porcentaje Partido " << enc->getPartidos()[i]->getNombre() << " " << porcentaje(enc->getPartidos()[i]) <<" %"<< endl;
	}
	p << "Total: 100%" << endl;
	return p.str();
}
