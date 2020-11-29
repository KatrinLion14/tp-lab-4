#include "automata.h"
#include <iostream>

int main() {
    Automata machine;
    machine.on();
    
    std::cout << "State: " << machine.getState() << std::endl;
    machine.coin(60);
    machine.getMenu();
    machine.choice(10);
    machine.coin(20);
    machine.choice(10);
    machine.cook();
    machine.off();
    return 0;
}