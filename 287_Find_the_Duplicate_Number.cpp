// Question : https://leetcode.com/problems/find-the-duplicate-number/description/

// Approches

// 1. sorting approch
// space : O(nlogn)
// time :  O(logn)
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int ans = 0;

        // sort the array.
        sort(nums.begin(), nums.end());

        // iterate over the, after sorting the duplicate elements will be at adjecent position.
        for (int i = 0; i < nums.size(); i++)
        {
            // check for duplicate elements.
            if (nums[i] == nums[i + 1])
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};