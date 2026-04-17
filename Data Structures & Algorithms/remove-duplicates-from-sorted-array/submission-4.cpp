#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int k = s.size();

        // copy unique elements
        int i = 0;
        for (int x : s) {
            nums[i++] = x;
        }

        // sort only valid portion
        sort(nums.begin(), nums.begin() + k);

        return k;
    }
};