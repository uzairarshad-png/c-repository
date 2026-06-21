//#include <iostream>
//#include <string>
//using namespace std;
//struct Patient {
//    int id;
//    string name;
//    int age;
//    string history;
//};
//
//// Max Patients
//const int MAX = 100;
//void addPat(Patient* p, int& count) {
//    Patient* ptr = &p[count];   // pointer to next patient slot
//
//    cout << "\nEnter Patient ID: ";
//    cin >> ptr->id;
//
//    cin.ignore();
//    cout << "Enter Name: ";
//    getline(cin, ptr->name);
//
//    cout << "Enter Age: ";
//    cin >> ptr->age;
//    cin.ignore();
//
//    cout << "Enter Medical History: ";
//    getline(cin, ptr->history);
//
//    count++;
//    cout << "Patient added successfully!\n";
//}
//void updatePat(Patient* p, int count) {
//    int id;
//    cout << "\nEnter Patient ID to update: ";
//    cin >> id;
//
//    for (int i = 0; i < count; i++) {
//        Patient* ptr = &p[i];
//        if (ptr->id == id) {
//            cin.ignore();
//
//            cout << "Enter New Name: ";
//            getline(cin, ptr->name);
//
//            cout << "Enter New Age: ";
//            cin >> ptr->age;
//            cin.ignore();
//
//            cout << "Enter New Medical History: ";
//            getline(cin, ptr->history);
//
//            cout << "Patient information updated!\n";
//            return;
//        }
//    }
//    cout << "Patient not found!\n";
//}
//void dispPat(Patient* p, int count) {
//    int id;
//    cout << "\nEnter Patient ID to display: ";
//    cin >> id;
//
//    for (int i = 0; i < count; i++) {
//        Patient* ptr = &p[i];
//        if (ptr->id == id) {
//            cout << "\n--- Patient Details ---\n";
//            cout << "ID: " << ptr->id << endl;
//            cout << "Name: " << ptr->name << endl;
//            cout << "Age: " << ptr->age << endl;
//            cout << "Medical History: " << ptr->history << endl;
//            return;
//        }
//    }
//    cout << "Patient not found!\n";
//}
//void delPat(Patient* p, int& count) {
//    int id;
//    cout << "\nEnter Patient ID to delete: ";
//    cin >> id;
//
//    for (int i = 0; i < count; i++) {
//        if (p[i].id == id) {
//            // Shift array left
//            for (int j = i; j < count - 1; j++) {
//                p[j] = p[j + 1];
//            }
//            count--;
//            cout << "Patient deleted successfully!\n";
//            return;
//        }
//    }
//    cout << "Patient not found!\n";
//}
//int main() {
//    Patient patients[MAX];
//    int count = 0;
//    int choice;
//
//    do {
//        cout << "\nHospital Management System\n";
//        cout << "1. Add New Patient\n";
//        cout << "2. Update Patient Information\n";
//        cout << "3. Display Patient Details\n";
//        cout << "4. Delete Patient Information\n";
//        cout << "5. Exit\n";
//
//        cout << "\nEnter your choice: ";
//        cin >> choice;
//        cin.ignore();
//
//        switch (choice) {
//        case 1: addPat(patients, count); break;
//        case 2: updatePat(patients, count); break;
//        case 3: dispPat(patients, count); break;
//        case 4: delPat(patients, count); break;
//        case 5: cout << "Exiting system...\n"; break;
//        default: cout << "Invalid choice!\n"; break;
//        }
//
//    } while (choice != 5);
//
//    return 0;
//}
