#include <iostream>
#include <string>

using namespace std;

int main()
{ 
string username;
string password;

cout<< "Enter your username: "<< endl;
getline(cin, username);
 cout << "Enter your password:  "<< endl;
 getline(cin, password);
  	if (username == "Benson" && password == "Benson@123")
	{
		cout <<"Acess allowed" << endl;
	}
	else
	{
	cout << " WRONG USERNAME OR PASSWORD . TRY AGAIN !"<< endl ;
	}
}
