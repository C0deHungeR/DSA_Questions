vector<int> rotateArray(vector<int>arr, int k) {
  int n = arr.size();
  vector<int>ans;
  //int i = 0 ;
  //int j = i + k ;
    for(int  i = 0 ; i < n-k ; i++ ){
        ans.push_back(arr[i+k]) ;
    }
    for(int i = 0 ; i < k ; i++){
      ans.push_back(arr[i]);
    }
    return ans ;

}
