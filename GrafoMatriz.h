#pragma once

#include <sstream>

using namespace System;

class Vertice{

protected:
	const char* nombre;
	int numVertice;
public:
	Vertice() {}
	Vertice(const char* x)
	{ // inicializa el nombre y pone el número de vértice e -1
		nombre = x;
		numVertice = -1;
	}
	Vertice(const char* x, int n)
	{ // inicializa el nombre y el número de vértice
		nombre = x;
		numVertice = n;
	}
	const char* OnomVertice()
	{ // retorna el nombre del vértice
		return nombre;
	}
	void PnomVertice(const char* nom)
	{ // cambia el nombre del vértice
		nombre = nom;
	}
	bool igual(Vertice n)
	{ // decide entre la igualdad de nombres 
		if (*(nombre) == *(n.nombre))
			return true;
		else
			return false;
	}
	void PnumVertice(int n)
	{ // cambia el número del vértice
		numVertice = n;
	}
	int OnumVertice()
	{ // retorna el número del vértice
		return numVertice;
	}
};

class GrafoMatriz{

	typedef int* pint; // para el dimensionamiento de la matriz

protected:
	int maxVerts; // máximo numero de vértices
	int numVerts; // número de vértices actual
	Vertice* verts; // array de vértices
	int** matAd; // matriz de adyacencia

public:
	// métodos públicos de la clase GrafoMatriz
	GrafoMatriz::GrafoMatriz(int mx)
	{
		maxVerts = mx;
		verts = new Vertice[mx]; // vector de vértices
		matAd = new pint[mx]; // vector de punteros
		numVerts = 0;
		for (int i = 0; i < mx; i++)
			matAd[i] = new int[mx]; // matriz de adyacencia
	}

	GrafoMatriz::GrafoMatriz()
	{
		maxVerts = 1;
		GrafoMatriz(maxVerts);
	}

	int GrafoMatriz::OnumeroDeVertices() { return numVerts; }
	void GrafoMatriz::PnumeroDeVertices(int n) { numVerts = n; }

	void GrafoMatriz::nuevoVertice(const char* nom)
	{
		bool esta = numVertice(nom) >= 0;
		if (!esta)
		{
			Vertice v = Vertice(nom, numVerts);
			verts[numVerts++] = v; // se asigna a la lista.
			// No se comprueba que sobrepase el máximo
		}
	}

	int GrafoMatriz::numVertice(const char* v)
	{
		int i;
		bool encontrado = false;
		for (i = 0; (i < numVerts) && !encontrado;)
		{
			encontrado = verts[i].igual(v);
			if (!encontrado) i++;
		}
		return (i < numVerts) ? i : -1;
	}


	void GrafoMatriz::nuevoArco(const char* a, const char* b, int valor)
	{
		int va, vb;
		va = numVertice(a);
		vb = numVertice(b);
		if (va < 0 || vb < 0 || va > numVerts || vb > numVerts)
			throw "Vértice no existe";
		matAd[va][vb] = valor;
	}

	bool GrafoMatriz::adyacente(int va, int vb)  //retorna verdadero si existe una adyacencia entre vertices, identificados por el numero
	{
		if (va < 0 || vb < 0 || va >= numVerts || vb >= numVerts)
			throw "Vértice no existe";
		return matAd[va][vb] == 1;
	}

	int Ovalor(int va, int vb)  //retorna el valor de la adyacencia entre los puntos ingresados como parametro
	{
		if (va < 0 || vb < 0 || va >= numVerts || vb >= numVerts)
			throw "Vértice no existe";
		return matAd[va][vb];
	}

	void Pvalor(int va, int vb, int v) //define el valor de la adyacencia entre dos puntos
	{
		if (va < 0 || vb < 0 || va >= numVerts || vb >= numVerts)
			throw "Vértice no existe";
		matAd[va][vb] = v;
	}

	Vertice Overtice(const char* a)//int va) //retorna el vertice que se identifica con el numero/posicion en el vector de vertices
	{
		/*if (va < 0 || va >= numVerts)
			throw "Vértice no existe";
		else return verts[va];*/
		int va;
		va = numVertice(a);

		if (va < 0 || va >= numVerts)
			return Vertice("V");
		else return verts[va];
	}
	
	void Pvertice(int va, Vertice vert)//permite modificar el vertice, identificandolo con el indice
	{
		if (va < 0 || va >= numVerts)
			throw "Vértice no existe";
		else verts[va] = vert;
	}


private:
	// métodos privados de la clase GrafoMariz
};