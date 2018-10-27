//
//  CDBSTR06.cpp
//  UCA
//
//  Created by Pankaj Devrath on 12/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#define ll long long int
#include "algorithm"
using namespace std;
#include "climits"
#include"iostream"
int main()
{
    //code
    int test;
    cin >> test;
    while( test-- ){
        int size;
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        
        ll max = INT_MIN;
        ll sum = 0;
        int x =0, y =0;
        int prediff = 0;
        
        for(int i = 0; i < size; i++){
            
            sum += arr[i];
            if(max < sum){
                max = sum;
                prediff = x - i;
                y = i;
            }
            else if( max == sum){
                if( x - i > prediff){
                    
                    
                }
            }
            if(sum < 0){
                sum = 0;
                x = i;
            }
            
        }
        
        
        
        
        for (int i = x; i <=y; i++){
            cout << arr[i];
            if(i != y){
                cout << " ";
            }
            else{
                cout << endl;
            }
        }
        
    }
    
    
    return 0;
}
