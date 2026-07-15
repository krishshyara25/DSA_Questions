class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>map;
        int left = 0;
        int max_fruits = 0;
        for(int right = 0;right<fruits.size();right++){
            map[fruits[right]]++;
            while(map.size() > 2){
                map[fruits[left]]--;
                if(map[fruits[left]] == 0){
                    map.erase(fruits[left]);
                }
                left++;
            }
            max_fruits = max(max_fruits,right - left + 1);
        }
        return max_fruits;
    }
};