#include "CVecteur3d.h"
#include <iostream>
#include <math.h>

using namespace std;


//Constructeurs

//Exercice 69 : a
/*
CVecteur3d::CVecteur3d()
//BUT : Constructeur par d�faut, initialise les trois coordonn�es � 0
//ENTREE : /
//SORTIE : /
{
	this->m_fltX = 0.0;
	this->m_fltY = 0.0;
	this->m_fltZ = 0.0;
}

CVecteur3d::CVecteur3d(float flt_X, float flt_Y, float flt_Z)
//BUT : Constructeur qui initialise trois coordonn�es en fonction des valeurs entr�es par l'utilisateur
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
//ENTREE : Trois variable, X, Y, Z, qui sont �gales � 0 si l'utilisateur n'entre pas de valeurs
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
//ENTREE : Trois variable, X, Y, Z, qui sont �gales � 0 si l'utilisateur n'entre pas de valeurs
//SORTIE : /
{

}
*/


//Fonctions membres

//Exercice 70 : a
void CVecteur3d::coincide(CVecteur3d vec_X) const
//BUT : V�rifier si deux Vecteurs sont �gaux
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
//BUT : V�rifier si deux Vecteurs sont �gaux
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
//BUT : V�rifier si deux Vecteurs sont �gaux
//ENTREE : Un Vecteur (transimission par r�f�rence)
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

//Exercice 71 : a
CVecteur3d* CVecteur3d::normax(CVecteur3d vec_X)
//BUT : Calculer la norme d'un vecteur
//ENTREE : Un vecteur � comparer
//SORTIE : Le plus grand vecteur
{
	float norm1, norm2;

	norm1 = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));

	norm2 = sqrt(pow(vec_X.m_fltX, 2) + pow(vec_X.m_fltY, 2) + pow(vec_X.m_fltZ, 2));

	//cout << norm1 << " ; " << norm2 << endl; //V�rification de la norme des vecteur

	if (norm1 >= norm2)
	{
		return this;
	}
	else {
		return &vec_X;
	}
}

//71 : b
CVecteur3d* CVecteur3d::normaxA(CVecteur3d* vec_X)
//BUT : Calculer la norme d'un vecteur
//ENTREE : Un vecteur � comparer (transmission par adresse)
//SORTIE : /
{
	float norm1, norm2;

	norm1 = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));

	norm2 = sqrt(pow(vec_X->m_fltX, 2) + pow(vec_X->m_fltY, 2) + pow(vec_X->m_fltZ, 2));

	cout << norm1 << " ; " << norm2 << endl; //V�rification de la norme des vecteur

	if (norm1 >= norm2)
	{
		return this;
	}
	else {
		return vec_X;
	}
}

//71 : c
CVecteur3d* CVecteur3d::normaxR(CVecteur3d& vec_X)
//BUT : Calculer la norme d'un vecteur
//ENTREE : Un vecteur � comparer (transmission par r�f�rence)
//SORTIE : /
{
	float norm1, norm2;

	norm1 = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));

	norm2 = sqrt(pow(vec_X.m_fltX, 2) + pow(vec_X.m_fltY, 2) + pow(vec_X.m_fltZ, 2));

	cout << norm1 << " ; " << norm2 << endl; //V�rification de la norme des vecteur

	if (norm1 >= norm2)
	{
		return this;
	}
	else {
		return &vec_X;
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