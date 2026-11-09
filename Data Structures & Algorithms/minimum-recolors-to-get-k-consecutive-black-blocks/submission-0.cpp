class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int left=0, res=0, size=blocks.size();
        int minim = INT_MAX;

        for(int right=0; right<size; right++){
            if(blocks[right]=='W')res++;
            if(right-left>k-1){
                if(blocks[left]=='W'){
                    res--;
                }
                left++;
            }
            if(right-left==k-1)
            minim = min(minim, res);
        }
        return minim;
    }
};