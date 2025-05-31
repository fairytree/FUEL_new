#include "controller_api.h"
#include "lqr.h"
#include "mpc.h"
#include <iostream>

void getMPCCommand()
{
    std::cout << "getMPCCommand interface is called: " << std::endl;  
    mpc();  
}

void getLQRCommand()
{
    std::cout << "getLQRCommand interface is called: " << std::endl;  
    lqr();  
}

