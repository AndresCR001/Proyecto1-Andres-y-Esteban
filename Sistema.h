#pragma once

#include <fstream>
#include <string>
#include <iostream>
#include <vector>

class Sistema {

private:
	int matrizDistancias[7][7];
	int* pMatriz;
	std::vector<std::string> Ubicaciones = {}; //creamos un vector para manejar los puntos que se van a conectar en el grafo.
	std::vector<std::string> Rutas = {};




public:
	void setUbicaciones(std::vector<std::string> Ubi) { Ubicaciones = Ubi; }
	std::vector<std::string> getUbicaciones() { return Ubicaciones; }
	void agregarUbicacion(std::string Ubi) {
		Ubicaciones.push_back(Ubi);
	}

	void setRutas(std::vector<std::string> Rut) { Rutas = Rut; }
	std::vector<std::string> getRutas() { return Rutas; }

	void setMatrizDistancias(int *mat) { pMatriz = mat; }
	int* getMatrizDistancias() { return pMatriz; }


	void leerMapaDistancias() { 
		//leemos el archivo que contiene lo valores con las distancias (pesos) entre ubicaciones 
		std::ifstream file("MapaDistancias.txt");
		std::string str; // recibe la linea del archivo de texto
		std::string delimitador = ",";
		int fila=0;
		int columna=0;
		while (std::getline(file, str)) {
			  
			

			size_t pos = 0;
			std::string peso;
			while ((pos = str.find(delimitador)) != std::string::npos) {
				peso = str.substr(0, pos);
				std::cout << peso << std::endl;

				if (peso == "-") {
					matrizDistancias[fila][columna] = 0;
				}
				else {
					matrizDistancias[fila][columna] = std::stoi(peso);
				}

				columna++;
				str.erase(0, pos + delimitador.length());
			}
			std::cout << str << std::endl;
			if (str == "-") {
				matrizDistancias[fila][columna] = 0;
			}
			else {
				matrizDistancias[fila][columna] = std::stoi(str);
			}
			columna = 0;
			fila++;
			std::cout << "\n" << std::endl;
			std::cout << "\n" << std::endl;



		}//leemos la linea del archivo, esta debe ser recorrida cada coma y si el vamor el distinto a "-"
		//este valor leido será considerado para la cracion de la matriz.
		pMatriz = &matrizDistancias[0][0];

	}

	std::vector<std::string> acomodarRutas() {

		std::vector<std::string> rutas;

		
		int largo = Ubicaciones.size() - 1;
		int y;
		int z;
		int aux;
		for (int x; x <=( Ubicaciones.size()-1); x++) {
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

		return rutas;

	}

};