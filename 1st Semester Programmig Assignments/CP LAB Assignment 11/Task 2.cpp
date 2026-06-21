//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Book {
//    string title;
//    string author;
//    int publicationYear;
//};
//
//void addBook(Book books[], int& count) {
//    cout << "\nEnter book title: ";
//    getline(cin, books[count].title);
//
//    cout << "Enter author name: ";
//    getline(cin, books[count].author);
//
//    cout << "Enter publication year: ";
//    cin >> books[count].publicationYear;
//    cin.ignore();
//
//    count++;
//    cout << "Book added successfully!\n";
//}
//
//void searchByTitle(Book books[], int count) {
//    string title;
//    cout << "\nEnter book title to search: ";
//    getline(cin, title);
//
//    for (int i = 0; i < count; i++) {
//        if (books[i].title == title) {
//            cout << "\nBook found: "
//                << books[i].title << " by "
//                << books[i].author
//                << ", published in " << books[i].publicationYear << endl;
//            return;
//        }
//    }
//    cout << "Book not found!\n";
//}
//
//void searchByAuthor(Book books[], int count) {
//    string name;
//    cout << "\nEnter author name to search: ";
//    getline(cin, name);
//
//    bool found = false;
//
//    for (int i = 0; i < count; i++) {
//        if (books[i].author == name) {
//            cout << "\nBook: "
//                << books[i].title << " by "
//                << books[i].author
//                << ", published in " << books[i].publicationYear << endl;
//            found = true;
//        }
//    }
//    if (!found)
//        cout << "No books found for this author!\n";
//}
//
//void sortByTitle(Book books[], int count) {
//    for (int i = 0; i < count - 1; i++) {
//        for (int j = i + 1; j < count; j++) {
//            if (books[j].title < books[i].title) {
//                swap(books[i], books[j]);
//            }
//        }
//    }
//    cout << "Books sorted by title!\n";
//}
//
//void displayBooks(Book books[], int count) {
//    if (count == 0) {
//        cout << "No books to display!\n";
//        return;
//    }
//
//    cout << "\n----- BOOK LIST -----\n";
//    for (int i = 0; i < count; i++) {
//        cout << i + 1 << ". " << books[i].title
//            << " by " << books[i].author
//            << ", published in " << books[i].publicationYear << endl;
//    }
//}
//
//int main() {
//    Book books[100];     // stores up to 100 books
//    int count = 0;
//    int choice;
//
//    do {
//        cout << "\nMenu:\n";
//        cout << "1. Add a new book\n";
//        cout << "2. Search books by title\n";
//        cout << "3. Search books by author\n";
//        cout << "4. Sort books by title\n";
//        cout << "5. Display all books\n";
//        cout << "6. Exit\n";
//        cout << "\nEnter your choice: ";
//        cin >> choice;
//        cin.ignore(); // to clear input buffer
//
//        switch (choice) {
//        case 1: addBook(books, count); break;
//        case 2: searchByTitle(books, count); break;
//        case 3: searchByAuthor(books, count); break;
//        case 4: sortByTitle(books, count); break;
//        case 5: displayBooks(books, count); break;
//        case 6: cout << "Exiting program...\n"; break;
//        default: cout << "Invalid choice!\n"; break;
//        }
//
//    } while (choice != 6);
//
//    return 0;
//}
