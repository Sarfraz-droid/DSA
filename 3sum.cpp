class Solution {
public:
 vector<vector<int>> threeSum(vector<int>& nums) {
        const int N = nums.size();
        vector<vector<int>> ans;
        vector<int> numz = nums;
        sort(numz.begin(), numz.end());
        
        int i = 0;
        while (i < N) {
            int j = i + 1;
            int k = N - 1;
            int target = -numz[i];
            while (j < k) {
                int cmp = (numz[j] + numz[k]);
                if (cmp < target) {
                    ++j;
                } else if (cmp > target) {
                    --k;
                } else {
                    ans.push_back({numz[i],numz[j],numz[k]});
                    while(++j < k && numz[j]==numz[j-1]) {}
                    while(--k > j && numz[k]==numz[k+1]) {}
                }
            }
            while (++i < j && numz[i] == numz[i-1]) {}
        }
        
        return ans;
    }
};