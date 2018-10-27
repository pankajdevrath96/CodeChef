//
//  PERMEXIS.cpp
//  UCA
//
//  Created by Pankaj Devrath on 07/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include"iostream"
#include"algorithm"
using namespace std;
int main(){
    int test;
    cin >> test;
    while ( test-- ) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        
        int flag  = 1;
        for(int i = 1; i < n; i++){
            
            if( (arr[i] - arr[i - 1] < -1 ) || ( arr[i] - arr[i - 1] >1)){
                flag = 0;
                break;
            }
        }
        
        if(flag){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" <<endl;
        }
    }
    return 0;
    
    
}
