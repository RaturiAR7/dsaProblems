class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         set<vector<int>>ss;
         vector<vector<int>>ans;
         int c=0;
         int n=nums.size();
         long long sum=0;
         for(int i=0;i<n-2;i++)
         {
           int start=i+1;
           int end=n-1;
           while(start<end)
           {
               sum=nums[i]+nums[start]+nums[end];
               if(sum==0)
               {
                   ss.insert({nums[i],nums[start],nums[end]});
                   start++;
                   end--;
               }
              else if(sum>0)
               {
                   end--;
               }
               else
               {
                   start++;
               }
           }


         }
         for(auto i:ss)
         {
             ans.push_back(i);
         }
         return ans;
    }
};