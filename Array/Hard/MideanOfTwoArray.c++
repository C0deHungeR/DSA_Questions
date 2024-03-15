double median(vector<int>& a, vector<int>& b) {
	
	int asize = a.size();
	int bsize = b.size();
	int i = 0 ; 
	int j= 0 ;
	vector<float>ans ;

	while(i < asize && j < bsize){
		if(a[i] < b[j]){
			ans.push_back(a[i]);
			i++;
		}
		else{
			ans.push_back(b[j]);
			j++;
		}
	}
	while(i < asize){
		ans.push_back(a[i++]);
	}
	while(j < asize){
		ans.push_back(a[j++]);
	}
	int size = a.size() + b.size();
 	double fans ;

	if(size%2==0){
		double mid1 = size/2 ;
		double  mid2 = mid1 - 1 ;
		fans = (ans[mid1]+ans[mid2])/2;
	}

	else{
		double mid = size/2 ;
		fans = ans[mid];
	}
    return fans ;

}