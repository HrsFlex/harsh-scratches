// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//         // Brute Force
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i] == nums[j]){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

//Better solution

// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i = 1 ; i<nums.size() ; i++){
//             if(nums[i] == nums[i-1]){
//                 return true;
//             }
//         }
//         return false;
//     }
// };

// Optimal Solution

// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//         unordered_set<int> seen;
//         for(int num : nums) {
//             if(seen.count(num)) {
//                 return true;
//             }
//             seen.insert(num);
//         }
//         return false;
//     }
// };

// Most Optimal Solution

class Solution {
    public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> num(nums.begin(),nums.end());
        if(num.size() < nums.size()) {
            return true;
        }
        return false;
    }
};

