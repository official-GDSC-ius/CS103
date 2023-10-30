#include<iostream>

using namespace std;

int main(){

    int num=0, num2, temp, reversed=0;

    // Since the question ask to force the User enter a number till it's bigger than 0.
    do{
        cout << "Please enter a number to check: ";
        cin >> num;
    }while(num < 0);

    num2 = num;

    for (; num2 ; num2/=10){
        reversed += num2 % 10;
        reversed *= 10;
    }

    cout << "The number is " << ( ( (reversed/10) == num ) == 0 ? "not " : "") << "Polindrome." << endl;
    return 0;
}
