class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> countMap;
         for (int num : nums) {
            countMap[num]++;
        }
        
        
        for (auto const& [num, count] : countMap) {
            if (count == 1) {
                return num;
            }
        }
        
        return -1;
    }
};
//its not a optimal soln , will come back after getting more familar with sorting.
