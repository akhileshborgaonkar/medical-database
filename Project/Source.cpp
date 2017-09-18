#include <iostream>
#include <string>
#include <fstream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
#include "Search.h"
#include "Add.h"
#include "Delete.h"
#include "Login.h"
#include "FactoryDelete.h"
#include "ChainResponsibility.h"

using namespace std;

void main()
{
	system("COLOR F1"); // change color of the console
	fstream mystream;
	int choice = 0;
	AddMedicine am;
	IDelete *del;
	string med_Id, med_name, symptom, ingredient, manf, key, uname, pass;
	char c = NULL;
	int StarNum = 0;

	//Chain of resposibility design pattern for searching the medcine information

	Chain *chainSearchById = new SearchById();
	Chain *chainSearchByName = new SearchByMedicineName();
	Chain *chainSearchBySymptom = new SearchBySymptomName();
	Chain *chainSearchByIngredient = new SearchByIngredientName();
	Chain *chainSearchByManufacturer = new SearchByManfName();

	// Here we tell each object where to forward the
	// data if it can't process the request
	chainSearchById->setNextChain(chainSearchByName);
	chainSearchByName->setNextChain(chainSearchBySymptom);
	chainSearchBySymptom->setNextChain(chainSearchByIngredient);
	chainSearchByIngredient->setNextChain(chainSearchByManufacturer);


	cout << setw(15) << "**********LOGIN**********" << endl;
	cout << left << setw(10) << "\nUser Name:";
	cin >> uname;
	cout << left << setw(10) << "\nEnter Pass:";

	//to display password in charcter '*' 
	while (c != 13)
	{
		c = (char)_getch();
		if (c == 13) break;
		StarNum++;
		pass += c;
		cout << "*";
	}
	cout << setw(15) << "\n*************************" << endl;


	//Proxy Design Pattern for Validating User Information
	ILogin *log = new proxyLogin(new User(uname, pass));
	bool val = log->validateUser();


	if (val) {
		while (choice != 9)
		{
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "\t\t\t\tWelcome to Medicinal Database\n";
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "\t\t\t\t1. Search by Id\n"
				<< "\t\t\t\t2. Search by name\n"
				<< "\t\t\t\t3. Search by symptom\n"
				<< "\t\t\t\t4. Search by ingredient\n"
				<< "\t\t\t\t5. Search by manufacturer\n"
				<< "\t\t\t\t6. Add Medicine\n"
				<< "\t\t\t\t7. Delete Medicine By ID\n"
				<< "\t\t\t\t8. Delete Medicine By Name\n"
				<< "\t\t\t\t9. Exit" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "\nEnter your choice: ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				key = "id";
				chainSearchById->searchInvoker(key);
				break;
			case 2:
				key = "name";
				chainSearchById->searchInvoker(key);
				break;
			case 3:
				key = "symptom";
				chainSearchById->searchInvoker(key);
				break;
			case 4:
				key = "ingredient";
				chainSearchById->searchInvoker(key);
				break;
			case 5:
				key = "manufacturer";
				chainSearchById->searchInvoker(key);
				break;
			case 6:
				am.add_med();
				break;
			case 7:
				//Factory Design Pattern for deleting the medicine information
				//getting obejct from factory based on specified criteria
				del = FactoryDelete::getDeleteCriteria(choice);
				del->deleteMedicine();
				break;
			case 8:
				del = FactoryDelete::getDeleteCriteria(choice);
				del->deleteMedicine();
				break;
				
			}
			
		}
	}
	else
	{
		cout << "\n Credentials Invalid Exiting...\n";
	}
}