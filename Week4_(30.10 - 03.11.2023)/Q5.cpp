/*
 * =====================================================================================
 *
 *       Filename:  Q5.cpp
 *
 *    Description:  Make a function that takes a an integer, and based of the values draws patterns (pyramid).
 *
 *        Version:  1.0
 *        Created:  07/11/123 01:30:00
 *       Revision:  none
 *       Compiler:  g++
 *   Compile code:  g++ Q5.cpp -o Q5 | This code generates an executable file named 'Q5.exe'.
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *   Organization:  -
 *
 *   My motto has always been, 'Never give up.'
 *   — Edin Dzeko
 * =====================================================================================
 *
 */

#include<iostream>

using namespace std;

void printPyramid(int h){

    for (int i = 0; i < h ;i++){

        for (int j = h - i; j > 0 ; j--)
            cout << " ";

        for (int k = 0; k <= i ; k++)
            cout << "* ";

        cout << endl;
    }
}


int main(){

    int n;
    cout << "Please, enter the height of the pyramid: ";
    cin >> n;

    printPyramid(n);

    return 0;
}