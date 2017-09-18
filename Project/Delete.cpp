#include "Delete.h"

void deleteByName::deleteMedicine()
{
	string med_Id, med_name, symptom, ingredient, manf, key;
	int x = 0; // x - "counter" to check if user entered wrong name

	ifstream read_stream("data.txt");
	ofstream temp("temp.txt"); // temp file for input except the one user wants to delete

	cin.ignore();
	cout << "\033[2J\033[1;1H" << endl;
	cout << "\nEnter name of the medicine you want to erase from database >" << endl;
	getline(cin, key);

	while (true)
	{
		//(read_stream >> med_Id >> med_name >> symptom >> ingredient >> manf);
		getline(read_stream, med_Id, ',');
		getline(read_stream, med_name, ',');
		getline(read_stream, symptom, ',');
		getline(read_stream, ingredient, ',');
		getline(read_stream, manf, '\n');
		if (read_stream.eof())break;

		if (key != med_name) { // if there are medicines with different name, input their data into temp file
			temp << med_Id << ',' << med_name << ',' << symptom << ',' << ingredient << ',' << manf << '\n';
		}
		if (key == med_name) { // if user entered correct name, x=1 for later output message that the user data has been deleted
			x = 1;
		}
	}

	read_stream.clear(); // clear eof and fail bits
	read_stream.seekg(0, ios::beg);
	read_stream.close();
	temp.close();
	remove("data.txt");
	rename("temp.txt", "data.txt");

	if (x == 0) {
		cout << "\033[2J\033[1;1H" << endl;
		cout << "\nThere is no medicine with name you entered...!!!" << endl;
	}
	else {
		cout << "\033[2J\033[1;1H" << endl;
		cout << "\nMedicine data has been deleted...!!!" << endl;
	}


}

void deleteByID::deleteMedicine()
{
	string med_Id, med_name, symptom, ingredient, manf, key;
	int x = 0; // x - "counter" to check if user entered wrong id

	ifstream read_stream("data.txt");
	ofstream temp("temp.txt"); // temp file for input except the one user wants to delete

	cin.ignore();
	cout << "\033[2J\033[1;1H" << endl;
	cout << "\nEnter the ID of the medicine you want to erase from database >" << endl;
	getline(cin, key);

	while (true)
	{
		getline(read_stream, med_Id, ',');
		getline(read_stream, med_name, ',');
		getline(read_stream, symptom, ',');
		getline(read_stream, ingredient, ',');
		getline(read_stream, manf, '\n');
		if (read_stream.eof())break;

		if (key != med_Id) { // if there are medicines with different id, input their data into temp file
			temp << med_Id << ',' << med_name << ',' << symptom << ',' << ingredient << ',' << manf << '\n';
		}
		if (key == med_Id) { // if user entered correct id, x=1 for later output message that the user data has been deleted
			x = 1;
		}
	}

	read_stream.clear(); // clear eof and fail bits
	read_stream.seekg(0, ios::beg);
	read_stream.close();
	temp.close();
	remove("data.txt");
	rename("temp.txt", "data.txt");

	if (x == 0) {
		cout << "\033[2J\033[1;1H" << endl;
		cout << "\nThere is no medicine with the ID you have entered...!!!" << endl;
	}
	else {
		cout << "\033[2J\033[1;1H" << endl;
		cout << "\nMedicine data has been deleted...!!!" << endl;
	}

}
