#include <iostream>
#include <vector>
using namespace std;

// Struct soll einen Namen und eine Note enthalten, wähle geeignete Datentypen
struct Studierende {
    string name;
    double note;
};

int main() {

    vector<Studierende> students;

    // Füge 4 Studierende in die Liste students ein
    Studierende Person1;

    Person1.name = "Joek";
    Person1.note = 1.0;

    Studierende Person2;

    Person2.name = "Yafet";
    Person2.note = 2.0;

    Studierende Person3;

    Person3.name = "Obama";
    Person3.note = 3.0;

    Studierende Person4;

    Person4.name = "Cedric";
    Person4.note = 4.0;

    students[0] = Person1;
    students[1] = Person2;
    students[2] = Person3;
    students[3] = Person4;




    cout << "Pruefungsergebnisse:" << endl;
    // Gib alle Studierenden und die jeweilige Note aus

    // Gib aus, ob die jeweilige Person bestanden hat oder nicht


    for (int i = 0; i < 4; i++) {

        cout << students[i].name << endl;
        cout << students[i].note << endl;
        
        if (students[i].note < 4.0) {

            cout << "Nicht bestanden :(" << endl;
            continue;

        }

        cout << "Bestanden :)" << endl;

    }

    return 0;
}