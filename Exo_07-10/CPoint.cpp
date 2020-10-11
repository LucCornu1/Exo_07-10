#include "CPoint.h"
#include <iostream>
#include <math.h>

using namespace std;

int CPoint::m_nCompt = 0;


//Constructeur
CPoint::CPoint()
{
	this->m_fltX = 0.0;
	this->m_fltY = 0.0;
	this->m_fltZ = 0.0;

	m_nCompt++;
}

//Destructeur
CPoint::~CPoint()
{
	m_nCompt--;
}


//Fonctions membres
int CPoint::nombre()
//BUT : Fournir à l'utulisateur le nombre de points à un instant donné
//ENTREE : /
//SORTIE : Le nombre de points existants
{
	return m_nCompt;
}