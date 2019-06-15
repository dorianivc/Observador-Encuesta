#include "Encuesta.h"
#include "Observador.h"
#include "TablaDatos.h"
#include "ObservadorTablaDeDatos.h"
#include "ObservadorGraficoBarras.h"
#include "GraficoDeBarras.h"
using namespace std;

int main() {
	Encuesta* encuesta = new Encuesta(new Partidos("LBN"), new Partidos("PAC"));
	TablaDatos* tabla = new TablaDatos(encuesta);
	GraficoDeBarras* grafico = new GraficoDeBarras(encuesta);
	encuesta->agregarObservador(new ObservadorTablaDeDatos(encuesta, tabla));
	encuesta->agregarObservador(new ObservadorGraficoBarras(encuesta, grafico));
	for (int i = 0; i < 1500; i++) {
		encuesta->votarA();
	}
	for (int i = 0; i < 7500; i++) {
		encuesta->votarB();
	}
	cout << tabla->toString() << endl;
	cout << grafico->toString() << endl;
	cin.get();
	delete encuesta;
	return 0;
}