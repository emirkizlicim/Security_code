
#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

int main()
{

    while (true)
    {

        srand((unsigned)time(NULL));

        std::cout << "Your code has been generating." << std::endl;

        int code = (1000 + rand() % 9001);


        std::cout << code << std::endl;
        std::cout << "please enter the code correctly." << std::endl;

        int code_input;
        std::cin >> code_input;

        if (code_input == code)
        {
            std::cout << "You have successfully entered the code." << std::endl;
            break;
        }
        else {
            std::cout << "You have entered the false code." << std::endl;
            std::cout << "Please try again." << std::endl;
            std::cout << "Please wait until the new code will be generated." << std::endl;
            Sleep(999);
            continue;
        }

    }
    return 0;
}
