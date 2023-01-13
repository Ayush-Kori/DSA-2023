#include <iostream>  
#include <vector>  

// We perform the steps given below until the unsorted subarray becomes empty
// 1. Pick the minimum element from the unsorted array 
// 2. Swap it with the leftmost element of the unsorted subarray
// 3. Now the leftmost element of unsorted subarray becomes a part(rightmost) of sorted subarray and will
//  not be a part of unsorted array
  
using namespace std;  

int findMinIndex(vector<int> &A,int start){

    int min_index = start;
    ++start;

    while(start< (int)A.size()){
        if(A[start]<A[min_index])
        min_index = start;

        ++start;
    }

    return min_index;

}

void selectionSort(vector<int> &A){

      for(int i=0;i< (int)A.size();i++){
        int min_index = findMinIndex(A,i);

       if(i!= min_index)
          swap(A[i],A[min_index]);

      }
}

int main() {  
    vector<int> A = {5, 2, 6, 7, 2, 1, 0, 3};  
  
    selectionSort(A);  
  
    for(int num : A)  
        cout << num << ' ';  
  
    return 0;  
} 