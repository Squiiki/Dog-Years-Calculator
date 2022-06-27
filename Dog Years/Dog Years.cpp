// Purpose:     This basic program will convert the age of dogs in human years to their equivalent age in dog years (Older than 2 years)
// Author:      Braeden Corr
// Date:        May 11th, 2020

#include <iostream>
#include <string>

int main()
{
    //Declare some variables
    int dogAge = 0;
    std::string dogName = "Unknown";

    std::cout << "*********************************************** \n";
    std::cout << "******* The Amazing Dog Age Calculator ******** \n";
    std::cout << "*********************************************** \n";
    std::cout << "**                                           ** \n";
    std::cout << "**                                           ** \n";
    std::cout << "**                  WELCOME                  ** \n";
    std::cout << "**                                           ** \n";


    //What is the dogs name?
    std::cout << "**          What is your dog's name?         ** \n";
    std::cout << "**                                           ** \n";
    std::cout << "**                   ";
    std::cin >> dogName;
    std::cout << "**                                           ** \n";

    //What is the dogs age?
    std::cout << "**   ";
    std::cout << dogName << "? How cute! How old is " << dogName << "? \n";
    std::cout << "**                   ";
    std::cin >> dogAge;
    std::cout << "**                                           ** \n";
    std::cout << "**                                           ** \n";

    //The first 2 years of a dogs life count as 21 human years
    int earlyYears = 21;

    //Each following year counts as 4 human years
    int laterYears = (dogAge - 2) * 4;

    //How old is the dog in human years
    int humanYears = earlyYears + laterYears;

    //Output the results
    std::cout << "**  ";
    std::cout << dogName << " is " << humanYears << " years old in human years! :) \n";
    std::cout << "**                                           ** \n";
    std::cout << "**                                           ** \n";
    std::cout << "*********************************************** \n";
    std::cout << "*********************************************** \n";
}