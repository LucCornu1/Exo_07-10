#include "CVecteur3d.h"
#include <iostream>

using namespace std;

int main()
{
	//Exercice 69 : a et b
	CVecteur3d V3d1;

	CVecteur3d V3d2(10, 10, 10);

	cout << "Vecteur 1 : " << V3d1.get_fltX() << " ; " << V3d1.get_fltY() << " ; " << V3d1.get_fltZ() << endl;

	cout << "Vecteur 2 : " << V3d2.get_fltX() << " ; " << V3d2.get_fltY() << " ; " << V3d2.get_fltZ() << endl;

	return 0;
}