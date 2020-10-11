#pragma once


class CPoint
{
private :
	float m_fltX, m_fltY, m_fltZ;

	static int m_nCompt;

public:
	//Constructeur
	CPoint();

	//Destructeur
	~CPoint();


	//Fonctions membres
	int nombre();
};