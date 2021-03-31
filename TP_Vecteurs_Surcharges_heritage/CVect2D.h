#pragma once
#include <iostream>

using namespace std;


class CVect2D {



	//donn�es membres :

	float m_flt_x;
	float m_flt_y;

protected :

public :

	//constructeur :
	CVect2D(float flt_x=0, float flt_y=0);
	
	
	//constructeur de copie :
	CVect2D(CVect2D&);


	//destructeur :
	~CVect2D();


	//asseceurs :
	float getX()const;
	float getY()const;


	//mutateurs :
	void setX(float flt_x);
	void setY(float flt_y);



	//methodes :

		//operateurs usuelles
			
			CVect2D operator=(const CVect2D&);
		
			//BUT :faire la somme des deux vecteurs
			//ENTREE:ref instance CVect2D
			//SORTIE :nouvelle instance CVect2D
			//CVect2D addition(CVect2D&)const;
			CVect2D operator+(CVect2D&);

			//BUT :faire la soustraction des deux vecteurs
			//ENTREE:ref instance CVect2D
			//SORTIE :nouvelle instance CVect2D
			CVect2D operator-(CVect2D&);

			//BUT :faire la multiplication des deux vecteurs
			//ENTREE:ref instance CVect2D
			//SORTIE :nouvelle instance CVect2D
			CVect2D operator*(CVect2D&);


		//autres :
			//BUT :comparer les coordonn�es des vecteurs et voir s'ils sont les m�mes
			//ENTREE: 2 refs instance CVect2D
			//SORTIE : valeur booleen
			friend bool coincide2D(CVect2D&, CVect2D&);

			//BUT :afficher les coords x et y du vecteur
			//ENTREE: ras
			//SORTIE : ras
			void affiche();








};
