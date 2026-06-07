class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // rows
        for(int i=0;i<9;i++){
            map<char,int> mp;

            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    mp[board[i][j]]++;
                    if(mp[board[i][j]] > 1) return false;
                }
            }
        }

        // columns
        for(int i=0;i<9;i++){
            map<char,int> mp;

            for(int j=0;j<9;j++){
                if(board[j][i] != '.'){
                    mp[board[j][i]]++;
                    if(mp[board[j][i]] > 1) return false;
                }
            }
        }

        // 3x3 boxes
        for(int x=0;x<9;x+=3){
            for(int y=0;y<9;y+=3){

                map<char,int> mp;

                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){

                        if(board[x+i][y+j] != '.'){
                            mp[board[x+i][y+j]]++;

                            if(mp[board[x+i][y+j]] > 1)
                                return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};