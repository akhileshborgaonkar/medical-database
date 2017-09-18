#pragma once
#include"Search.h"
class Chain
{
	// Defines the next Object to receive the data
	// if this Object can't process it

public:
	virtual void setNextChain(Chain *nextChain) = 0;
	virtual void searchInvoker(string key) = 0;

};
class SearchById : public Chain
{
private:
	SearchMedicine sm;
	Chain *nextInChain;

	// Defines the next Object to receive the
	// data if this one can't use it
public:
	void setNextChain(Chain *nextChain);


	// Tries to calculate the data, or passes it
	// to the Object defined in method setNextChain()
	void searchInvoker(string key);

};
class SearchByMedicineName : public Chain
{
private:
	SearchMedicine sm;
	Chain *nextInChain;

	// Defines the next Object to receive the
	// data if this one can't use it
public:
	void setNextChain(Chain *nextChain);


	// Tries to calculate the data, or passes it
	// to the Object defined in method setNextChain()
	void searchInvoker(string key);

};

class SearchBySymptomName : public Chain
{
private:
	SearchMedicine sm;
	Chain *nextInChain;

	// Defines the next Object to receive the
	// data if this one can't use it
public:
	void setNextChain(Chain *nextChain);


	// Tries to calculate the data, or passes it
	// to the Object defined in method setNextChain()
	void searchInvoker(string key);

};

class SearchByIngredientName : public Chain
{
private:
	SearchMedicine sm;
	Chain *nextInChain;

	// Defines the next Object to receive the
	// data if this one can't use it
public:
	void setNextChain(Chain *nextChain);


	// Tries to calculate the data, or passes it
	// to the Object defined in method setNextChain()
	void searchInvoker(string key);

};

class SearchByManfName : public Chain
{
private:
	SearchMedicine sm;
	Chain *nextInChain;

	// Defines the next Object to receive the
	// data if this one can't use it
public:
	void setNextChain(Chain *nextChain);


	// Tries to calculate the data, or passes it
	// to the Object defined in method setNextChain()
	void searchInvoker(string key);

};
