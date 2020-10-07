#include "CVecteur3d.h"
#include <iostream>

//Constructeurs

//Exercice 69 : a
/*
CVecteur3d::CVecteur3d()
//Constructeur par défaut, initialise les trois coordonnées à 0
{
	this->m_fltX = 0.0;
	this->m_fltY = 0.0;
	this->m_fltZ = 0.0;
}

CVecteur3d::CVecteur3d(float flt_X, float flt_Y, float flt_Z)
//Constructeur qui initialise trois coordonnées en fonction des valeurs entrées par l'utilisateur
{
	this->m_fltX = flt_X;
	this->m_fltY = flt_X;
	this->m_fltZ = flt_Z;
}
*/


/*
//63 : b
CVecteur3d::CVecteur3d(float flt_X, float flt_Y, float flt_Z)
//Constructeur avec des arguments optionnels
{
	this->m_fltX = flt_X;
	this->m_fltY = flt_X;
	this->m_fltZ = flt_Z;
}
*/


//64 : c
CVecteur3d::CVecteur3d(float flt_X, float flt_Y, float flt_Z) : m_fltX(flt_X), m_fltY(flt_Y), m_fltZ(flt_Z)
//Constructeur sur une seule ligne
{

}


//Assesseurs
float CVecteur3d::get_fltX() const
{
	return this->m_fltX;
}

float CVecteur3d::get_fltY() const
{
	return this->m_fltY;
}

float CVecteur3d::get_fltZ() const
{
	return this->m_fltZ;
}