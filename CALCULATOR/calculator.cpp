#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> PI;
typedef pair<ll, ll> PL;
typedef set<int, int> si;
typedef map<int, int> mi;

void addition(){
    cout << "Enter two numbers to add: "<<endl;
    int a, b;
    cin >> a >> b;
    cout << "The addition of " << a << " and " << b << " is " << a+b << endl;
}

void subtraction(){
    cout << "Enter two numbers to subtract: "<<endl;
    int a, b;
    cin >> a >> b;
    cout << "The subtraction of " << a << " and " << b << " is " << a-b << endl;
}

void multiplication(){
    cout << "Enter two numbers to multiply: "<<endl;
    int a, b;
    cin >> a >> b;
    cout << "The multiplication of " << a << " and " << b << " is " << a*b << endl;
}

void division(){
    cout << "Enter two numbers to divide: "<<endl;
    int a, b;
    cin >> a >> b;
    cout << "The division of " << a << " and " << b << " is " << (float)a/(float)b << endl;
}

void factorial(){
    cout << "Enter the number you want the factorial of: "<<endl;
    int n;
    cin >> n;
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    cout << "The factorial of " << n << " is " << fact << endl;
}

void power(){
    double a, b;
    cout << "Enter the base and exponent: "<<endl;
    cin >> a >> b;
    cout << "The solution for base " << a << " and exponent " << b << " is " << pow(a,b) << endl;
}

void square(){
    double a;
    cout << "Enter the number you want square of: "<<endl;
    cin >> a;
    cout << "The square of " << a << " is " << pow(a,2) << endl;
}

void cube(){
    double a;
    cout << "Enter the number you want the cube of: "<<endl;
    cin >> a;
    cout << "The cube of " << a << " is " << pow(a,3) << endl;
}

void squareroot(){
    cout << "Enter the number you want the squareroot of: "<<endl;
    double a;
    cin >> a;
    cout << "The squareroot of " << a << " is " << sqrt(a) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << "\tWelcome to Basic Calculator Developed by Vishal....!\n" << endl;
    cout << "Press 0 to quit" << endl;
    cout << "Enter 1 for addition" << endl;
    cout << "Enter 2 for subtraction" << endl;
    cout << "Enter 3 for multiplication" << endl;
    cout << "Enter 4 for division" << endl;
    cout << "Enter 5 for factorial" << endl;
    cout << "Enter 6 for power" << endl;
    cout << "Enter 7 for square" << endl;
    cout << "Enter 8 for cube" << endl;
    cout << "Enter 9 for squareroot" << endl;

    int choice;

    while (1)
    {
        cout << "\nEnter your choice: " << endl;
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(),'\n'); // flush the buffer

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            factorial();
            break;
        case 6:
            power();
            break;
        case 7:
            square();
            break;
        case 8:
            cube();
            break;
        case 9:
            squareroot();
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "*****Wrong choice,Enter valid choice*****!!!!" << endl;
             break;
        }
    }

    return 0;
}