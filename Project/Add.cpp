#include "Add.h"

void AddMedicine::add_med()
{
	string  add_Id, add_name, add_symp, add_ing, add_manf;
	ofstream write_stream; // stream for wrinting into file
	write_stream.open("data.txt", std::ios::app);//Append to file
	if (write_stream.fail())
	{
		cout << "File open failed.\n";
		exit(1);
	}
	cin.ignore();
	cout << "\033[2J\033[1;1H" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << "\nEnter Medicine Id: ";
	getline(cin, add_Id);
	cout << "\nEnter Name of medicine: ";
	getline(cin, add_name);//get input from the user
	cout << "\nEnter symptoms: ";
	getline(cin, add_symp);
	cout << "\nEnter ingredient: ";
	getline(cin, add_ing);
	cout << "\nEnter manufacturer: ";
	getline(cin, add_manf);
	cout << "--------------------------------------------------------------------------------" << endl;
	//writing to file
	write_stream
		<< add_Id << ","
		<< add_name << ","
		<< add_symp << ","
		<< add_ing << ","
		<< add_manf << "\n";
	cout << "\033[2J\033[1;1H" << endl;
	cout << "\nMedicine is added to the records!!!.\n";
}


