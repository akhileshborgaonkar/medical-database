#include"Login.h"
#include<fstream>

bool Login::validateUser()
{
	cout << "Login Sucessful...!!!" << endl;
	return true;
}

const string User::getUserName() const
{
	return userName;
}

const string User::getPassword() const
{
	return pass;
}

User::User(string uName, string pass)
{
	this->userName = uName;
	this->pass = pass;
}

proxyLogin::proxyLogin(User * u)
{
	this->u = u;
	login = new Login();
}

//Method to validate user information
bool proxyLogin::validateUser()
{
	fstream loginFileReader; // stream to read from file
	string user, pass;
	bool flag = false;
	loginFileReader.open("login.txt");
	if (loginFileReader.fail())
	{
		cout << "File open failed.\n";
		exit(1);
	}

	//search while EOF
	while (!loginFileReader.eof())
	{
		loginFileReader >> user
			>> pass;

		if (u->getUserName() == user && u->getPassword() == pass)
		{
			flag = true;
			login->validateUser();
			break;
		}

	}

	return flag;
}
