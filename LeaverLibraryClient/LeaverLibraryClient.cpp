#include "leaver.h"

int main()
{
    Leaver::Leaver temp;
    std::string name;

    std::cout << "Введите имя: ";
    std::cin >> name;
    temp.leave(name);

    return 0;
}