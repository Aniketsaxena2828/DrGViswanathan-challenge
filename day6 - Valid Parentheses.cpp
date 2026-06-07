#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                if (st.empty()) {
                    return false;
                }

                char topel = st.top();

                if ((topel == '(' && ch == ')') ||
                    (topel == '{' && ch == '}') ||
                    (topel == '[' && ch == ']')) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main() {
    Solution sol;

    string s;
    cout << "Enter brackets string: ";
    cin >> s;

    if (sol.isValid(s))
        cout << "Valid Parentheses\n";
    else
        cout << "Invalid Parentheses\n";

    return 0;
}