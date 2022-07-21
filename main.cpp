#include <iostream>


int main(int argc, char * argv[])
{
    for (auto i = 0; i < argc; ++i)
    {
        std::cout << argv[i] << '\n';
    }

    return 0;
}
