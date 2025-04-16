	for(int i=0;i<n;i++){
		if(a[i]>maximum){
			smax=maximum;
			maximum=a[i];
		}
	}
	return smax;
}