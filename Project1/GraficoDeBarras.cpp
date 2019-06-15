#include "GraficoDeBarras.h"

GraficoDeBarras::GraficoDeBarras(Encuesta* x)
{
	enc = x;
}

int GraficoDeBarras::porcentaje(Partidos* x)
{
	int total = enc->getVotosTotales();
	int votosA = x->getNumeroVotos();
	int porcentaje = (votosA * 100) / total;
	return porcentaje;
}

vector<string> GraficoDeBarras::getBarra(int porcentaje)
{
	int numerodeBarras = 0;
	vector<string> barra;
	if (porcentaje > 9) {
		 numerodeBarras = porcentaje / 10;
		 if (porcentaje - (numerodeBarras * 10) > 4) {
			 numerodeBarras++;
		 }
		 for (int i = 0; i < numerodeBarras; i++) {
			 barra.push_back("#");
		 }
	}
	else {
		barra.push_back(" ");
	}
	return barra;
	
	
}

string GraficoDeBarras::toString()
{
	stringstream p;
	for (int i = 0; i < enc->getPartidos().size(); i++) {
		vector<string> barra = getBarra(porcentaje(enc->getPartidos()[i]));
		for (int y = 0; y < barra.size(); y++) {
			p << barra[y];
		}
		p << "         " << enc->getPartidos()[i]->getNombre() << " : " << porcentaje(enc->getPartidos()[i]) << endl;
	}
	return p.str();
}
