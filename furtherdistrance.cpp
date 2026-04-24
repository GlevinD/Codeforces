class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.length();
        int point = 0;
        int cnt_L=0,cnt_R =0;
        for(int i = 0 ; i < n ; i++){
            if(moves[i] == 'L')cnt_L++;
            else if(moves[i] == 'R')cnt_R++;
        }
        for(int i = 0 ; i < n ; i++){
            if(cnt_L > cnt_R){
                if(moves[i] == 'L' || moves[i] == '_')point--;
                else point++;
            }
            else if(cnt_R > cnt_L){
                if(moves[i] == 'R' || moves[i] =='_')point++;
                else point--;
            }
            else if(cnt_R == cnt_L){
                if(moves[i] == 'L')point--;
                else if(moves[i] == 'R' || moves[i] == '_')point++;
            }
        }
        return abs(point);
    }
};
