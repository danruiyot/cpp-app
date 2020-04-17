//  String class test program
//
//  Tests: XXX
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main(){


    {

        String one = "gabc";

        String result = one.substr(0,0);

        std::cout << "String length: " << result.length() << std::endl;

        std::cout << "String Capacity: " << result.capacity() << std::endl;

        std::cout << "Substr Result: " << result << std::endl;

        assert(one.substr(0,0) == "g");

    }
{

        String one = "adsfegfrhgtldjfejalasdasd";

        String result = one.substr(17,18);

        std::cout << "String length: " << result.length() << std::endl;

        std::cout << "String Capacity: " << result.capacity() << std::endl;

        std::cout << "Substr Result: " << result << std::endl;

        assert(one.substr(17,18) == "al");

    }
{

        String one = "agb";

        String result = one.substr(0,3);

        std::cout << "String length: " << result.length() << std::endl;

        std::cout << "String Capacity: " << result.capacity() << std::endl;

        std::cout << "Substr Result: " << result << std::endl;

        assert(result == "agb");

    

    

    }

std::cout << "Done testing substring" << std::endl;



}
