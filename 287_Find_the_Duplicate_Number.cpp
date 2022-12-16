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


// 2. modifying existing data
// space : O(1)
// time :  O(n)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

    int ans;
    for(int i=0; i<nums.size() ; i++)
    {
        if(nums[abs(nums[i])] < 0)
        {
            ans = abs(nums[i]);
            break;
        }
        nums[abs(nums[i])] *= -1 ;
    }

        return ans;
    }
};