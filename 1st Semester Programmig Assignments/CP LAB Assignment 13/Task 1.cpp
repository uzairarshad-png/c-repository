//#include <iostream>
//using namespace std;
//
//struct Student {
//    string name;
//    int age, grade;
//};
//
//void swapStudents(Student* s1, Student* s2) {
//    Student temp = *s1;
//    *s1 = *s2;
//    *s2 = temp;
//}
//
//int main() {
//    Student student1 = { "Ali", 20, 12 };
//    Student student2 = { "Ahmed", 22, 11 };
//	cout << "Before swapping:" << endl;
//
//    cout << "Student 1: " << student1.name << ", Age: " << student1.age << ", Grade: " << student1.grade << endl;
//    cout << "Student 2: " << student2.name << ", Age: " << student2.age << ", Grade: " << student2.grade << endl;
//    swapStudents(&student1, &student2);
//	cout << "\nAfter swapping:" << endl;
//    cout << "Student 1: " << student1.name << ", Age: " << student1.age << ", Grade: " << student1.grade << endl;
//    cout << "Student 2: " << student2.name << ", Age: " << student2.age << ", Grade: " << student2.grade << endl;
//
//    return 0;
//}
