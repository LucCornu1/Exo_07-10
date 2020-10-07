#include "CVecteur3d.h"
#include <iostream>

using namespace std;

int main()
{
	//Exercice 69
	CVecteur3d V3d1;

	CVecteur3d V3d2(10, 10, 10);

	cout << "Vecteur 1 : " << V3d1.get_fltX() << " ; " << V3d1.get_fltY() << " ; " << V3d1.get_fltZ() << endl;

	cout << "Vecteur 2 : " << V3d2.get_fltX() << " ; " << V3d2.get_fltY() << " ; " << V3d2.get_fltZ() << endl;

	cout << endl;


	//Exercice 70 : a
	cout << "Verification entre les Vecteurs 1 et 2 : " << endl;
	V3d1.coincide(V3d2);

	cout << endl;

	CVecteur3d V3d3(10, 10, 10);
	cout << "Vecteur 3 : " << V3d3.get_fltX() << " ; " << V3d3.get_fltY() << " ; " << V3d3.get_fltZ() << endl;

	cout << endl;

	cout << "Verification entre les Vecteurs 2 et 3 : " << endl;
	V3d3.coincide(V3d2);

	cout << endl;


	//Exercice 70 : b
	CVecteur3d V3d4(10, 10, 10);
	cout << "Vecteur 4 : " << V3d4.get_fltX() << " ; " << V3d4.get_fltY() << " ; " << V3d4.get_fltZ() << endl;

	cout << endl;

	cout << "Verification entre les Vecteurs 1 et 4 : " << endl;
	V3d1.coincideA(&V3d4);

	cout << endl;

	cout << "Verification entre les Vecteurs 2 et 4 : " << endl;
	V3d2.coincideA(&V3d4);

	cout << endl;


	//Exercice 70 : c
	CVecteur3d V3d5(10, 10, 10);
	cout << "Vecteur 5 : " << V3d5.get_fltX() << " ; " << V3d5.get_fltY() << " ; " << V3d5.get_fltZ() << endl;

	cout << endl;

	cout << "Verification entre les Vecteurs 1 et 5 : " << endl;
	V3d1.coincideR(V3d5);

	cout << endl;

	cout << "Verification entre les Vecteurs 2 et 5 : " << endl;
	V3d2.coincideR(V3d5);

	cout << endl;

	return 0;
}