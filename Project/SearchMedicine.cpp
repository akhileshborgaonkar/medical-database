#include"Search.h"
void SearchMedicine::searchByMedicineId()
{
	int flag = 0;

	sr.open("data.txt");
	string med_Id, med_name, symptom, ingredient, manufacturer, key;
	if (sr.fail())
	{
		cout << "File open failed.\n";
		exit(1);
	}
	cin.ignore();
	cout << "Enter Id of Medicine you are searching for: ";
	getline(cin, key);
	while (true)
	{
		getline(sr, med_Id, ',');
		getline(sr, med_name, ',');
		getline(sr, symptom, ',');
		getline(sr, ingredient, ',');
		getline(sr, manufacturer, '\n');
		if (sr.eof()) break;

		if (key == med_Id)
		{
			flag = 1;
			cout << "\033[2J\033[1;1H" << "\t\t\t\t\tResults" << endl;
			break;
		}

		else
			flag = 0;
	}
	if (flag == 1)
	{
		
		cout << "--------------------------------------------------------------------------------" << endl;
		cout << "\t\t\t\tMedicine Id: " << med_Id << "\n\t\t\t\tMedicine Name: " << med_name << "\n\t\t\t\tSymptoms: " << symptom << "\n\t\t\t\tIngredients: " << ingredient << "\n\t\t\t\tManufacturer: " << manufacturer << endl;
		cout << "--------------------------------------------------------------------------------" << endl;
	}
	else
	{
		cout << "\033[2J\033[1;1H";
		cout << "\n Medicine Not Found...!!!" << endl;
	}
	sr.close();


}




void SearchMedicine::searchByMedicineName()
{
	int flag = 0;

	sr.open("data.txt");
	string med_Id, med_name, symptom, ingredient, manufacturer, key;
	if (sr.fail())
	{
		cout << "File open failed.\n";
		exit(1);
	}
	cin.ignore();
	cout << "Enter Name of Medicine you are searching for: ";
	getline(cin, key);
	while (true)
	{
		getline(sr, med_Id, ',');
		getline(sr, med_name, ',');
		getline(sr, symptom, ',');
		getline(sr, ingredient, ',');
		getline(sr, manufacturer, '\n');
		if (sr.eof()) break;
		if (key == med_name)
		{
			flag = 1;
			cout << "\033[2J\033[1;1H" << "\t\t\t\t\tResults" << endl;
			break;
		}

		else
			flag = 0;
	}
	if (flag == 1)
	{
		cout << "--------------------------------------------------------------------------------" << endl;
		cout << "\t\t\t\tMedicine Id: " << med_Id << "\n\t\t\t\tMedicine Name: " << med_name << "\n\t\t\t\tSymptoms: " << symptom << "\n\t\t\t\tIngredients: " << ingredient << "\n\t\t\t\tManufacturer: " << manufacturer << endl;
		cout << "--------------------------------------------------------------------------------" << endl;
	}
	else
	{
		cout << "\033[2J\033[1;1H" << "\t\t\t\t\tResults" << endl;
		cout << "\n Medicine Not Found...!!!" << endl;
	}
	sr.close();


}

void SearchMedicine::searchBySymptom()
{
	int flag = 1;

	sr.open("data.txt");
	string med_Id, med_name, symptom, ingredient, manufacturer, key;
	if (sr.fail())
	{
		cout << "File open failed.\n";
		exit(1);
	}
	cin.ignore();
	cout << "Enter Name of Symptom you are searching for: ";
	getline(cin, key);
	while (true)
	{
		getline(sr, med_Id, ',');
		getline(sr, med_name, ',');
		getline(sr, symptom, ',');
		getline(sr, ingredient, ',');
		getline(sr, manufacturer, '\n');
		if (sr.eof()) break;
		if (key == symptom)
		{
			cout << "\033[2J\033[1;1H" << "\t\t\t\t\tResults" << endl;
			cout << "--------------------------------------------------------------------------------" << endl;
			cout << "\t\t\t\tMedicine Id: " << med_Id << "\n\t\t\t\tMedicine Name: " << med_name << "\n\t\t\t\tSymptoms: " << symptom << "\n\t\t\t\tIngredients: " << ingredient << "\n\t\t\t\tManufacturer: " << manufacturer << endl;
			cout << "--------------------------------------------------------------------------------" << endl;
			flag = 0;
		}

	}
	if (flag != 0)
	{
		cout << "\033[2J\033[1;1H" << "\t\t\t\t\tResults" << endl;
		cout << "\n Medicine Not Found...!!!" << endl;
	}
	sr.close();
}

void SearchMedicine::searchByIngredient()
{
	int flag = 1;

	sr.open("data.txt");
	string med_Id, med_name, symptom, ingredient, manufacturer, key;
	if (sr.fail())
	{
		cout << "File open failed.\n";
		exit(1);
	}
	cin.ignore();
	cout << "Enter Name of Ingredient you are searching for: ";
	getline(cin, key);
	while (true)
	{
		getline(sr, med_Id, ',');
		getline(sr, med_name, ',');
		getline(sr, symptom, ',');
		getline(sr, ingredient, ',');
		getline(sr, manufacturer, '\n');
		if (sr.eof()) break;
		if (key == ingredient)
		{
			cout << "\033[2J\033[1;1H" << "\t\t\t\t\tResults" << endl;
			cout << "--------------------------------------------------------------------------------" << endl;
			cout << "\t\t\t\tMedicine Id: " << med_Id << "\n\t\t\t\tMedicine Name: " << med_name << "\n\t\t\t\tSymptoms: " << symptom << "\n\t\t\t\tIngredients: " << ingredient << "\n\t\t\t\tManufacturer: " << manufacturer << endl;
			cout << "--------------------------------------------------------------------------------" << endl;
			flag = 0;
		}



	}
	if (flag != 0)
	{
		cout << "\033[2J\033[1;1H" << "\t\t\t\t\tResults" << endl;
		cout << "\n Medicine Not Found...!!!" << endl;
	}

	sr.close();
}

void SearchMedicine::searchByManufacturer()
{
	int flag = 1;

	sr.open("data.txt");
	string med_Id, med_name, symptom, ingredient, manufacturer, key;
	if (sr.fail())
	{
		cout << "File open failed.\n";
		exit(1);
	}
	cin.ignore();
	cout << "Enter Name of Manufacturer you are searching for: ";
	getline(cin, key);
	while (true)
	{
		getline(sr, med_Id, ',');
		getline(sr, med_name, ',');
		getline(sr, symptom, ',');
		getline(sr, ingredient, ',');
		getline(sr, manufacturer, '\n');
		if (sr.eof()) break;
		if (key == manufacturer)
		{
			cout << "\033[2J\033[1;1H" << "\t\t\t\t\tResults" << endl;
			cout << "--------------------------------------------------------------------------------" << endl;
			cout << "\t\t\t\tMedicine Id: " << med_Id << "\n\t\t\t\tMedicine Name: " << med_name << "\n\t\t\t\tSymptoms: " << symptom << "\n\t\t\t\tIngredients: " << ingredient << "\n\t\t\t\tManufacturer: " << manufacturer << endl;
			cout << "--------------------------------------------------------------------------------" << endl;
			flag = 0;
		}

	}
	if (flag != 0)
	{
		cout << "\033[2J\033[1;1H" << "\t\t\t\t\tResults" << endl;
		cout << "\n Medicine Not Found...!!!" << endl;
	}
	sr.close();
}