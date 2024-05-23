#include <iostream>
#include <fstream>
#include "formatter_ex.h"
#include "solver.h"

int main()
{
    float a = 1;
    float b = 4;
    float c = 3;

    //std::cin >> a >> b >> c;

    float x1 = 0;
    float x2 = 0;
    // std::ofstream out;
    // out.open("/home/logs/log.txt");

    try
    {
        solve(a, b, c, x1, x2);

        formatter(std::cout, "x1 = " + std::to_string(x1));
        formatter(std::cout, "x2 = " + std::to_string(x2));
    }
    catch (const std::logic_error& ex)
    {
        formatter(std::cout, ex.what());
    }

    return 0;
}
