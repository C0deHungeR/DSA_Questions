vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {

   int row = MATRIX.size();
   int col = MATRIX[0].size();
   int count = 0 ;
   int total = row*col ;

   int startingcol = 0 ;
   int startingrow  = 0 ;
   int endingcol = col - 1 ;
   int endingrow = row - 1 ; 
   vector<int>ans ;
     
    while(count < total){

        //printinng starting row ;
        for(int i = startingcol ; i <= endingcol && count < total ; i++){

            ans.push_back( MATRIX[startingrow][i] ) ;
            count++;

        }
        startingrow++;
        //printing ending column 
        for(int i =startingrow ; i <= endingrow && count <total ; i++ ){

            ans.push_back(MATRIX[i][endingcol]);
            count++;

        }
        endingcol-- ;

        // Print the elements of the ending row
        for(int i = endingcol ; i >= startingcol && count < total ; i--) { // Changed loop condition
            ans.push_back(MATRIX[endingrow][i]);
            count++;
        }

        endingrow-- ;

        //printing starting col ;
        for(int i = endingrow ;  count < total && i >=startingrow ; i-- ){

            ans.push_back(MATRIX[i][startingcol]);
            count++;

        }
        startingcol++;

    }
    return ans ;

}