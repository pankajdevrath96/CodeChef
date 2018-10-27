//
//  Little Elephant and Candies.cpp
//  UCA
//
//  Created by Pankaj Devrath on 04/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include "iostream"
using namespace std;
int main(){
    int test;
    cin>>test;
    
    while(test--){
        
        unsigned long int elephents, candies;
        cin>>elephents>>candies;
        unsigned long int sum = 0;
        while(elephents--){
            int temp;
            cin>>temp;
            sum += temp;
        }
        if(sum > candies){
            cout<<"No"<<endl;
        }
        else
            cout<<"Yes"<<endl;
        
        
        
        
    }
    
    
}
