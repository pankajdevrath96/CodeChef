////
////  KCHESS.cpp
////  UCA
////
////  Created by Pankaj Devrath on 27/10/18.
////  Copyright © 2018 Pankaj Devrath. All rights reserved.
////
//
//#include <stdio.h>
//All submissions for this problem are available.Abhineet the Chess master of NIT Kurukshetra got bored of 8x8 chess board and invented the new variation of Chess, the one on an infinite chess board. There is only a white king and N
//black knights. The white king has to avoid checkmate as long as it can.
//
//A situation is given. Determine if white king is in checkmate or not. The white king is in checkmate if and only if it is in check and it is not able to move to any of its neighboring positions which is not in check.
//
//Input:
//The first line will contain T
//, number of test cases. Then the test cases follow.
//The first line of each test case contains a single integer N
//.
//The next N line contains 2 space-separated integers Xi
//and Yi
//denoting the position of knights.
//The next line contains 2 space-separated integers A
//and B
//denoting the position of king
//Output:
//Print a single line corresponding to each test case — “YES” (without quotes) – if the king is in checkmate and “NO” (without quotes) – if the king is not in checkmate.
//
//Constraints
//1≤T≤5
//1≤N≤105
//−109≤Xi,Yi,A,B≤109
//Sample Input:
//2
//6
//1 0
//0 2
//2 5
//4 4
//5 0
//6 2
//3 2
//4
//5 6
//3 5
//2 8
//-8 -8
//0 0
//Sample Output:
//YES
//NO
//
//EXPLANATION:
//In the first test case, the king is in cannot move to any valid position In second test case, the king can easily make a valid move.




#include <iostream>
#include <limits>
#include<cmath>
#include<algorithm>
#include "vector"
//#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    // your code goes here
    ll test;
    cin >> test;
    while( test-- ){
        
        ll size;
        cin >> size;
        vector < ll> vect1;
        vector <ll> vect2;
        
        for(ll i = 0; i < size; i++){
            ll x ,y;
            cin >> x >> y;
            vect1.push_back(x);
            vect2.push_back(y);
        }
        ll a, b;
        cin >> a >> b;
        sort(vect1.begin(), vect1.end() );
        sort(vect2.begin(), vect2.end());
        if( ( binary_search( vect1.begin(), vect1.end() , a ) || binary_search( vect2.begin(), vect2.end() , b )) &&
           ( binary_search( vect1.begin(), vect1.end() , a - 1) || binary_search( vect1.begin(), vect1.end() , a + 1 ) ||
            binary_search( vect2.begin(), vect2.end() , b - 1) || binary_search( vect2.begin(), vect2.end() , b + 1 ))){
               cout << "YES" << endl;
           }
        else {
            cout << "NO" << endl;
        }
        
        
    }
    return 0;
}
