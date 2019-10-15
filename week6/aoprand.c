int Max(int* a,int n){
	int m;
	int i=0;
	for(i=0;i<n;i++){
		if(a[i]>m) m=a[i];
	}
	return m;
}


