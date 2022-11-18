//https://leetcode.com/problems/ugly-number/
class Solution {
public:
    bool isUgly(int n) 
    {
        while(n)
        {
            if(n == 1)
            {
                return true;
            }
            if(n%2 == 0)
            {
                n = n/2;
            }
            else if(n%3 == 0)
            {
                n = n/3;
            }
            else if(n%5 == 0)
            {
                n = n/5;
            }
            else
                return false;
        }
        return false;
    }
};