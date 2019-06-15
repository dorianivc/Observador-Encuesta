#include "Encuesta.h"

Encuesta::Encuesta(Partidos* A, Partidos* B)
{
	votosTotales = 0;
	if (A != NULL) {
		partidos.push_back(A);
	}
	else {
		partidos.push_back(new Partidos("Partido Generico A"));
	}
	if (B != NULL) {
		partidos.push_back(B);
	}
	else {
		partidos.push_back(new Partidos("Partido Generico B"));
	}
}

void Encuesta::votarA()
{
	partidos[0]->agregarVoto();
	votosTotales++;
}

void Encuesta::votarB()
{
	partidos[1]->agregarVoto();
	votosTotales++;
}

void Encuesta::agregarObservador(Observador* x)
{
	observadores.push_back(x);
}

vector<Partidos*> Encuesta::getPartidos()
{
	return partidos;
}

int Encuesta::getVotosTotales()
{
	return votosTotales;
}

void Encuesta::notififcar()
{
	for (int i = 0; i < observadores.size(); i++) {
		observadores[i]->update();
	}
}

Encuesta::~Encuesta()
{
	observadores.clear();
	partidos.clear();
}
