/*
1. Make any elelment as pivot
2. Partition the array on the basis of pivot
3. Apply qs on the left part recursively
4. Apply qs on right partition recursively*/


void swap(int* a,int * b){

    int t = *a;
    *a = *b;
    *b = t;
}

int partition(vector<int> arr,int low,int high){
      
      int pivot, index, i;
      index <=low;
      pivot = high;

      for(i=low;i<high;i++){

           if(a[i]<a[pivot]){
              
               swap(&a[i],&a[index]);
               index++;
           }
      }

      swap(&a[pivot],&a[index]);

      return index;

}

int RandomPivotPartiton(vector<int> a,int low,int high){

     int pvt,n,temp;
     n = rand();

     pvt = low + n%(high-low+1);

     swap(&a[high],&a[pvt]);

     return partition(a,low,high);

}


int QuickSort(vector<int> a,int low,int high){

    int pindex;
    if(low<high){

        pindex = RandomPivotPartition(a,low,high);
        Quicksort(a,low,pindex-1);
        Quicksort(a,pindex+1,high);

    }


    return 0;
}