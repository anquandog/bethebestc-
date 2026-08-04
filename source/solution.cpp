#include "Solution.h"
#include <iostream>

// 合并两个有序数组
// 思路：从后往前双指针比较，避免覆盖 nums1 中的有效元素
void Solution::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int p1 = m - 1;   // nums1 有效元素的最后一个索引
    int p2 = n - 1;   // nums2 的最后一个索引
    int tail = m + n - 1;  // 合并后数组的最后一个位置

    // 从后往前比较，将较大值放到 nums1 的末尾
    while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] > nums2[p2]) {
            nums1[tail--] = nums1[p1--];
        } else {
            nums1[tail--] = nums2[p2--];
        }
    }

    // 如果 nums2 还有剩余元素，直接复制到 nums1 前面
    //（nums1 有剩余时不需要处理，因为它们已经在正确位置）
    while (p2 >= 0) {
        nums1[tail--] = nums2[p2--];
    }
}
