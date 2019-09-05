void swap(int*a ,int*b){
	int temp=*a;
		*a=*b;
		*b=temp;
		return;
}

void sort(int arr[],int len){
	for(int i=0;i<len;i++){
		for(int j=0;j<len-1;++j)
		{
		if(arr[j]>arr[j+1])
			swap(&arr[j],&arr[j+1]);
		}
	}
}
