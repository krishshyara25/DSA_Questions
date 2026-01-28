class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int rotation = 0;
        while(!students.empty()){
            if(students[0] == sandwiches[0]){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                rotation = 0;
            }else{
                int temp = students[0];
                students.erase(students.begin());
                students.push_back(temp);
                rotation++;
            }
            if(rotation == students.size()){
                break;
            }
        }
        return rotation;
        
    }
};