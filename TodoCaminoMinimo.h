#pragma once
#include "GrafoMatriz.h"
#include <iostream>

class TodoCaminoMinimo
{
protected:
	int** traza;
	int** D;
private:
	int n;
public:
	int** Otraza() { return traza; }
	int** Odistancia() { return D; }


	TodoCaminoMinimo(GrafoMatriz g) {
		n = g.OnumeroDeVertices();
		typedef int* pint;
		D = new pint[n];
		traza = new pint[n];
		// matriz inicial es la de pesos.
		for (int i = 0; i < n; i++)
		{
			D[i] = new int[n];
			traza[i] = new int[n];
			for (int j = 0; j < n; j++)
			{
				int val=  g.Ovalor(i, j);
				D[i][j] = g.Ovalor(i, j);
				traza[i][j] = -1; // para decodificar los caminos
			}
		}

		for (int x = 0; x < n; x++) {
			for (int i = 0; i < n; i++)
			{
				std::cout << traza[x][i];
				std::cout << ",";
			}
			std::cout << "\n";
		}

		std::cout << "\n";
		for (int x = 0; x < n; x++) {
			for (int i = 0; i < n; i++)
			{
				std::cout << D[x][i];
				std::cout << ",";
			}
			std::cout << "\n";
		}

	}
	void Floyd() {

	
		int i, j, k;
		// Camino mínimo de un vértice a si mismo: 0
		for (i = 0; i < n; i++) D[i][i] = 0;
		/* En el caso de que no se realice esta inicialización el algoritmo
	   obtiene en la diagonal los ciclos o bucles de longitud mínima */
		for (k = 0; k < n; k++) {
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					if ((D[i][k] + D[k][j]) < D[i][j]) // nuevo mínimo
					{
						D[i][j] = D[i][k] + D[k][j];
						traza[i][j] = k;
						//std::cout << " camino para ir de " << i << " a " << j <<"->"<< D[i][j] <<std::endl;


					}
					else {

						//std::cout << " camino para ir de " << i << " a " << j << "->" << D[i][j] << std::endl;

					}
				}
			}
		}
					

		for (int x = 0; x < n; x++) {
			for (int i = 0; i < n; i++)
			{
				std::cout << traza[x][i];
				std::cout << ",";
			}
			std::cout << "\n";
		}

		std::cout << "\n";
		for (int x = 0; x < n; x++) {
			for (int i = 0; i < n; i++)
			{
				std::cout << D[x][i];
				std::cout << ",";
			}
			std::cout << "\n";
		}


	}
	void recuperaCamino(int i, int j) {
		std::cout << " camino para ir de " << i << " a " << j << std::endl;
		recupera(i, j);
	}

	void recupera(int i, int j)
	{
		int k = traza[i][j];
		if (k != -1)
		{
			recupera(i, k);
			std::cout << k;
			recupera(k, j);
		}
	}
};




