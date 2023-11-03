#include<iostream>

using namespace std;

void my_calc(){

	// Which operation is chosen.
    char ch = ' ';

	// A variable to determine whether to continue. Do you think it is necessary?
    char con = ' ';

	// Numbers.
    int n1, n2;

    do{

        cout << "Hello to silly calculator…\nwhat do you like to do ( +, - , * , / ) two numbers? : ";
        cin >> ch;

        cout << "You would like to use which two numbers: ";
        cin >> n1;
        cin >> n2;

        switch(ch){
            case '+':
                cout << "The addition of "<<n1<<" and "<<n2<<" is "<<n1+n2<<endl;
                break; // Please make this line a comment line, choose the addition, and then see what will happen.

            case '-':
                cout << "The subtraction of "<<n1<<" and "<<n2<<" is "<<n1-n2<<endl;
                break;

            case '/':
                cout << "The division of "<<n1<<" and "<<n2<<" is "<<(double)n1/n2<<endl;
                break;

            case '*':
                cout << "The multiplication of "<<n1<<" and "<<n2<<" is "<<n1*n2<<endl;
                break;
            
            default:
                cout << "Invalid Input.\n";
                break;
        }

        cout << "Would like another operation ? (y, or n): ";
        cin >> con;

    } while (con == 'y' || con == 'Y');
}

int main(){

    my_calc();

    return 0;
}