//#include <iostream>
//#include <fstream>
//#include <string>
//#include <limits>
//#include <direct.h> // _getcwd on Windows
//
//using namespace std;
//
//static string getCurrentWorkingDirectory()
//{
//    char buffer[FILENAME_MAX];
//    if (_getcwd(buffer, FILENAME_MAX) != nullptr)
//        return string(buffer);
//    return string();
//}
//
//// Function to create a backup copy of the catalog
//static void createBackup()
//{
//    cout << " Catalog Backup Process Initiated... \n\n";
//
//    string cwd = getCurrentWorkingDirectory();
//    cout << " Current working directory: " << cwd << "\n\n";
//
//    cout << " Opening Input File \"main_catalog.txt\"... \n";
//    ifstream sourceFile("main_catalog.txt");
//    if (!sourceFile)
//    {
//        cout << " Error Opening Input File (main_catalog.txt). File not found in: " << cwd << "\n";
//
//        cout << " Would you like to create a sample \"main_catalog.txt\" here? (y/n) : ";
//        char resp = 'n';
//        cin >> resp;
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//        if (resp == 'y' || resp == 'Y')
//        {
//            ofstream sample("main_catalog.txt", ios::out | ios::trunc);
//            if (!sample)
//            {
//                cout << " Failed to create sample main_catalog.txt.\n";
//                return;
//            }
//            sample << "978-0131103627 The C Programming Language\n";
//            sample << "978-0201633610 Design Patterns\n";
//            sample << "978-0262033848 Introduction to Algorithms\n";
//            sample.close();
//            cout << " Sample main_catalog.txt created.\n";
//
//            // try opening again
//            sourceFile.open("main_catalog.txt");
//            if (!sourceFile)
//            {
//                cout << " Still failed to open main_catalog.txt after creating sample. \n";
//                return;
//            }
//        }
//        else
//        {
//            cout << " Aborting backup because main_catalog.txt is missing.\n";
//            return;
//        }
//    }
//    cout << " Input File Opened Successfully. \n\n";
//
//    cout << " Opening Output File \"backup_catalog.txt\"... \n";
//    ofstream backupFile("backup_catalog.txt", ios::out | ios::trunc);
//    if (!backupFile)
//    {
//        cout << " Error Opening Output File. \n";
//        sourceFile.close();
//        return;
//    }
//    cout << " Output File Opened Successfully. \n\n";
//
//    cout << " Copying Contents From Input File To Output File... \n";
//
//    string buffer;
//    int totalLines = 0;
//
//    while (getline(sourceFile, buffer))
//    {
//        backupFile << buffer << endl;
//        totalLines++;
//    }
//
//    cout << " Contents Copied Successfully. \n\n";
//
//    cout << " Closing Input File \"main_catalog.txt\"... \n";
//    sourceFile.close();
//    cout << " Input File Closed Successfully. \n\n";
//
//    cout << " Closing Output File \"backup_catalog.txt\"... \n";
//    backupFile.close();
//    cout << " Output File Closed Successfully. \n\n";
//
//    cout << " Catalog Backup Completed Successfully. \n";
//    cout << " Total Lines Copied : " << totalLines << endl;
//}
//
//// Function to show the contents of the backup file
//static void showBackup()
//{
//    cout << " Opening Backup File \"backup_catalog.txt\"... \n";
//
//    ifstream file("backup_catalog.txt");
//    if (!file)
//    {
//        cout << " Error Opening Backup File (backup_catalog.txt). It may not exist in the current directory.\n";
//        string cwd = getCurrentWorkingDirectory();
//        cout << " Current working directory: " << cwd << "\n";
//        return;
//    }
//
//    cout << "\n -----Backup Catalog Contents-----\n";
//
//    string line;
//    int num = 1;
//    bool hasContent = false;
//
//    while (getline(file, line))
//    {
//        cout << " Line " << num << " : " << line << endl;
//        num++;
//        hasContent = true;
//    }
//
//    if (!hasContent)
//    {
//        cout << " Backup File Is Empty. \n";
//    }
//
//    file.close();
//    cout << " \n Backup File Closed Successfully. \n";
//}
//
//int main()
//{
//    int option;
//
//    cout << "\n ---------------LIBRARY CATALOG BACKUP SYSTEM--------------- \n";
//
//    do
//    {
//        cout << "\n 1. Backup Catalog \n";
//        cout << " 2. Display Backup Contents \n";
//        cout << " 3. Exit \n";
//        cout << "\n Enter Your Choice : ";
//        if (!(cin >> option))
//        {
//            cin.clear();
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
//            cout << "\n Invalid input. Please enter a number.\n";
//            continue;
//        }
//
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//        switch (option)
//        {
//        case 1:
//            createBackup();
//            break;
//        case 2:
//            showBackup();
//            break;
//        case 3:
//            cout << "\n Exiting The Program...\n";
//            break;
//        default:
//            cout << "\n Invalid Choice. Please Try Again.\n";
//        }
//
//    } while (option != 3);
//
//    cout << "\n Thank You For Using The System. \n";
//
//    return 0;
//}