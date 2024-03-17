class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        long row = matrix.size();
        long col = matrix[0].size();
        long e = row*col - 1 ; // last index
        long s = 0 ; // first index ;
        long mid = s + (e - s)/2 ;
        long r , c ;
        while(s <= e){
            r = mid / col ; // to find index of row of 2d matrix 
            c = mid % col ; // to fing index of column of 2d matrix 
            if(matrix[r][c] == target){
                return true ;
            }
            if(matrix[r][c] > target){
               
                e = mid - 1 ;
            }
            else{
                s = mid + 1 ;
            }
            mid = s + (e - s)/2 ;
        }
        return false ;
    }
};a