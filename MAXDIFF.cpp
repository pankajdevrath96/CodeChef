//
//  MAXDIFF.cpp
//  UCA
//
//  Created by Pankaj Devrath on 05/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include "iostream"
#include "algorithm"
using namespace std;
int main(){
    
    int test;
    cin >> test;
    while ( test-- ) {
        int n , k;
        cin >> n >> k;
        int arr[n];
        long long sum = 0;
        for( int  i = 0;i < n; i++){
            cin >> arr[i];
        }
        
        //cout<< sum<< " ";
        sort(arr, arr+n);
        int x = 0;
        if( k > n - k)
            k = n - k;
        long long sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++){
            if(i < k)
                sum1 += arr[i];
            else{
                sum2 += arr[i];
            }
                
            
        }
        
        //cout << diff1 <<" " << diff2 <<endl;
        
        cout << sum2 - sum1 << endl;
    }
    
}
