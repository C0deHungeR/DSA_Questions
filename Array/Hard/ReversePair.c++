#include <bits/stdc++.h> 
int reversePairs(vector<int> &arr, int n){

	int count = 0;
	int i = 0;
	int j = i+1;
	while(i<n){

		if(j >= n){
			i++;
			j = i + 1;
			continue;
		}
		else if(arr[i] > (2*arr[j])){
			count++;
			j++;
			continue;
		}
		if(j >= n){
			i++;
			j = i + 1;
			continue;
		}
		j++;
	}
	return count;
}