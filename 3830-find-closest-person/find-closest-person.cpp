class Solution {
public:
    int findClosest(int x, int y, int z) {
        int yfirst= abs(z-y);
        int xfirst =abs(z-x);
        if(yfirst>xfirst){
            return 1;
        }
        else if(xfirst>yfirst){
            return 2;
        }
        else{
              return 0;
        }
    }
};