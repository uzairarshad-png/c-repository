//#include <iostream>
//#include <string>
//#include <fstream>
//#include <cctype>
//using namespace std;
//
//int main()
//{
//    string w1, w2, w3, w4;
//
//    // Ask user for the four words of the quote
//    cout << " Enter The 1st Word Of Your Quote : ";
//    getline(cin, w1);
//    cout << " Enter The 2nd Word Of Your Quote : ";
//    getline(cin, w2);
//    cout << " Enter The 3rd Word Of Your Quote : ";
//    getline(cin, w3);
//    cout << " Enter The 4th Word Of Your Quote : ";
//    getline(cin, w4);
//
//    // Convert each word to uppercase
//    string up1, up2, up3, up4;
//
//    for (char c : w1) up1 += toupper(c);
//    for (char c : w2) up2 += toupper(c);
//    for (char c : w3) up3 += toupper(c);
//    for (char c : w4) up4 += toupper(c);
//
//    // Combine words into a single uppercase quote
//    string assembled = up1 + " " + up2 + " " + up3 + " " + up4;
//
//    cout << "\n Here's your quote with all words in uppercase:\n";
//    cout << "\n " << assembled << endl;
//
//    // Ask user for saving choice
//    char decision;
//    cout << "\n Is this how you want the quote saved (uppercase)? (yes/no): ";
//    cin >> decision;
//    cin.ignore();
//
//    // Save to file if user agrees
//    if (tolower(decision) == 'y')
//    {
//        ofstream quoteFile("uppercase_quotes.txt", ios::app);
//
//        if (quoteFile)
//        {
//            quoteFile << assembled << endl;
//            quoteFile.close();
//            cout << "\n The uppercase quote has been saved to uppercase_quotes.txt\n";
//        }
//        else
//        {
//            cout << "\n Error opening file to write the quote.\n";
//        }
//    }
//    else
//    {
//        cout << "\n Quote not saved.\n";
//    }
//
//    return 0;
//}
