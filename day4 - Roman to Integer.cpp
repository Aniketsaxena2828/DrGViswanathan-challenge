#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mpp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && mpp[s[i]] < mpp[s[i + 1]]) {
                ans -= mpp[s[i]];
            } else {
                ans += mpp[s[i]];
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    string s;
    cout << "Enter Roman Numeral: ";
    cin >> s;

    cout << "Integer Value: " << sol.romanToInt(s) << endl;

    return 0;
}