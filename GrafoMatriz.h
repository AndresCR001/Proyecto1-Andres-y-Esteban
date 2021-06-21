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
	{ // inicializa el nombre y pone el n�mero de v�rtice e -1
		nombre = x;
		numVertice = -1;
	}
	Vertice(const char* x, int n)
	{ // inicializa el nombre y el n�mero de v�rtice
		nombre = x;
		numVertice = n;
	}
	const char* OnomVertice()
	{ // retorna el nombre del v�rtice
		return nombre;
	}
	void PnomVertice(const char* nom)
	{ // cambia el nombre del v�rtice
		nombre = nom;
	}
	bool igual(Vertice n)
	{ // decide entre la igualdad de nombres
		return nombre == n.nombre;
	}
	void PnumVertice(int n)
	{ // cambia el n�mero del v�rtice
		numVertice = n;
	}
	int OnumVertice()
	{ // retorna el n�mero del v�rtice
		return numVertice;
	}
};

class GrafoMatriz{

	typedef int* pint; // para el dimensionamiento de la matriz

protected:
	int maxVerts; // m�ximo numero de v�rtices
	int numVerts; // n�mero de v�rtices actual
	Vertice* verts; // array de v�rtices
	int** matAd; // matriz de adyacencia
public:
	// m�todos p�blicos de la clase GrafoMatriz
	GrafoMatriz(int mx)
	{
		maxVerts = mx;
		verts = new Vertice[mx]; // vector de v�rtices
		matAd = new pint[mx]; // vector de punteros
		numVerts = 0;
		for (int i = 0; i < mx; i++)
			matAd[i] = new int[mx]; // matriz de adyacencia
	}

	GrafoMatriz()
	{
		maxVerts = 1;
		GrafoMatriz(maxVerts);
	}

	int OnumeroDeVertices() { return numVerts; }
	void PnumeroDeVertices(int n) { numVerts = n; }

	void nuevoVertice(const char* nom) 
	{
		bool esta = numVertice(nom) >= 0;
		if (!esta)
		{
			Vertice v = Vertice(nom, numVerts);
			verts[numVerts++] = v; // se asigna a la lista.
			// No se comprueba que sobrepase el m�ximo
		}
	}

	int numVertice(const char* v)
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


	void GrafoMatriz::nuevoArco(int va, int vb, int valor)
	{
		if (va < 0 || vb < 0 || va > numVerts || vb > numVerts)
			throw "V�rtice no existe";
		matAd[va][vb] = valor;
	}

	bool GrafoMatriz::adyacente(int va, int vb)
	{
		if (va < 0 || vb < 0 || va >= numVerts || vb >= numVerts)
			throw "V�rtice no existe";
		return matAd[va][vb] == 1;
	}

	int Ovalor(int va, int vb)
	{
		if (va < 0 || vb < 0 || va >= numVerts || vb >= numVerts)
			throw "V�rtice no existe";
		return matAd[va][vb];
	}

	void Pvalor(int va, int vb, int v)
	{
		if (va < 0 || vb < 0 || va >= numVerts || vb >= numVerts)
			throw "V�rtice no existe";
		matAd[va][vb] = v;
	}

	Vertice Overtice(int va)
	{
		if (va < 0 || va >= numVerts)
			throw "V�rtice no existe";
		else return verts[va];
	}
	
	void Pvertice(int va, Vertice vert)
	{
		if (va < 0 || va >= numVerts)
			throw "V�rtice no existe";
		else verts[va] = vert;
	}


private:
	// m�todos privados de la clase GrafoMariz
};