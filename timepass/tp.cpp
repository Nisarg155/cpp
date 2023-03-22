#include<iostream>

#include<iomanip>
using namespace std;

int main()

{




std::cout << std::left << std::setfill('4');

std::cout << std::setw(9)<<right<< "Hello" << std::endl;

std::cout << std::setw(7) << "Hello" << std::endl << std::endl;

std::cout << std::setprecision(4) << 111.11111 << std::endl;


std::cout << std::setprecision(10) << 111.11111 << std::endl;


std::cout << std::fixed;

std::cout << std::setprecision(2) << 111.11111 << std::endl;
std::cout << std::setprecision(10) << 111.11111 << std::endl;

std::cout << 1.11111 << std::endl << std::endl;
}