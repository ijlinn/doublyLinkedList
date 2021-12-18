#include "iostream"
#include <sstream>
#include <iostream>
#include <cmath>
#include <random>
#include <vector>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <iomanip> 
using namespace std;
//#include "OtherFunctions.h"

int main(){

    int x = 2;
    int* pointerToInteger = &x;

    std::cout << pointerToInteger << std::endl;
    std::cout << *pointerToInteger << std::endl;
    std::cout << x << std::endl;
    
    return 0;

}

