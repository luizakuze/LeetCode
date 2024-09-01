// Minha solução

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        std::vector<int> nums2;
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums2.push_back(nums[i]);
                k++;
            }
        }
 
        nums = nums2;

        return k;
    }
};



// Uma solução melhor...

#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int k = 0;  
 
        for (int i = 0; i < nums.size(); i++) { 
            if (nums[i] != val) { 
                nums[k] = nums[i];
                k++;
            }
        }
 
        return k;
    }
};
