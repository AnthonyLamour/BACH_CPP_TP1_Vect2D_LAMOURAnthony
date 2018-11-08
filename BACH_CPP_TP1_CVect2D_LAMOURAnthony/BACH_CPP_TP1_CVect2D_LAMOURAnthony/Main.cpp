//********************************************************************************************************************************************************************************
//
// fichier : Main.cpp
//
// class : main
//
//********************************************************************************************************************************************************************************
//08-11-2018 LAMOUR Anthony
//08-11-2018 LAMOUR Anthony
//********************************************************************************************************************************************************************************

#include <iostream>
//bibliothèque donnant accès à la classe string et ses fonctions
#include <string>
//bibliothèque contenant des fonctions sur le type string
#include<string.h>
//Class CVetc2D
#include "CVect2D.h"

int main() {

	float fltAlpha;
	float fltRes;
	CPoint2D CPtA;
	CPoint2D CPtB;

	CPtA.setPtX(2.0);
	CPtA.setPtY(0.0);

	CPtB.setPtX(4.0);
	CPtB.setPtY(0.0);

	//utilisation des  constructeurs
		CVect2D CVectMonVectSansParametre;
		CVect2D CVectMonVectAvecParametre(2.0,2.0);
		CVect2D CVectMonRes;
		//CVect2D CVectMonVectAvecParametreParDefaut(2.0);

		std::cout << "Sans Parametre :  x:  " << CVectMonVectSansParametre.getVectX() << "  y: " << CVectMonVectSansParametre.getVectY() << std::endl;
		std::cout << "Avec Parametre :  x:  " << CVectMonVectAvecParametre.getVectX() << "  y: " << CVectMonVectAvecParametre.getVectY() << std::endl;
		//std::cout << "Avec Parametre par defaut :  x:  " << CVectMonVectAvecParametreParDefaut.getVectX() << "  y: " << CVectMonVectAvecParametreParDefaut.getVectY() << std::endl;

	
	//addition
		CVectMonRes = CVectMonVectSansParametre.additionDeVecteur(CVectMonVectAvecParametre);
		std::cout << "addition :  x:  " << CVectMonRes.getVectX() << "  y: " << CVectMonRes.getVectY() << std::endl;

	//soustraction
		CVectMonRes = CVectMonVectSansParametre.soustractionDeVecteur(CVectMonVectAvecParametre);
		std::cout << "soustraction :  x:  " << CVectMonRes.getVectX() << "  y: " << CVectMonRes.getVectY() << std::endl;

	//scalaireReel
		std::cout << "Entrer Alpha :" << std::endl;
		std::cin >> fltAlpha;
		CVectMonRes = CVectMonVectSansParametre.scalaireReel(fltAlpha);
		std::cout << "scalaire reel :  x:  " << CVectMonRes.getVectX() << "  y: " << CVectMonRes.getVectY() << std::endl;

	//sclaire de vecteurs
		fltRes = CVectMonVectSansParametre.scalaireVect(CVectMonVectAvecParametre);
		std::cout << "scalaire de vecteurs :  " << fltRes << std::endl;

	//norme
		fltRes = CVectMonVectSansParametre.norme(CPtA, CPtB);
		std::cout << "norme :  " << fltRes << std::endl;

		system("pause");

	return 0;

}