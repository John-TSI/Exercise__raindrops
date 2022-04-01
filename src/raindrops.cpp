// https://exercism.org/tracks/cpp/exercises/raindrops


#include<iostream>
#include<string>
#include<limits> 

using std::cout;
using std::cin;
using std::endl;


// ------ prototypes ------
void raindrops(int);


int main()
{
    int input = 1;
    bool bad_input = false;

    while(input != -1)
    {
        bad_input = false;
        cout << "\nEnter an integer to stringify, or -1 to quit:" << endl;
        cin >> input;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignores rest of user input
            std::cerr << "Invalid input, enter integers only." << endl;
            bad_input = true;
        }

        if(!bad_input)
        {
            raindrops(input);
        }
    }

    return 0;
}


// ------ funct definitions ------
void raindrops(int num)
{
    std::string mod3 = "Pling", mod5 = "Plang", mod7 = "Plong", result = "";
    if(num%3 == 0)
        result += mod3;
    if(num%5 == 0)
        result += mod5;
    if(num%7 == 0)
        result += mod7;
    
    if(result != "")
    {
        std::cout << result << std:: endl;
        result = "";
    }
    else
        std::cout << num << std::endl;
}