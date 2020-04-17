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
    const  char A[5]={'A','B','C','D','0'};
    String  str("abcd");
    

    // VERIFY
    //
    // assert(str == "ABCD");
    std::cout<<str;
    //assert(str.capacity()==20);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    // char A[5]={'A','B','C','D','0'};
    String  str("abcd");

    // VERIFY
    assert(str == "abcd");
  }



  std::cout<<"done testing charArray constructor\n";
  std::cout<<" testing charArray constructor passed\n";
  std::cout<<std::endl;
  std::cout<<std::endl;

}
