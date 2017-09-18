#pragma once

#include<stdio.h>
#include <iostream>
#include <string>
#include"IDelete.h"
#include "Delete.h"

using namespace std;

class FactoryDelete {

public:
	static IDelete *getDeleteCriteria(int ch); //get the delete criteria for deleting the record
};