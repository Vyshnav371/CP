class Solution {
public:
    bool isPalindrome(int x) {
        bool ans = false;
        if(x<0)
            return ans;
        else{
            int original = x;
            long long rev = 0;
            while(x){
                rev *= 10;
                rev += x%10;
                x /= 10;
            }
            if(original==rev)
                ans=true;
        }
        return ans;
    }
};