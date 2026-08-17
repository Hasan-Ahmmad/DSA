class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        vector<int> ans;
        int n = grid.size();
        vector<int> freq((n*n)+1);

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                freq[grid[i][j]]++;
            }
        }

        for(int i=1; i<n*n+1; i++){
            if(freq[i] == 2){
               ans.push_back(i);
                break;
            }
        }
        for(int i=1; i<n*n+1; i++){
            if(freq[i] == 0){
                ans.push_back(i);
                break;
            }
        }

        return ans;
    }
};
