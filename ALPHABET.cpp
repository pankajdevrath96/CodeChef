//
//  ALPHABET.cpp
//  UCA
//
//  Created by Pankaj Devrath on 04/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include<iostream>
using namespace std;
int main(){


    string str;
    cin>>str;
    int arr[26] = {0};

    for(int i = 0; i < str.length(); i++){
        int x = str[i] - 'a';
        arr[x] = 1;


    }
    int test;
    cin >> test;
    while( test-- ){
        string str1 ;
        cin >> str1;

        int flag  = 1;
        for(int i = 0; i < str1.length(); i++){
            if(arr[str1[i] - 'a'] ==0){
                flag = 0;
                break;
            }


        }
       
        
        if(flag){
            cout << "Yes" << endl;

        }
        else{
            cout << "No" << endl;
        }



    }

}

