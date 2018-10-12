#include <iostream>
#include <windows.h>
#include <math.h>


using namespace std;


void greaterOrLessThanFunc(float i);
void yourData(string name, int age, int height, int weight);
void ageCalc(int dayBirth, int monthBirth, int yearBirth);
void twoDArray();
void offens(string a);
void calculator(int x, int y, char opr);

int main()
{
    return 0;
}


























void calculator(int x, int y, char opr)
{
    char oper[] = {'+','-','/','*','**','%'};
    cout << "Welcome to the calculator" << endl << endl;
    Sleep(1000);
    cout << "With this calculator you can use the following operators: + - / * ** %" << endl;
    cout << "Enter your preferred operator: " << endl;

    cin >> opr;
    if(opr == oper[0] || opr == oper[1] || opr == oper[2] || opr == oper[3] || opr == oper[4] || opr == oper[5]){
    cin >> x;
    cin >> y;


    switch(opr)
    {
    case '+':
        cout << x + y << endl;
        break;
    case '-':
        cout << x - y << endl;
        break;
    case '/':
        cout << x / y << endl;
        break;
    case '*':
        cout << x * y << endl;
        break;
    case '**':
        cout << pow(x,y) << endl;
        break;
    case '%':
        cout << x % y << endl;
        break;
    default:
        calculator(0,0,'n');

    }
    }else{
    calculator(0,0,'.');
    }





}



void offens(string a)
{
    cin >> a;
    if(a == "Kasper")
    {
        cout<< "Idiot!";
    }
    else
    {
        offens("");
    }
}

void twoDArray()
{

    int aryX = 3;
    int aryY = 5;
    int ary[aryX][aryY] =
    {
        {3,1,5,6,7},
        {8,5,3,1,9},
        {5,12,56,2}
    };

//nested for loop with 2D array
//for(int i = 0; i < 3; i++){
//for(int j = 0; j < 4 ; j++){
//cout << ary[i][j] << " ,";
//}
//}

//prints out random values from the 2D array
//cout << "Input 2 number into the program to check what's in the 2D array" << endl;
//cin >> aryX;
//cin >> aryY;
//cout << ary[aryX][aryY] << endl;

}



void ageCalc(int dayBirth, int monthBirth, int yearBirth)
{


    cout << "Enter day of birth: ";
    cin >> dayBirth;
    cout << "Enter month of birth: ";
    cin >> monthBirth;
    cout << "Enter year of birth: ";
    cin >> yearBirth;
    cout << "\n\n";
    cout << "Your age: " << 2018-yearBirth << " years, " << 12-monthBirth << " months, " << 31-dayBirth << " days" << endl << endl;

    if(yearBirth >= 30)
    {
        cout << "You are still young";
    }
    else
    {
        cout << "Sorry to say it but you're old" << endl;
    }
}


void yourData(string name, int age, int height, int weight)
{

    cout << "Welcome to Data presenter" << endl << endl;;
    Sleep(2000);
    cout << "You will be allowed to enter your data soon"  << endl << endl;
    Sleep(1000);
    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height: ";
    cin >> height;
    cout << "Enter your weight: ";
    cin >> weight;
    cout << "\n";
    Sleep(1000);
    cout << "Thank you, your data will be shown soon" << endl << endl;
    Sleep(2000);
    cout << "Your name is: " << name << endl;
    cout << "Your age is: " << age << endl;
    cout << "Your height is: " << height << " CM" << endl;
    cout << "Your weight is: " << weight << " KG" << endl << endl;
    Sleep(1000);
    cout << "Thank you for using DATA presenter" << endl;
}


void greaterOrLessThanFunc(float i)
{


    cout << "Write your input: "   << endl;
    cin >> i;

    if(i >= 10)
    {
        cout << "greater than 10" << endl;
    }
    else if( i <= 10)
    {
        cout << "Less than 10" << endl;
    }
    else
    {
        cout << "input = 10" << endl;
    }

}
