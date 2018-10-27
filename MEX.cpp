
//
//  MEX.cpp
//  UCA
//
//  Created by Pankaj Devrath on 06/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int test;
    cin >> test;
    while( test-- ){
        
        long long int n , x;
        cin >> n >> x;
        int arr[n] ;
        //        int freq[1000000] = {0};
        
        for( int i =0; i < n ; i++){
            cin >> arr [i];
            //        freq[arr[i]]++;
            
        }
        sort ( arr , arr + n);
        
        
        // int  i = 0;
        // while( x ){
        //     if( freq [i] == 0){
        //         x--;
        //     }
        //     i++;
        // }
        // for( ; i < 1000000; i++){
        //     if( freq[i] == 0){
        //         cout << i <<endl;
        //         break;
        //     }
        // }
        int mex = 0;
        for( int  i = 0; i < n - 1 ;i++){
          
            while ( arr [i] == arr[i+1]) {
                i++;
            }
            if( arr [i] == mex){
                mex++;
            }
            else if( arr [i] == mex){
                mex++;
            }
            else if(x != 0){
                
                x--;
                mex++;
                i--;
            }
            else
                break;
            
        }
        while(x){
            x--;
            mex++;
        }
        cout<< mex <<endl;
        
        
        
    }
    return 0;
    
}
