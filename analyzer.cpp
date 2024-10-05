// Created by tanvi on 10/4/2024.
//Lab Partner Haoran Shi
#include <iostream>
#include <vector>
#include <chrono>
#include "StringData.h"


//Linear Search Algorithm
int linear_search(const std::vector<std::string>& container, const std::string& element)
{

    for(int i = 0; i < container.size(); i++)
    {
        if(container[i] == element){

            return i;

        }
    }

    return -1;
}

//Binary Search Algorithm
int binary_search(const std::vector<std::string>& container, const std::string& element)
{
    int low = 0;
    int high = container.size() - 1;
    int mid = (high + low)/2;
    while(low <= high)
    {
        mid = (high+low)/2;
        if(container[mid] == element)
        {
            return mid;
        }
        else if(container[mid] <element)
        {
            low = mid + 1;
        }
        else if(container[mid] >element) {
            high = mid - 1;
        }
    }

    return -1;
}

//Main method, records times for each search algorithm with different strings
int main()
{
    std::cout<<"Searching for 'not_here':"<< std::endl;
    auto beginTime = std::chrono::system_clock::now();
    std::cout<<"Index is "<< linear_search(getStringData(), "not_here")<< std::endl;
    auto endTime = std::chrono::system_clock::now();
    auto runTime = std::chrono::duration<float> ((endTime - beginTime).count());
    std::cout<<"Linear Search Run Time: "<<runTime.count()<< "\n" <<std::endl;

    auto beginTime1 = std::chrono::system_clock::now();
    std::cout<<"Index is " << binary_search(getStringData(), "not_here")<< std::endl;
    auto endTime1 = std::chrono::system_clock::now();
    auto runTime1 = std::chrono::duration<float> ((endTime1 - beginTime1).count());
    std::cout<<"Binary Search Run Time: "<<runTime1.count()<< "\n"<< std::endl;

    std::cout<<"Searching for 'mzzzz':"<< std::endl;
    auto beginTime2 = std::chrono::system_clock::now();
    std::cout<<"Index is " << linear_search(getStringData(), "mzzzz")<< std::endl;
    auto endTime2 = std::chrono::system_clock::now();
    auto runTime2 = std::chrono::duration<float> ((endTime2 - beginTime2).count());
    std::cout<<"Linear Search Run Time: "<<runTime2.count()<< "\n"<< std::endl;

    auto beginTime3 = std::chrono::system_clock::now();
    std::cout<<"Index is "<< binary_search(getStringData(), "mzzzz")<< std::endl;
    auto endTime3 = std::chrono::system_clock::now();
    auto runTime3 = std::chrono::duration<float> ((endTime3 - beginTime3).count());
    std::cout<<"Binary Search Run Time: "<<runTime3.count()<< "\n"<< std::endl;

    std::cout<<"Searching for 'aaaaa':"<< std::endl;
    auto beginTime4 = std::chrono::system_clock::now();
    std::cout<<"Index is " << linear_search(getStringData(), "aaaaa")<< std::endl;
    auto endTime4 = std::chrono::system_clock::now();
    auto runTime4 = std::chrono::duration<float> ((endTime4 - beginTime4).count());
    std::cout<<"Linear Search Run Time: "<<runTime4.count()<< "\n"<< std::endl;

    auto beginTime5 = std::chrono::system_clock::now();
    std::cout<<"Index is " << binary_search(getStringData(), "aaaaa")<< std::endl;
    auto endTime5 = std::chrono::system_clock::now();
    auto runTime5 = std::chrono::duration<float> ((endTime5 - beginTime5).count());
    std::cout<<"Binary Search Run Time: "<<runTime5.count()<< "\n"<< std::endl;
    return 0;
}
