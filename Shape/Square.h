#pragma once
#include "Piramidable.h"
#include "Prismable.h"
class Square :
	public Piramidable,
	public Prismable
{
public:
	Square();
	~Square();
};



Square::Square()
{
}


Square::~Square()
{
}
