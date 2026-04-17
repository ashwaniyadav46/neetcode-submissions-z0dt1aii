class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size(); i++) {
            for (int j = i + 1; j < numbers.size(); j++) {
                if (numbers[i] + numbers[j] == target) {
                    // Return 1-based indices immediately
                    return {i + 1, j + 1};
                }
            }
        }
        return {}; // Default return
    }
};