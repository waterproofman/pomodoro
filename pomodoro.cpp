#include <iostream>
#include <chrono>
#include <thread>

int main(void)
{
using namespace std::chrono_literals;
    std::cout<<"Pomodoro counter started!"<<std::endl;
    std::this_thread::sleep_for(25min);
    for(int i = 0; i < 50; i++)
    {
        for(int j = 0; j < 5; j++)
            std::cout<<"POMODORO OVER    ";
        std::cout<<std::endl;
    }
    return 0;
}
