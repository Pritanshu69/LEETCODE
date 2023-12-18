class Solution {
public:
    int subtractProductAndSum(int n) {
        int pdt=1;
        int sum=0;

        while(n!=0){
            int rem=n%10;

            pdt = pdt * rem;
            sum = sum + rem;

            n = n/10;
        }
        int ans = pdt - sum;
        return ans;
    }
};