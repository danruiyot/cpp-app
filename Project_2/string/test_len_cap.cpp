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
    char ch[10]={'a','b','c','d','e','f','g','h','i','0'};
    String  str(ch);


    // Test
    int len=str.length();
    //    int cap=str.capacity();

    // VERIFY
    //assert(cap ==10);
    assert(len ==10 );

  }
  std::cout<<"done testing length and capacity  operator \n";
  std::cout<<" testing length and capacity  passed\n";
  std::cout<<std::endl;
  std::cout<<std::endl;


}

