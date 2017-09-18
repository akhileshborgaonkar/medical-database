#pragma once
#include"IDelete.h"
#include<stdio.h>
#include <iostream>
#include<fstream>
#include <string>

using namespace std;

class deleteByName :public IDelete {


	void deleteMedicine();
};

class deleteByID :public IDelete {


	void deleteMedicine();
};
