class Solution {
public:
    char kthCharacter(int k) 
    {
        int ans=__builtin_popcount(k-1);
        return 'a'+ans;

    }
};