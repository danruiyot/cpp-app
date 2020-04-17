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
    char x='A';
    String  str(x);

    // VERIFY
    assert(str == 'A');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    char x=';';
    String  str(x);

    // VERIFY
       assert(str == ';');
       std::cout<<str;

  }
 {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    //  char x=';';
    String  str('m');

    // VERIFY
    assert(str ==String('m'));
    assert(str== 'm');
}


    std::cout<<"done testing char  constructor\n";
    std::cout<<"testing char  constructor passed\n";
    std::cout<<std::endl;
    std::cout<<std::endl;

}
