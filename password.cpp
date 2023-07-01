#include <iostream>
#include <string>

using namespace std;

int main()
{
    string password;

    cout << "Enter your password: " << endl;
    getline(cin, password);

    if (password == "benson123")
    {
        cout << "Access allowed" << endl;
    }
    else
    {
        cout << "Bad password. Try again!" << endl;
    }

    return 0;
}
