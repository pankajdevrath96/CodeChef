//
//  MIXCOLOR.cpp
//  UCA
//
//  Created by Pankaj Devrath on 07/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int size;
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        sort(arr, arr+size);
        int res = 0;
        for(int i = 0; i < size - 1; i++){
            if(arr[i] == arr[ i + 1]) res++;
        }
        cout << res <<endl;
    }
}
