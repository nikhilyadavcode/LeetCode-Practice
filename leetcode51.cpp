#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    bool issafe(int row,int col,vector<vector<char>>&board){
        for(int j=0;j<board.size();j++){
            if(board[row][j]=='Q'){
                return false;
            }
        }
        for(int i=0;i<board.size();i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        for(int r=row,c=col;c>=0 && r>=0;c--,r--){
            if(board[r][c]=='Q'){
                return false;
            }
        }
        for(int r=row,c=col;c<board.size() && r>=0;c++,r--){
            if(board[r][c]=='Q'){
                return false;
            }
        }
        for(int r=row,c=col;c>=0 && r,board.size();c--,r++){
            if(board[r][c]=='Q'){
                return false;
            }
        }
        for(int r=row,c=col;c<board.size() && r<board.size();c++,r++){
            if(board[r][c]=='Q'){
                return false;
            }
        }
        return true;
    }
    void SaveBoard(vector<vector<char>>&board,vector<vector<string>>&allboards){
        vector<string>newBoard;
        for(int i=0;i<board.size();i++){
            string row="";
            for(int j=0;j<board.size();j++){
                if(board[i][j]=='Q'){
                    row+='Q';
                }
                else{
                    row+='.';
                }
            }
            newBoard.push_back(row);
        }
    
        allboards.push_back(newBoard);
    }
        void helper(vector<vector<char>>&board,vector<vector<string>>allBoards,int col){
            if(col==board.size()){
                 SaveBoard(board,allBoards);
                 return;                 
            }
         for(int row=0;row<board.size();row++){
          if(issafe(row,col,board)){
            board[row][col]='Q';
            helper(board,allBoards,col+1);
            board[row][col]='.';
        }
    }
        }
        vector<vector<string>>SolveNQueen(int n){
            vector<vector<string>>allboards;
            vector<vector<char>>board(n,vector<char>(n,'.'));
            return allboards;
        }
    };
int main(){
    Solution solution;
    int n=4;
    vector<vector<string>>result=solution.SolveNQueen(n);
    for(const auto &board:result){
        for(const auto &row: board){
            cout<<row<<endl;
        }
    }
}