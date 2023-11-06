/*
 * =====================================================================================
 *
 *       Filename:  Q2.cpp
 *
 *    Description:  a program that prompts the user to input the number of greetings they want and then displays a "Hello firned, C++ is fun !" message that many times, with the number of repetitions determined by the user's input.
 *
 *        Version:  1.0
 *        Created:  07/11/123 00:38:00
 *       Revision:  none
 *       Compiler:  g++
 *   Compile code:  g++ Q2.cpp -o Q2 | This code generates an executable file named 'Q2.exe'.
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *   Organization:  -
 *
 *   What’s in a name? that which we call a rose By any other name would smell as sweet.
 *   —William Shakespeare
 * =====================================================================================
 *
 */

#include<iostream>

using namespace std;

void greetings(){

	int n;
	cout << "Hello.. how many greetings you want: ";
	cin >> n;

	for (int i = 0; i < n; i++)
		cout << "Hello firned, c++ is fun !\n";
}

int main(){

	greetings();

	return 0;
}