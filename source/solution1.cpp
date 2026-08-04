#include <solution1.h>

int Solution1::removeElement(std::vector<int>& nums, int val) {
    if (nums.size() < 1) {
        return 0;
    }

    int end = nums.size() - 1;
    int index = 0;
    while (index < end)
    {
        while(nums[index] != val && index < end) {
            index++;
        }

        while(nums[end] == val && end > index) {
            end--;
        }

        if(index < end && nums[index] == val) {
            nums[index] = nums[end];
            end--;
        } 
        index++;        
    }

    return index;
    

}