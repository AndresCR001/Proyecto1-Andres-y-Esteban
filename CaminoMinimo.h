#pragma once
#include "GrafoMatriz.h"
class CaminoMinimo
{
protected:
	int* ultimo; // array de predecesores
	int* D; // array de distancias mínimas
private:
	std::vector<int> arcos;
	int s, n; // vértice origen y número de vértices
public:
	CaminoMinimo(GrafoMatriz g, int origen); // constructor
	void Dijkstra(GrafoMatriz g, int origen); // dijkstra
	void recuperaCamino(int v);
	int* OdistanciaMinima();
	int* Oultimo();
	std::vector<int> getArcos() { return arcos; }
private:
	int minimo(bool F[]); // metodo privado usado por dijkstra
};

CaminoMinimo::CaminoMinimo(GrafoMatriz g, int origen)
{
	n = g.OnumeroDeVertices();
	s = origen;
	ultimo = new int[n];
	D = new int[n];
}

void CaminoMinimo::Dijkstra(GrafoMatriz g, int origen)
{
	bool* F;
	F = new bool[n];
	// valores iniciales
	for (int i = 0; i < n; i++)
	{
		F[i] = false;
		D[i] = g.Ovalor(s, i);
		ultimo[i] = s;
	}
	F[s] = true; D[s] = 0; //Marca origen e inicializa distancia
	// Pasos para marcar los n-1 vértices. Algoritmo voraz
	for (int i = 1; i < n; i++)
	{
		int v = minimo(F);
		//selecciona vértice no marcado de menor distancia
		F[v] = true;
		// actualiza distancia de vértices no marcados
		for (int w = 0; w < n; w++)
			if (!F[w])
				if (D[v] + g.Ovalor(v, w) < D[w])
				{
					D[w] = D[v] + g.Ovalor(v, w);
					ultimo[w] = v;
				}
	}
}

int CaminoMinimo::minimo(bool F[])
{
	double mx = 0xFFFF; // valor de infinito
	int v = 0;
	for (int j = 0; j < n; j++)
		if (!F[j] && (mx >= D[j]))
		{
			mx = D[j];
			v = j;
		}
	return v;
}

void CaminoMinimo::recuperaCamino(int v)
{
	int anterior = ultimo[v];
	if (v != s)
	{
		recuperaCamino(anterior); // vuelve al último del último
		std:: cout << v << " V <--" << std::endl;
		arcos.push_back(v);

	}
	else {
		std::cout << s << std::endl;
		arcos.push_back(s);
	}
}

int* CaminoMinimo::OdistanciaMinima() { return D; }
int* CaminoMinimo::Oultimo() { return ultimo; }