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


	//Assesseurs
	float get_fltX() const;
	float get_fltY() const;
	float get_fltZ() const;

	//Mutateurs
	void set_fltX(float flt_X);
	void set_fltY(float flt_Y);
	void set_fltZ(float flt_Z);
};