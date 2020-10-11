#include "CVecteur3d.h"
#include <iostream>

using namespace std;

int main()
{
	/*
	//Exercice 69
	cout << "Exercice 69" << endl;
	CVecteur3d V3d1;

	CVecteur3d V3d2(10, 10, 10);

	cout << "Vecteur 1 : " << V3d1.get_fltX() << " ; " << V3d1.get_fltY() << " ; " << V3d1.get_fltZ() << endl;

	cout << "Vecteur 2 : " << V3d2.get_fltX() << " ; " << V3d2.get_fltY() << " ; " << V3d2.get_fltZ() << endl;

	cout << endl;


	//Exercice 70 : a
	cout << "Exercice 70 : a" << endl;

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
	cout << "Exercice 70 : b" << endl;

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
	cout << "Exercice 70 : c" << endl;

	CVecteur3d V3d5(10, 10, 10);
	cout << "Vecteur 5 : " << V3d5.get_fltX() << " ; " << V3d5.get_fltY() << " ; " << V3d5.get_fltZ() << endl;

	cout << endl;

	cout << "Verification entre les Vecteurs 1 et 5 : " << endl;
	V3d1.coincideR(V3d5);

	cout << endl;

	cout << "Verification entre les Vecteurs 2 et 5 : " << endl;
	V3d2.coincideR(V3d5);

	cout << endl;


	//Exercice 71 : a
	cout << "Exercice 71 : a" << endl;

	CVecteur3d V3d6(146, 0, 189);

	CVecteur3d* Vec_Max = V3d2.normax(V3d6);

	cout << "Le plus grand vecteur entre le vecteur 6 et le vecteur 2 est le vecteur : " << endl;
	cout << "X : " << Vec_Max->get_fltX() << endl;
	cout << "Y : " << Vec_Max->get_fltY() << endl;
	cout << "Z : " << Vec_Max->get_fltZ() << endl;

	cout << endl;

	//71 : b
	cout << "Exercice 71 : b" << endl;

	Vec_Max = V3d2.normaxA(&V3d6);

	cout << "Le plus grand vecteur entre le vecteur 6 et le vecteur 2 est le vecteur : " << endl;
	cout << "X : " << Vec_Max->get_fltX() << endl;
	cout << "Y : " << Vec_Max->get_fltY() << endl;
	cout << "Z : " << Vec_Max->get_fltZ() << endl;

	cout << endl;

	//71 : c
	cout << "Exercice 71 : c" << endl;

	Vec_Max = V3d2.normaxR(V3d6);

	cout << "Le plus grand vecteur entre le vecteur 6 et le vecteur 2 est le vecteur : " << endl;
	cout << "X : " << Vec_Max->get_fltX() << endl;
	cout << "Y : " << Vec_Max->get_fltY() << endl;
	cout << "Z : " << Vec_Max->get_fltZ() << endl;

	*/


	//Exercice 72
	CVecteur3d Vec3d_0;

	CVecteur3d Vec3d_1(10, 10, 10);

	CVecteur3d Vec3d_2(5, 10, 15);


	//Affichage des composantes d'un vecteur
	Vec3d_0.affichage();
	Vec3d_1.affichage();
	Vec3d_2.affichage();

	cout << endl;


	//Somme de deux vecteurs :
	CVecteur3d Vec3d_3;

	Vec3d_3 = Vec3d_1.sommeVec(Vec3d_2);
	
	Vec3d_3.affichage();

	cout << endl;


	//Produit scalaire
	float flt_Scalaire;

	flt_Scalaire = Vec3d_1.produitScalaire(Vec3d_2);

	cout << "Scalaire des vecteurs 1 et 2 : " << flt_Scalaire << endl;



	return 0;
}