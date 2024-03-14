int traffic(int n, int m, vector<int> vehicle) {
	int count1 =0 ;
	int count0 = 0 ;
	for(int i = 0 ; i < n ; i++){
		if(vehicle[i] == 1 ){
			count1++;
		}
		else{
			count0++;
		}
	}
	if(count0 <= m){
		return count0+count1 ;
	}
	else{
		int j = 0 ;
		for(int i = 0 ; i < n ; i++){

			if(j < m){
				if(vehicle[i] == 0){
					count1++;
					j++ ;
				}
			}
			else{
				break ;
			}
		}
		return count1 ;
	}
}
