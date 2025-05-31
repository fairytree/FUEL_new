#include "path_planner_api.h"
#include "rrtstar.h"
#include <iostream>

void getAstarPath()
{
    std::cout << "getAstarPath interface is called: " << std::endl;  
    rrtstar();  
}
