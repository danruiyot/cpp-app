//  String class test program
//
//  Tests: XXX
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    char ch='A',ch1='Z';
    String  str(ch);
    String str1(ch1);

    // VERIFY
    assert(str < str1);
  }
    std::cout<<"done testing lessThan\n";
    std::cout<<" testing  lessTHan passed\n";
    std::cout<<std::endl;
    std::cout<<std::endl;

}


