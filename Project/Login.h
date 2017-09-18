#pragma once
#include<stdio.h>
#include <iostream>
#include<fstream>
#include <string>

using namespace std;
class ILogin {

public:
	virtual bool validateUser() = 0;//Check user information
};

//Real object
class Login :public ILogin {
	bool validateUser();
};


class User {

private:
	string userName;
	string pass;

public:
	const string getUserName() const;

	const string getPassword() const;
	User(string uName, string pass);

};



//Proxy class for login
class proxyLogin :public ILogin
{
private:
	User *u;
	ILogin *login;

public:
	proxyLogin(User *u);
	bool validateUser();



};

