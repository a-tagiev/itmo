#include<iostream>
#include<string>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;


    string name, surname;

    cin >> name;
    cin >> surname;
    string sum = name + " " + surname;

    if (a>1 && b>1) {

        if ((surname[0] == 'j' && surname[1] == 'o') || (surname[b - 1] == 'j' && surname[b] == 'o')) {
            if ((name[a - 1] == 'j' && name[a] == 'o') || (name[0] == 'j' && name[1] == 'o')) {
                cout << "jojo!";
                return 0;
            }

        }
    }

        if (sum.find("dog") != string::npos) {
            cout << ":(";
            return 0;
        }


    cout<<"WRYYY";
    return 0;
}
