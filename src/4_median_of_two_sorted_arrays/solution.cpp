class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        std::sort(nums1.begin(), nums1.end());
        size_t size = nums1.size();
        if (size % 2 == 0) return (nums1.at(size / 2 - 1) + nums1.at(size / 2)) / 2.0;
        return nums1.at(size / 2);
    }
};
