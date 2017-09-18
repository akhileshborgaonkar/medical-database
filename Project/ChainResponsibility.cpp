#include "ChainResponsibility.h"

void SearchById::setNextChain(Chain * nextChain)
{
	//Setting the object which is next in chain
	nextInChain = nextChain;
}

void SearchById::searchInvoker(string key)
{
	if (key == "id") //check if token is meant for current class object
	{
		sm.searchByMedicineId();
	}
	else
	{
		nextInChain->searchInvoker(key);
	}
}

void SearchByMedicineName::setNextChain(Chain * nextChain)
{
	nextInChain = nextChain;
}

void SearchByMedicineName::searchInvoker(string key)
{
	if (key == "name")
	{
		sm.searchByMedicineName();
	}
	else
	{
		nextInChain->searchInvoker(key);
	}
}

void SearchBySymptomName::setNextChain(Chain * nextChain)
{
	nextInChain = nextChain;
}

void SearchBySymptomName::searchInvoker(string key)
{
	if (key == "symptom")
	{
		sm.searchBySymptom();
	}
	else
	{
		nextInChain->searchInvoker(key);
	}
}

void SearchByIngredientName::setNextChain(Chain * nextChain)
{
	nextInChain = nextChain;
}

void SearchByIngredientName::searchInvoker(string key)
{
	if (key == "ingredient")
	{
		sm.searchByIngredient();
	}
	else
	{
		nextInChain->searchInvoker(key);
	}
}

void SearchByManfName::setNextChain(Chain * nextChain)
{
	nextInChain = nextChain;
}

void SearchByManfName::searchInvoker(string key)
{
	if (key == "manufacturer")
	{
		sm.searchByManufacturer();
	}
	else
	{
		nextInChain->searchInvoker(key);
	}
}
