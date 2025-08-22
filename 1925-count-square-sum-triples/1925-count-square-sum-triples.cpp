class Solution {
public:
    int countTriples(int n) {

        int count;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                        int a = i*i;
        int b = j*j;
                for(int k=0;k<=n;k++){
                    if(a + b == k*k){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};