class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        
        for (int i = 0; i < nums.size(); i++) {
            // If the element is already in our window of size k
            if (window.find(nums[i]) != window.end()) {
                return true;
            }
            
            // Add current element to the window
            window.insert(nums[i]);
            
            // If window size exceeds k, remove the oldest element
            if (window.size() > k) {
                window.erase(nums[i - k]);
            }
        }
        
        return false;
    }
};