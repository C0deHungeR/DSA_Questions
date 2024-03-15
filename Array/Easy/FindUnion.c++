vector<int> sortedArray(vector<int> a, vector<int> b) {
    int asize = a.size();
    int bsize = b.size();
    int i = 0; 
    int j = 0;
    vector<int> ans;

    while (i < asize && j < bsize) {
       if(a[i] <= b[j]){
           if(ans.size() == 0 || ans.back() != a[i]){
               ans.push_back(a[i]);
              
           }
            i++;
       }
       else{
           if (ans.size() == 0 || ans.back() != b[j]) {
               ans.push_back(b[j]);
              
           }
            j++;
       }
    }
    while (i < asize) {
         if(ans.size() == 0 || ans.back() != a[i]){
               ans.push_back(a[i]);
              
           }
            i++;
    }
    while (j < bsize) {
           if (ans.size() == 0 || ans.back() != b[j]) {
               ans.push_back(b[j]);
              
           }
            j++;
          
    }
     return ans;
}
