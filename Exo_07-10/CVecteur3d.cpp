#include "CVecteur3d.h"
#include <iostream>

using namespace std;


//Constructeurs

//Exercice 69 : a
/*
CVecteur3d::CVecteur3d()
//BUT : Constructeur par défaut, initialise les trois coordonnées à 0
//ENTREE : /
//SORTIE : /
{
	this->m_fltX = 0.0;
	this->m_fltY = 0.0;
	this->m_fltZ = 0.0;
}

CVecteur3d::CVecteur3d(float flt_X, float flt_Y, float flt_Z)
//BUT : Constructeur qui initialise trois coordonnées en fonction des valeurs entrées par l'utilisateur
//ENTREE : Trois variables, X, Y, Z
//SORTIE : /
{
	this->m_fltX = flt_X;
	this->m_fltY = flt_X;
	this->m_fltZ = flt_Z;
}
*/


//69 : b
CVecteur3d::CVecteur3d(float flt_X, float flt_Y, float flt_Z)
//BUT : Constructeur avec des arguments optionnels
//ENTREE : Trois variable, X, Y, Z, qui sont égales à 0 si l'utilisateur n'entre pas de valeurs
//SORTIE : /
{
	this->m_fltX = flt_X;
	this->m_fltY = flt_X;
	this->m_fltZ = flt_Z;
}


/*
//69 : c
CVecteur3d::CVecteur3d(float flt_X, float flt_Y, float flt_Z) : m_fltX(flt_X), m_fltY(flt_Y), m_fltZ(flt_Z)
//BUT : Constructeur sur une seule ligne
//ENTREE : Trois variable, X, Y, Z, qui sont égales à 0 si l'utilisateur n'entre pas de valeurs
//SORTIE : /
{

}
*/


//Fonctions membres

//Exercice 70 : a
void CVecteur3d::coincide(CVecteur3d vec_X) const
//BUT : Vérifier si deux Vecteurs sont égaux
//ENTREE : Un Vecteur (transimission par valeur)
//SORTIE : /
{
	if (this->m_fltX == vec_X.m_fltX && this->m_fltY == vec_X.m_fltY && this->m_fltZ == vec_X.m_fltZ)
	{
		cout << "Les deux vecteurs sont egaux" << endl;
	}
	else {
		cout << "Les deux vecteurs ne sont pas egaux" << endl;
	}
}

//70 : b
void CVecteur3d::coincideA(CVecteur3d *vec_X) const
//BUT : Vérifier si deux Vecteurs sont égaux
//ENTREE : Un Vecteur (transimission par adresse)
//SORTIE : /
{
	if (this->m_fltX == vec_X->m_fltX && this->m_fltY == vec_X->m_fltY && this->m_fltZ == vec_X->m_fltZ)
	{
		cout << "Les deux vecteurs sont egaux" << endl;
	}
	else {
		cout << "Les deux vecteurs ne sont pas egaux" << endl;
	}
}

//70 : c
void CVecteur3d::coincideR(CVecteur3d &vec_X) const
//BUT : Vérifier si deux Vecteurs sont égaux
//ENTREE : Un Vecteur (transimission par référence)
//SORTIE : /
{
	if (this->m_fltX == vec_X.m_fltX && this->m_fltY == vec_X.m_fltY && this->m_fltZ == vec_X.m_fltZ)
	{
		cout << "Les deux vecteurs sont egaux" << endl;
	}
	else {
		cout << "Les deux vecteurs ne sont pas egaux" << endl;
	}
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