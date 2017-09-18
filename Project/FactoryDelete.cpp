#include "FactoryDelete.h"

IDelete * FactoryDelete::getDeleteCriteria(int ch)
{
	IDelete *objDel;
	if (ch == 7)
	{
		objDel = new deleteByID();

	}
	else if (ch == 8)
	{
		objDel = new deleteByName();

	}
	else
	{

		return nullptr;
	}
	return objDel;
}
