#pragma once
#include <math.h>
#include "CPoint2D.h"

class CVect2D {

	//donnee membre
private:
	float fltX;
	float fltY;

	//focntion membre
public:

	//mutateur et assesseur
		float getVectX()const;
		void setVectX(float fltX);
		float getVectY()const;
		void setVectY(float fltY);

	//constructeur sans paramètre
		CVect2D();
	//constructeur avec paramètre par défaut
		//CVect2D(float fltY = 15.0);
	//constructeur  avec paramètre
		CVect2D(float fltX,float fltY);

	//destructeur
		~CVect2D();

	//addition de vecteur
		CVect2D additionDeVecteur(CVect2D CVect);
	//soustraction de vecteur
		CVect2D soustractionDeVecteur(CVect2D CVect);
	//porduit scalaire Reel
		CVect2D scalaireReel(float fltAlpha);
	//porduit scalaire Vecteur
		float scalaireVect(CVect2D CVect);
	//norme
		float norme(CPoint2D CPtDebut, CPoint2D CPtFin);
};