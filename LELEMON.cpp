//
//  LELEMON.cpp
//  UCA
//
//  Created by Pankaj Devrath on 07/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include "iostream"
#include "algorithm"
#include "vector"
#define ll long long int

using namespace std;

int main(){
    
    int test;
    cin >> test;
    while ( test-- ) {
        int n , m;
        cin >> n >> m;
        int *room_visited = new int[m];
        int freq_room_visited[105] = {0};
        for(int  i = 0; i < m; i++){
            cin >> room_visited[ i ];
            freq_room_visited[ room_visited[ i ] ]++;
        }
        ll sum = 0;
        for(int i = 0; i < n; i++){
            int size;
            cin >> size;
            int *drinks = new int[size];
            for(int  j = 0; j < size ;j++){
                cin >> drinks[j];
            }
            if(freq_room_visited[i] != 0){
                sort ( drinks , drinks + size);
                while(size && freq_room_visited[i]){
                    sum += drinks[size - 1];
                    size--;
                    freq_room_visited[i]--;
                }
            }
        }
        cout << sum << endl;
    }
}
