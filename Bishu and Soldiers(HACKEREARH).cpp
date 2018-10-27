//
//  Bishu and Soldiers(HACKEREARH).cpp
//  UCA
//
//  Created by Pankaj Devrath on 08/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include <iostream>
#include"algorithm"

using namespace std;

int binarySearch(int * arr, int low, int high, int key){
    while( low < high){
        
        int mid = ( low + high ) /2;
        if( arr[mid] <= key){
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }
    return low;
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for( int i = 0; i < size; i++){
        cin >> arr[i];
    }
    sort( arr, arr + size);
    int sum[size];
    sum [0] = arr[0];
    for(int i = 1; i < size; i++){
        sum[i] = sum[i -1] + arr[i];
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        int index = binarySearch(arr, 0, size , x);
        cout << index << " " << sum[index - 1] << endl;
    }
    return 0;
}
