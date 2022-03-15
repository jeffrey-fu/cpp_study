// https://leetcode-cn.com/problems/median-of-two-sorted-arrays/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findLessThanKIndexValue(vector<int>& v1, vector<int>& v2, unsigned short k) {
        unsigned short length1 = v1.size();
        unsigned short length2 = v2.size();
        unsigned short offset1 = 0;
        unsigned short offset2 = 0;

        while(k > 1 && length1 - offset1 > 0 && length2 - offset2 > 0) {
            unsigned short km = k / 2 - 1;
            unsigned short curV1Idx = km + offset1 > length1 - 1 ? length1 - 1 : km + offset1;
            unsigned short curV2Idx = km + offset2 > length2 - 1 ? length2 - 1 : km + offset2;
            if (v1[curV1Idx] <= v2[curV2Idx]) {
                k = k - (curV1Idx + 1 - offset1);
                offset1 = curV1Idx + 1;
            } else {
                k = k - (curV2Idx + 1 - offset2);
                offset2 = curV2Idx + 1;
            }
        }
        if (length1 - offset1 == 0) {
            return v2[offset2 + k - 1];
        }
        if (length2 - offset2 == 0) {
            return v1[offset1 + k - 1];
        }
        return v1[offset1] < v2[offset2] ? v1[offset1] : v2[offset2];
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        unsigned short totalLength = nums1.size() + nums2.size();
        if (totalLength == 0) {
            return 0.0;
        }
        if (totalLength % 2 == 0) {
            int first = findLessThanKIndexValue(nums1, nums2, totalLength / 2);
            int second = findLessThanKIndexValue(nums1, nums2, totalLength / 2 + 1);
            return (first + second) / 2.0;
        } else {
            int middle = findLessThanKIndexValue(nums1, nums2, totalLength / 2 + 1);
            return (double)middle;
        }
    }
};

int main() {
    vector<int> v1 = { 2,40 };
    vector<int> v2 = { 5,8,10 };
    Solution s1;
    cout << s1.findMedianSortedArrays(v1, v2) << endl;
    return 0;
}
