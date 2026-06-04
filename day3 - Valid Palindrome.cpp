#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";

        for (char ch : s) {
            if (isalnum(ch)) {
                str += tolower(ch);
            }
        }

        int left = 0;
        int right = str.size() - 1;

        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};

int main() {
    Solution obj;

    string s;
    getline(cin, s);

    if (obj.isPalindrome(s)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}