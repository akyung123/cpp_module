#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap robot("Robot");
    ClapTrap copy(robot);

    robot.attack("Target");
    robot.takeDamage(3);
    robot.beRepaired(2);

    for (int i = 0; i < 10; ++i)
        robot.attack("Target");

    return 0;
}