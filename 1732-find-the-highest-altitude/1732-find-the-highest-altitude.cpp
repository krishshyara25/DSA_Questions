class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitude(gain.size()+1);
        altitude[0] = 0;
        altitude[1] = gain[0];
        for(int i = 1;i<gain.size();i++){
            altitude[i+1] = altitude[i] + gain[i];
        }
        int maxi = altitude[0];
        for(int i = 0;i<altitude.size();i++){
            maxi = max(maxi,altitude[i]);
        }
        return maxi;
    }
};