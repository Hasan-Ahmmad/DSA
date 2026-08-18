// ---------------XOR(as question required)--------------
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i : nums) {
            ans ^= i;
        }
        return ans;
    }
};

// below solutions don't satisfy question's requirements

// ---------------------map---------------------
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto x : mp) {
            if (x.second == 1) {
                return x.first;
            }
        }
        return -1;
    }
};

//-----------------------sort--------------------
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i+=2) {
            if (nums[i] != nums[i - 1]) {
                return nums[i-1];
            }
        }
        return nums[nums.size()-1];
    }
};
