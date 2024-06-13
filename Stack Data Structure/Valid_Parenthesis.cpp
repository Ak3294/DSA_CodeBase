#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValidParentheses(const string& s) {
    stack<char> parenthesesStack;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            parenthesesStack.push(c);
        } else {
            if (parenthesesStack.empty()) {
                return false; // More closing parentheses than opening ones
            }
            char top = parenthesesStack.top();
            parenthesesStack.pop();
            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                return false; // Mismatched parentheses
            }
        }
    }
    return parenthesesStack.empty(); // Stack should be empty if all parentheses are matched
}

int main() {
    string input;
    cout << "Enter a string of parentheses: ";
    cin >> input;
    if (isValidParentheses(input)) {
        cout << "Valid parentheses!" << endl;
    } else {
        cout << "Invalid parentheses!" << endl;
    }
    return 0;
}
