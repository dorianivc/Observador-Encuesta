#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
class Partidos
{
private:
	string nombre;
	int numeroVotos;
public:
	Partidos(string);
	int getNumeroVotos();
	void agregarVoto();
	string toString();
	string getNombre();
};

