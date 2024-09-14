class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        // 2 pointer technique
        // left, right, breakpoint
        
        //break point = point where increasing seq from end comes to halt
        //left = element before break point
        // right = element just greater than left
        // swap laft and right
        // sort elements from next to left till end
        

        int n = nums.size();

        int left, breakpoint, right;
        right = n-1 ;
        while( (right-1>=0) && (nums[right]<=nums[right-1]) )
            right--;

        if (right == 0)
        {
            sort(nums.begin(), nums.end());
        }
        else
        {
            left = right-1;
            breakpoint = right;
            int mini = INT_MAX;
            for(int i = breakpoint; i < n ; i++)
            {
                if (nums[i] < mini && nums[i] >nums[left])
                {
                    right = i;
                    mini = nums[i];
                }
            }

            swap(nums[left], nums[right]);
            sort(nums.begin()+breakpoint, nums.end());
        }

    return ;
    }
};