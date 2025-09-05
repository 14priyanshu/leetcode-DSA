class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) 
    {
        for(long itr=1;itr<60;itr++)
            {
                long target=num1-itr*num2;
                if(target<itr)
                 break;
                long setbit=__builtin_popcountll(target);
                if(setbit<=itr)
                 return (int)itr;
            }
        return -1;
    }
};