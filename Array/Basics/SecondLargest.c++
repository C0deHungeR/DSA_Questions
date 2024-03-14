vector<int> getSecondOrderElements(int n, vector<int> a) {
    int largest = a[0];
    int smallest = a[0] ;
    for(int i = 1 ; i< n ; i++){
        largest =max(largest,a[i]);
        smallest =min(smallest,a[i]);
    }
    int ans1 = INT_MIN ;
    int ans2 = INT_MAX ;
    for(int j = 0 ; j < n ; j++){
        if(a[j] != largest ){
            ans1 = max(ans1,a[j]) ;
        }
        if(a[j] != smallest){
            ans2 = min(ans2,a[j]);
        }
    }
    vector<int>ans ;
    ans.push_back(ans1);
    ans.push_back(ans2);
    return ans ;
}
