class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long max1 = LLONG_MIN;
        long long max2 = LLONG_MIN;
        long long max3 = LLONG_MIN;

        for(int num : nums){
            if(num>max1){
                max3=max2;
                max2=max1;
                max1=num;
            }
            else if(num<max1 && num>max2){
                max3=max2;
                max2=num;
            }
            else if(num<max2 && num>max3){
                max3=num;
            }
        }
        if(max3 == LLONG_MIN){
            return max1;
        }
        return max3;
    }
};