/*
 * =====================================================================================
 *
 *       Filename:  Q3.cpp
 *
 *    Description:  calculating the minimum, maximum, and average of three input numbers and then uses these functions to compute and display these values based on user-provided 
 *                  input.
 *
 *        Version:  1.0
 *        Created:  07/11/123 01:04:00
 *       Revision:  none
 *       Compiler:  g++
 *   Compile code:  g++ Q3.cpp -o Q3 | This code generates an executable file named 'Q3.exe'.
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *   Organization:  -
 *
 *   Football is probably the most democratic human activity. It belongs to everyone... to poor and rich, illiterate and educated, to all races, cultures, and nations.
 *   — Haris Pasovic
 * =====================================================================================
 *
 */

#include<iostream>

using namespace std;

double average(int n1, int n2, int n3){
    return (n1 + n2 + n3) / 3.0;
}

int minimum(int n1, int n2, int n3){

    // Applies the same logic as the 'maximum' function.
    return (n1 < n3) ? (n1 < n2 ? n1 : n2) : (n3 < n2) ? n3 : n2 ;
}

int maximum(int n1, int n2, int n3){

    // If n1 is bigger than n2 and n1 is bigger than n3, then n1 is the maximum number.
    if(n1 > n2 && n1 > n3)
        return n1;

    // If n2 is bigger than n1 and n2 is bigger than n3, then n2 is the maximum number.
    if(n2 > n1 && n2 > n3)
        return n2;

    // Since n1 and n2 are neither greater than n3 nor equal to n3, it is possible to return n3 as the maximum.
    return n3;
}

int main(){

	int n1, n2, n3;
    cout << "Please, enter three number: ";
	cin >> n1 >> n2 >> n3;

    cout << "Maximum of "<< n1 <<", "<< n2 <<", "<< n3 <<" is: "<< maximum(n1, n2, n3) << endl;
    cout << "Minimum of "<< n1 <<", "<< n2 <<", "<< n3 <<" is: "<< minimum(n1, n2, n3) << "\n";
    cout << "Average of "<< n1 <<", "<< n2 <<", "<< n3 <<" is: "<< average(n1, n2, n3) << endl;

	return 0;
}