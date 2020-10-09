#pragma once


class CVecteur3d
{
private:
	float m_fltX, m_fltY, m_fltZ;


public:
	//Fonctions membres

	//Exercice 69 :	a
	/*CVecteur3d();

	CVecteur3d(float X, float Y, float Z);*/


	/*
	//69 : b
	CVecteur3d(float X = 0.0, float Y = 0.0, float Z = 0.0);
	*/


	//69 : c
	CVecteur3d(float X = 0.0, float Y = 0.0, float Z = 0.0);


	//Fonction membres

	//Exercice 70 : a
	void coincide(CVecteur3d) const;

	//70 : b
	void coincideA(CVecteur3d*) const;

	//70 : c
	void coincideR(CVecteur3d&) const;

	//Exercice 71 : a
	CVecteur3d* normax(CVecteur3d);

	//71 : b
	CVecteur3d* normaxA(CVecteur3d*);

	//72 : c
	CVecteur3d* normaxR(CVecteur3d&);

	//Assesseurs
	float get_fltX() const;
	float get_fltY() const;
	float get_fltZ() const;

	//Mutateurs
	void set_fltX(float flt_X);
	void set_fltY(float flt_Y);
	void set_fltZ(float flt_Z);
};