//
//  COPS.cpp
//  UCA
//
//  Created by Pankaj Devrath on 06/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include"iostream"
#include"algorithm"
using namespace std;
int main(){
    
    int test;
    cin >> test;
    while (test--) {
        int M , x, y;
        cin >> M >> x >> y;
        
        int dis = x * y;
        int covered[101] = {0};
        for( int i = 0; i < M; i++){
            
            int temp;
            cin >> temp;
            
            covered [ min (temp + dis, 100)]-- ;
            covered [ max (temp - dis, 1)]++;
            
        }
        int res = 0;
        int covr = 0;
        for( int  i = 1; i < 101; i++){
            if(covered [i] != 0){
                covr += covered[i];
            }
            else if ( covr == 0 ){
                res++;
            }
            
        }
        cout<< res << endl;
    }
    
}
