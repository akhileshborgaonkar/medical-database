#pragma once
#include<stdio.h>
#include <iostream>
#include<fstream>
#include <string>

using namespace std;
class SearchMedicine
{
public:
	fstream sr; //stream to read from file

   //Functions declaration
	void searchByMedicineId();
	void searchByMedicineName();
	void searchBySymptom();
	void searchByIngredient();
	void searchByManufacturer();
};



