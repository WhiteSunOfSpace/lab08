#include <iostream>
#include <fstream>
#include "formatter_ex.h"
#include "solver.h"

int main()
{
    float a = 1;
    float b = 4;
    float c = 3;

    // std::cin >> a >> b >> c;

    float x1 = 0;
    float x2 = 0;
    std::ofstream out;
    out.open("/home/logs/log.txt");

    try
    {
        solve(a, b, c, x1, x2);

        formatter(out, "x1 = " + std::to_string(x1));
        formatter(out, "x2 = " + std::to_string(x2));
    }
    catch (const std::logic_error& ex)
    {
        formatter(out, ex.what());
    }

    return 0;
}
