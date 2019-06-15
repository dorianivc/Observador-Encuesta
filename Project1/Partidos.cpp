#include "Partidos.h"

Partidos::Partidos(string nom)
{
	nombre = nom;
	numeroVotos = 0;
}

int Partidos::getNumeroVotos()
{
	return numeroVotos;
}

void Partidos::agregarVoto()
{
	numeroVotos++;
}

string Partidos::toString()
{
	stringstream p;
	p << "Partido: " << nombre << endl;
	p << "Numero de votos a favor: " << endl;
	return p.str();
}

string Partidos::getNombre()
{
	return nombre;
}
