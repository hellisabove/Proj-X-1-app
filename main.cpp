#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Welcome to Project X-1" << endl;
    cout << "Please enter Credentials: ";
    string name;
    cin >> name;
CRED:

    cout << "Choose what you want to do: " << endl;
    cout << "[1] About Us" << endl << "[2] Pwnagotchi" <<endl << "[3] Hidden;
    cout << "[4] Quit" << endl;
    string input;
    getline(cin, input);
    cin >> input;
    if(input == "1") {
        cout<<"We are a group created by HellIsAbove whos objectives are unknows for anyone outside of us"<<endl;
        system("pause");
        cout<<endl;
        system("CLS");
        goto CRED;
    }

    if(input == "2") {
        ShellExecute(NULL, "open", "https://pwnagotchi.ai/",NULL, NULL, SW_SHOWNORMAL);
        system("CLS");
        goto CRED;
    }
    
    if(input == "3"0 {
        cout<<"Our Hidden Domain is currently under construction. You will be notified when it's done";
        cout<<endl;
        goto CRED
    }

    if(input == "4") {
        std::terminate();
    }

    else {
        cout<<"Invalid input";
        cout<<endl;
        goto CRED;
    }

}
