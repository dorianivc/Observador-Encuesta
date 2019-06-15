#pragma once
#include "Partidos.h"
#include "Observador.h"
#include <vector>
class TablaDatos;
class Observador;
class Encuesta
{
private:
	vector<Partidos*> partidos;
	vector<Observador*> observadores;
	int votosTotales;
public:
	Encuesta(Partidos*, Partidos*);
	void votarA();
	void votarB();
	void agregarObservador(Observador*);
	vector<Partidos*> getPartidos();
	int getVotosTotales();
	void notififcar();
	~Encuesta();
};

