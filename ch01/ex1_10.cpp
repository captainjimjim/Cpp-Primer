#include <iostream>
int main()

{
    int sum = 0, val = 10;
    
    while (val >= 0)
    {
        sum += val;
        val--;
    }
    

    std::cout << "The sum of the numbers ranging from 0 to 10 inclusively is " << sum << std::endl;
    return 0;





}
