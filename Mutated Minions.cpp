//
//  Mutated Minions.cpp
//  UCA
//
//  Created by Pankaj Devrath on 04/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include<iostream>

using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int len,sum;
        cin>>len>>sum;
        int count = 0;
        while(len--){
            int temp;
            cin>>temp;
            temp +=sum;
            if(temp % 7 == 0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    
}
