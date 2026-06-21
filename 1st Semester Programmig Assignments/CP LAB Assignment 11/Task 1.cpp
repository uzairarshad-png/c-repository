//#include<iostream>
//#include<cstring>
//using namespace std;
//
//struct emps
//{
//    int emp_ID;
//    string emp_name;
//    string emp_pos;
//};
//
//struct dept
//{
//    string manager_name;
//    emps employee[5];   // Each department has 5 employees
//};
//
//void HR()
//{
//    dept HRdept;
//
//    HRdept.manager_name = "Mr. Uzair Arshad";
//
//    HRdept.employee[0] = { 101, "Misbah Bibi", "Recruiter" };
//    HRdept.employee[1] = { 102, "M Huzaifa", "Trainer" };
//    HRdept.employee[2] = { 103, "Bushra ", "Coordinator" };
//    HRdept.employee[3] = { 104, "Mahrab Batool", "HR Assistant" };
//    HRdept.employee[4] = { 105, "Aiman", "Compensation Analyst" };
//
//    cout << "\n------ HUMAN RESOURCE DEPARTMENT ------\n";
//    cout << "Manager: " << HRdept.manager_name << "\n";
//    cout << "Employees:\n";
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << "\tID: " << HRdept.employee[i].emp_ID
//            << ", Name: " << HRdept.employee[i].emp_name
//            << ", Position: " << HRdept.employee[i].emp_pos << endl;
//    }
//}
//void Prod()
//{
//    dept P;
//
//    P.manager_name = "Mr. Uzair Arshad";
//
//    P.employee[0] = { 201, "Anas tauqeer", "Machine Operator" };
//    P.employee[1] = { 202, "Javaria Shahbaz", "Quality Checker" };
//    P.employee[2] = { 203, "Fahad Khalil", "Supervisor" };
//    P.employee[3] = { 204, "Ziyaan", "Inventory Handler" };
//    P.employee[4] = { 205, "Areeba", "Production Assistant" };
//
//    cout << "\n------ PRODUCTION DEPARTMENT ------\n";
//    cout << "Manager: " << P.manager_name << "\n";
//    cout << "Employees:\n";
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << "\tID: " << P.employee[i].emp_ID
//            << ", Name: " << P.employee[i].emp_name
//            << ", Position: " << P.employee[i].emp_pos << endl;
//    }
//}
//void Acc()
//{
//    dept A;
//
//    A.manager_name = "Mr. Uzair Arshad";
//
//    A.employee[0] = { 301, "Jannat", "Accountant" };
//    A.employee[1] = { 302, "Bashir ", "Auditor" };
//    A.employee[2] = { 303, "Shamaim", "Payroll Officer" };
//    A.employee[3] = { 304, "Asifa", "Ledger Manager" };
//    A.employee[4] = { 305, "Muntaha", "Tax Assistant" };
//
//    cout << "\n------ ACCOUNTS DEPARTMENT ------\n";
//    cout << "Manager: " << A.manager_name << "\n";
//    cout << "Employees:\n";
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << "\tID: " << A.employee[i].emp_ID
//            << ", Name: " << A.employee[i].emp_name
//            << ", Position: " << A.employee[i].emp_pos << endl;
//    }
//}
//void Sales()
//{
//    dept S;
//
//    S.manager_name = "Mr.Uzair Arshad";
//    S.employee[0] = { 401, "Iqra Noor", "Sales Executive" };
//    S.employee[1] = { 402, "Irfa Amin", "Sales Officer" };
//    S.employee[2] = { 403, "Sana Nasir", "Customer Handler" };
//    S.employee[3] = { 404, "Abeer Hassan", "Product Promoter" };
//    S.employee[4] = { 405, "Ibtesam ", "Field Sales Agent" };
//
//    cout << "\n------ SALES DEPARTMENT ------\n";
//    cout << "Manager: " << S.manager_name << "\n";
//    cout << "Employees:\n";
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << "\tID: " << S.employee[i].emp_ID
//            << ", Name: " << S.employee[i].emp_name
//            << ", Position: " << S.employee[i].emp_pos << endl;
//    }
//}
//int main()
//{
//    char b;
//    int a;
//
//    cout << "Welcome to the Employee Management System of Company!" << endl;
//
//    do {
//    statement:
//        cout << "\n1. Human Resource (HR) \n2. Production\n3. Accounts Management\n4. Sales Department.\n5. Exit." << endl;
//        cout << "Please Enter your choice : ";
//        cin >> a;
//
//        switch (a)
//        {
//        case 1: HR(); break;
//        case 2: Prod(); break;
//        case 3: Acc(); break;
//        case 4: Sales(); break;
//        case 5:
//            cout << "Thank you for using our application!";
//            break;
//        default:
//            cout << "Invalid Choice! Enter a Valid option.\n";
//            goto statement;
//        }
//        if (a != 5)
//        {
//            cout << "\nDo you want to see details of another department (Y/N): ";
//            cin >> b;
//        }
//
//    } while (b == 'Y' || b == 'y');
//
//    return 0;
//}
