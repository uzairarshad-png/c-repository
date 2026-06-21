#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//struct student_detail
//{
//    string name;
//    string father;
//    int age;
//};
//
//// Function to write new student info into file
//void addStudent(student_detail data)
//{
//    cin.ignore(); // clear buffer
//
//    cout << " Enter The Student's Name : ";
//    getline(cin, data.name);
//
//    cout << " Enter The Father's Name : ";
//    getline(cin, data.father);
//
//    cout << " Enter The Student's Age : ";
//    cin >> data.age;
//
//    // validate age
//    while (data.age <= 0)
//    {
//        cout << "\n Invalid Age. Please Enter Again : ";
//        cin >> data.age;
//    }
//
//    ofstream file("student.txt", ios::app);
//    if (!file)
//    {
//        cout << "\n Error Opening The File To Write Details. \n";
//        return;
//    }
//
//    file << data.name << "|" << data.father << "|" << data.age << endl;
//    file.close();
//
//    cout << "\n Student Details Have Been Saved Successfully. \n";
//}
//
//// Function to display all student records
//void showStudents()
//{
//    ifstream file("student.txt");
//    if (!file)
//    {
//        cout << "\n Error opening the file to read details.\n";
//        return;
//    }
//
//    string record;
//
//    while (getline(file, record))
//    {
//        if (record.empty())
//            continue;
//
//        size_t p1 = record.find('|');
//        size_t p2 = record.find('|', p1 + 1);
//
//        string nm = record.substr(0, p1);
//        string fn = record.substr(p1 + 1, p2 - p1 - 1);
//        int ag = stoi(record.substr(p2 + 1));
//
//        cout << "\n -----Student Info----- " << endl;
//        cout << "\n Name : " << nm << endl;
//        cout << " Father's Name : " << fn << endl;
//        cout << " Age : " << ag << endl;
//    }
//
//    file.close();
//    cout << "\n Student details displayed successfully.\n";
//}
//
//int main()
//{
//    student_detail temp;
//    int option;
//
//    cout << "\n ---------------STUDENT RECORD MANAGEMENT SYSTEM--------------- \n";
//
//    do
//    {
//        cout << "\n 1. Write student details \n";
//        cout << " 2. Display student details \n";
//        cout << " 3. Exit " << endl;
//        cout << "\n Enter your choice: ";
//        cin >> option;
//
//        switch (option)
//        {
//        case 1:
//            addStudent(temp);
//            break;
//
//        case 2:
//            showStudents();
//            break;
//
//        case 3:
//            cout << "\n Exiting the program...\n";
//            break;
//
//        default:
//            cout << "\n Invalid choice. Please try again.\n";
//        }
//
//    } while (option != 3);
//
//    return 0;
//}
