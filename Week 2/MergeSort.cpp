
void merge(int *arr,int start, int mid,int end){

  int temp[end-start+1];

  int i= start, j = mid +1, k = 0;

  while(i<=mid and j<=end){

         if(arr[i]<=arr[j]){
            temp[k] = arr[i];
            k+=1;
            i+=1;
         }
         else{
            temp[k] = arr[j];
            k+=1;
            j+=1;
         }
  }

  while(i<=mid){
    temp[k] = arr[i];
    k+=1;
    i+=1;
  }

   while(j<=end){
    temp[k] = arr[j];
    k+=1;
    j+=1;
  }

  for(i=start;i<=end;i+=1){
    arr[i] = temp[i+start];
  }

}

void mergeSort(int *arr,int start,int end){

    int mid = (start + end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}