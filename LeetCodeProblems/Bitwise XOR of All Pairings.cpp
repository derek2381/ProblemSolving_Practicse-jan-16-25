// Problem Link
// https://leetcode.com/problems/bitwise-xor-of-all-pairings/description/


// Source Code

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int res1 = 0, res2 = 0;

        if(nums1.size()%2 != 0){

        for(int nums : nums2){
            res2 ^= nums;
        }
        }

        if(nums2.size() %2 != 0){
            for(int nums : nums1){
                res1 ^= nums;
            }
        }

        return (res1 ^ res2);
    }
};