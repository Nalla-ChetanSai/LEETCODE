class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int xL = max(rec1[0],rec2[0]);
        int xR = min(rec1[2],rec2[2]);
        int yL = max(rec1[1],rec2[1]);
        int yR = min(rec1[3],rec2[3]);
        int width = xR - xL ;
        int length = yR - yL;
        return length>0 && width>0;
    }
};