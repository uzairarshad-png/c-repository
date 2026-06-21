#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct student_marks
{
    string name;
    double score;
};

// Function to save student marks
static void insertMarks()
{
    student_marks entry;

    cin.ignore();
    cout << " Enter The Student's Name : ";
    getline(cin, entry.name);

    cout << " Enter The Student's Marks : ";
    cin >> entry.score;

    while (entry.score < 0)
    {
        cout << " Invalid Marks. Please Enter Again : ";
        cin >> entry.score;
    }

    ofstream file("marks.txt", ios::app);
    if (!file)
    {
        cout << " Error Opening The File To Write Details. \n";
        return;
    }

    file << entry.name << "|" << entry.score << endl;
    file.close();

    cout << " Marks Recorded Successfully. \n";
}


// Function to show all marks
static void showMarks()
{
    ifstream file("marks.txt");
    if (!file)
    {
        cout << " Error Opening The File To Read Marks. \n";
        return;
    }

    file.seekg(0, ios::end);
    if (file.tellg() == 0)
    {
        cout << " File Is Empty. No Records Found. \n";
        file.close();
        return;
    }
    file.seekg(0, ios::beg);

    cout << "\n -----Student Marks-----\n";

    string line;
    while (getline(file, line))
    {
        if (line.empty())
            continue;

        size_t pipePos = line.find('|');
        if (pipePos == string::npos)
            continue;

        string nm = line.substr(0, pipePos);
        double mk = stod(line.substr(pipePos + 1));

        cout << " Name : " << nm << endl;
        cout << " Marks : " << mk << endl << endl;
    }

    file.close();
}


// Function to update marks
static void modifyMarks()
{
    ifstream reader("marks.txt");
    if (!reader)
    {
        cout << " No Marks File Found. Add Students First. \n";
        return;
    }

    reader.seekg(0, ios::end);
    if (reader.tellg() == 0)
    {
        cout << " File Is Empty. Add Students First. \n";
        reader.close();
        return;
    }
    reader.seekg(0, ios::beg);

    double increment;
    cout << " Enter The Amount To Increase Grades By : ";
    cin >> increment;

    ofstream temp("temp.txt");
    if (!temp)
    {
        cout << " Error Creating Temporary File. \n";
        reader.close();
        return;
    }

    string record;
    while (getline(reader, record))
    {
        if (record.empty())
            continue;

        size_t sep = record.find('|');
        if (sep == string::npos)
            continue;

        string nm = record.substr(0, sep);
        double sc = stod(record.substr(sep + 1));

        sc += increment;

        temp << nm << "|" << sc << endl;

        cout << " " << nm << "'s Grade Updated To " << sc << endl;
    }

    reader.close();
    temp.close();

    remove("marks.txt");

    if (rename("temp.txt", "marks.txt") != 0)
    {
        cout << " Error Renaming The File. \n";
    }
    else
    {
        cout << "\n Marks Updated Successfully. \n";
    }
}


int main()
{
    int choice;

    cout << "\n ---------------MARKS MANAGEMENT SYSTEM--------------- \n";

    do
    {
        cout << "\n 1. Enter Student Marks \n";
        cout << " 2. Display Student Marks \n";
        cout << " 3. Update Student Marks \n";
        cout << " 4. Exit \n";
        cout << "\n Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            insertMarks();
            break;
        case 2:
            showMarks();
            break;
        case 3:
            modifyMarks();
            break;
        case 4:
            cout << "\n Exiting The Program...\n";
            break;
        default:
            cout << "\n Invalid Choice. Please Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}
