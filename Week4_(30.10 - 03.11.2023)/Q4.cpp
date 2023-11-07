/*
 * =====================================================================================
 *
 *       Filename:  Q4.cpp
 *
 *    Description:  Make a function that takes a number and returns if it is odd or even.
 *
 *        Version:  1.0
 *        Created:  07/11/123 01:18:00
 *       Revision:  none
 *       Compiler:  g++
 *   Compile code:  g++ Q4.cpp -o Q4 | This code generates an executable file named 'Q4.exe'.
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

double isEven(int n){
    return (n % 2) == 0;
}

int main(){

	int n;
    cout << "Please enter a number to check if it is even or odd: ";
	cin >> n;

    cout << "The number "<< n << " is "<< ( isEven(n) ? "even " : "odd ") << endl;

	return 0;
}