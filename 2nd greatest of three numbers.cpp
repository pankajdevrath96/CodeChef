
//
//  2nd greatest of three numbers.cpp
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
        int num1,num2,num3;
        cin>>num1>>num2>>num3;
        if(num1 > num2){
            if(num1 > num3){
                if(num2 > num3)
                    cout<<num2<<endl;
                else
                    cout<<num3<<endl;
            }
            else
                cout<<num1<<endl;
        }
        else {
            if(num1 > num3){
                
                if( num2 > num3)
                    cout<<num1<<endl;
                else
                    cout<<num2<<endl;
            }
            else if(num2 > num3)
                cout<<num3<<endl;
            else
                cout<<num2<<endl;
        }
    }
}
