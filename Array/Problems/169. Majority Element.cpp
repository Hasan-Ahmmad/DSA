//---------------using sort-----------------
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        return nums[nums.size()/2];
        
    }
};

// ------------------using map----------------
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto x : mp){
            if(x.second> nums.size()/2){
                return x.first;
            }
        }
        return 0;
    }
};

// -------------Moore's voting algorithm-----------
class Solution {
public:
    int majorityElement(vector<int>& nums) {

    int cnt = 0, ans = 0;

    for(int x : nums){
        if(cnt == 0){
            ans = x;
        }
        if(x == ans){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    return ans;

    }
};
