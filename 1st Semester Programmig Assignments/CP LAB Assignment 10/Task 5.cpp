#include <iostream>
#include <string>
#include <cctype>   // for toupper()
using namespace std;

string toUpperCase(string s) 
{
    for (int i = 0; i < s.length(); i++) 
    {
        s[i] = toupper(s[i]); 
    }
    return s;
}
string replaceSpaces(string s) 
{
    for (int i = 0; i < s.length(); i++) 
    {
        if (s[i] == ' ') s[i] = '_';
    }
    return s;
}
string reverseString(string s) 
{
    int start = 0, end = s.length() - 1;
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    return s;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    input = toUpperCase(input);
    input = replaceSpaces(input);
    input = reverseString(input);
    cout << "\nModified String: " << input << endl;
    return 0;
}
