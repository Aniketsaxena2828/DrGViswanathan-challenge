#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;

        for (int num : nums) {
            if ((num >= 10 && num <= 99) ||
                (num >= 1000 && num <= 9999) ||
                num == 100000) {
                ans++;
            }
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {12, 345, 2, 6, 7896};

    Solution obj;
    cout << obj.findNumbers(nums);

    return 0;
}