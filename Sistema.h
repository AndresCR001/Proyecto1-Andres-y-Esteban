#pragma once

#include <fstream>
#include <string>
#include <iostream>
#include <vector>

class Sistema {
public:
	int** matrizDistancias;
	int fila, columna;

public: 
	int** getMatriz() { return matrizDistancias; }
	void setMatriz(int** m) { matrizDistancias = m; }

private:
	std::vector<std::string> Ubicaciones; //creamos un vector para manejar los puntos que se van a conectar en el grafo.
	std::vector<std::string> Rutas;




public:

	int getFila(std::string nomFila ) 
	{
		if (nomFila == "San Jose") {
			fila = 0;
		}
		else if ((nomFila == "Alajuela")) {
			fila = 1;
		}
		else if ((nomFila == "Cartago")) {
			fila = 2;
		}
		else if ((nomFila == "Heredia")) {
			fila = 3;
		}
		else if ((nomFila == "Limon")) {
			fila = 4;
		}
		else if ((nomFila == "Puntarenas")) {
			fila = 5;
		}
		else if ((nomFila == "Guanacaste")) {
			fila = 6;
		}

		return fila; 
	}
	int getColumna(std:: string nomCol)
	{ 
		if (nomCol == "San Jose") {
			columna = 0;
		}
		else if ((nomCol == "Alajuela")) {
			columna = 1;
		}
		else if ((nomCol == "Cartago")) {
			columna = 2;
		}
		else if ((nomCol == "Heredia")) {
			columna = 3;
		}
		else if ((nomCol == "Limon")) {
			columna = 4;
		}
		else if ((nomCol == "Puntarenas")) {
			columna = 5;
		}
		else if ((nomCol == "Guanacaste")) {
			columna = 6;
		}

		return columna; 
	}

	void modificar(int f, int c, int peso) {

		this->matrizDistancias[f][c] = peso;
		this->matrizDistancias[c][f] = peso;
		
	}

	void setUbicaciones(std::vector<std::string> Ubi) { Ubicaciones = Ubi; }
	std::vector<std::string> getUbicaciones() { return Ubicaciones; }
	void agregarUbicacion(std::string Ubi) {
		Ubicaciones.push_back(Ubi);
	}

	void setRutas(std::vector<std::string> Rut) { Rutas = Rut; }
	std::vector<std::string> getRutas() { return Rutas; }

	int getValor(std::string nomFila, std::string nomCol, int** mat) {

		if (nomFila == "San Jose") {
			fila = 0;
		}
		else if ((nomFila == "Alajuela")) {
			fila = 1;
		}
		else if ((nomFila == "Cartago")) {
			fila = 2;
		}
		else if ((nomFila == "Heredia")) {
			fila = 3;
		}
		else if ((nomFila == "Limon")) {
			fila = 4;
		}
		else if ((nomFila == "Puntarenas")) {
			fila = 5;
		}
		else if ((nomFila == "Guanacaste")) {
			fila = 6;
		}

		if (nomCol == "San Jose") {
			columna = 0;
		}
		else if ((nomCol == "Alajuela")) {
			columna = 1;
		}
		else if ((nomCol == "Cartago")) {
			columna = 2;
		}
		else if ((nomCol == "Heredia")) {
			columna = 3;
		}
		else if ((nomCol == "Limon")) {
			columna = 4;
		}
		else if ((nomCol == "Puntarenas")) {
			columna = 5;
		}
		else if ((nomCol == "Guanacaste")) {
			columna = 6;
		}
		

		std::cout << fila << columna <<"resultado"<< mat[fila][columna] << std::endl;
		return mat[fila][columna];
			
			

	}

	std::vector<std::string> acomodarRutas() {

		std::vector<std::string> rutas;

		int y=0;
		int z=0;
		int aux;
		for (int x=0; x <=( Ubicaciones.size()-1); x++) {
			y++;
			aux = y;
			while (z < (Ubicaciones.size()-(x+1))) {
				std::string ruta = Ubicaciones[x] + "-" + Ubicaciones[y];
				rutas.push_back(ruta);
				y++;
				z++;
			}
			y = aux;
			z = 0;

		}
		rutas.erase(rutas.begin());
		return rutas;

	}

};