#include <iostream>
#include <string>

using namespace std;

int main() {

    string username;
    string password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if ((username == "test") && (password == "123")) {
        system("CLS");
        cout << "login successful" << endl;
    }
    else {
        system("CLS");
        cout << "login unsuccessful, please try again" << endl;
    }

    system("PAUSE");

    return 0;
}
