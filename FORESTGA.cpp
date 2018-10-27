
//
//  FORESTGA.cpp
//  UCA
//
//  Created by Pankaj Devrath on 08/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include<iostream>
#include<limits.h>
#define ull unsigned long long int
using namespace std;
int main(){
    
    ull n,w,l,ans;
    cin>>n>>w>>l;
    
    ull h[n],r[n];
    
    ull i;
    for(i=0;i<n;i++)  cin>>h[i]>>r[i];
    ull sum;
    ull left=0,right=w;
    
    while(left<right){
        ull mid=(left+right)/2;
        sum=0;
        for(i=0;i<n;i++){
            ull m= h[i] + ( r[i] * mid );
            if( m >= l ) sum += m;
            if( sum >=w )
                break;
            
        }
        if( sum >= w ) right = mid;
        else  left = mid + 1 ;
        
    }
    cout<<right;
}
