//
//  STICKS.cpp
//  UCA
//
//  Created by Pankaj Devrath on 05/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include "iostream"
#include "algorithm"
using namespace  std;
int main(){
    
    int test;
    cin >> test;
    
    while( test-- ){
        
        int n;
        cin >> n;
        int arr [n] ;
        for(int  i = 0; i < n; i++){
            cin >> arr[i];
        }
        // sorting in decending order
        sort(arr, arr+n, greater<int>());
        int flag1 = 1, flag2 = 1, res  = -1, x;
        for(int i = 0; i < n; i++){
            int count = 1;
            while(arr[i] == arr[i+1]){
                i++;
                count++;
            }
            if(flag1 && count > 1){
                flag1 = 0;
                if(count >= 4){
                    res = arr[i] * arr[i];
                    break;
                }
                else if(count >=2){
                    x = arr[i];
                }
            }
            else if( flag2 && count >1){
                res = x * arr[i];
                break;
            }
        }
            cout << res << endl;
    }
    return 0;
    
}
