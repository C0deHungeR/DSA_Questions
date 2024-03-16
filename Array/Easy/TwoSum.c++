string read(int n, vector<int> book, int target)
{
    bool ans = false ;
    int count = 0 ;
    for(int i = 0 ; i < book.size()-1 ; i++){
       for(int j = i +1 ; j < book.size() ; j++){
           if(book[i] + book[j] == target){
               count++;
               if(count > 0){
                   return "YES";
               }
            }
        }
     }
     return "NO";
}
