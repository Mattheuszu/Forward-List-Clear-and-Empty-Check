/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> list{1, 2, 3};
    
    list.clear();
    
    if(list.empty()){
        std::cout << "List is empty" << std::endl;
    } else {
        std::cout << "List isn't empty" << std::endl;
    }

    return 0;
}