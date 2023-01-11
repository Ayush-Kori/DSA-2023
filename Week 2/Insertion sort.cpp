#include <bits/stdc++.h>

using namespace std;


void insretion(vector<int> arr,int length){

   int i,j,key;

   for(int i=1;i<n;i++){

        key = arr[i];
        j = i-1;

        while (j>=0 and arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = key;

   }

}


int main() {

    return 0;
}
