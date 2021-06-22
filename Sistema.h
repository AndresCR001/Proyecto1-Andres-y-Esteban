#pragma once

#include <fstream>
#include <string>
#include <iostream>

class Sistema {

private:
	int matrizDistancias[7][7];
	int* pMatriz;



public:
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

};