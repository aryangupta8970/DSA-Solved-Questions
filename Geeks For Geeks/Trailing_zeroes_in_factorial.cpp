class Solution
{
public:
    int trailingZeroes(int N)
    {
        int count = 0;
        while(N>=5)
        {
            count = count + N/5;
            N /= 5;
        }
        
        return count;
    }
};