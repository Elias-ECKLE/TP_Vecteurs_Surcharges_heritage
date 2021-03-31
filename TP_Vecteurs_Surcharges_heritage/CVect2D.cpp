#include "CVect2D.h"


//constructeur
CVect2D::CVect2D(float flt_x, float flt_y)
{
	this->m_flt_x=flt_x;
	this->m_flt_y=flt_y;
}

//constructeur de copie
CVect2D::CVect2D(CVect2D& c_v)
{
	this->m_flt_x=c_v.m_flt_x;
	this->m_flt_y=c_v.m_flt_y;
}

//destructeur
CVect2D::~CVect2D()
{
}


//asseceurs :
float CVect2D::getX()const
{
	return this->m_flt_x;
}

float CVect2D::getY()const
{
	return this->m_flt_y;
}


//mutateurs :
void CVect2D::setX(float flt_x)
{
	this->m_flt_x = flt_x;
}

void CVect2D::setY(float flt_y)
{
	this->m_flt_y = flt_y;
}




//operations usuelles :
CVect2D CVect2D::addition(CVect2D& c_v) const
{
	CVect2D c_vResultat;

	c_vResultat.m_flt_x = this->m_flt_x + c_v.m_flt_x;
	c_vResultat.m_flt_y = this->m_flt_y + c_v.m_flt_y;

	return c_vResultat;
}

CVect2D CVect2D::soustraction(CVect2D& c_v) const
{
	CVect2D c_vResultat;

	c_vResultat.m_flt_x = this->m_flt_x - c_v.m_flt_x;
	c_vResultat.m_flt_y = this->m_flt_y - c_v.m_flt_y;

	return c_vResultat;
}

CVect2D CVect2D::multiplication(CVect2D& c_v) const
{
	CVect2D c_vResultat;

	c_vResultat.m_flt_x = this->m_flt_x * c_v.m_flt_x;
	c_vResultat.m_flt_y = this->m_flt_y * c_v.m_flt_y;

	return c_vResultat;
}





//autres methodes :

bool coincide2D(CVect2D& c_v1, CVect2D& c_v2)
{
	if ((c_v1.m_flt_x==c_v2.m_flt_x)&&(c_v2.m_flt_x==c_v2.m_flt_y)) {

		return true;
	}
	else {

		return false;
	}
	
}

void CVect2D::affiche()
{
	cout << "Coordonnee X du vecteur : "<<this->m_flt_x << endl;
	cout << "Coordonnee Y du vecteur : "<<this->m_flt_y << endl;
}