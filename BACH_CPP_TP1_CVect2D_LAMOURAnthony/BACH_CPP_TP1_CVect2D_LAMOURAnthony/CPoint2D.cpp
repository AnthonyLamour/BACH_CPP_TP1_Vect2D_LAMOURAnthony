#include "CPoint2D.h"

//mutatuer et assesseur
	float CPoint2D::getPtX() const
	{
		return this->fltX;
	}

	void CPoint2D::setPtX(float fltX)
	{
		this->fltX = fltX;
	}

	float CPoint2D::getPtY() const
	{
		return this->fltX;
	}

	void CPoint2D::setPtY(float fltY)
	{
		this->fltX = fltY;
	}

	CPoint2D::CPoint2D()
	{
		this->fltX = 0.0;
		this->fltY = 0.0;
	}

	CPoint2D::~CPoint2D()
	{
	}
