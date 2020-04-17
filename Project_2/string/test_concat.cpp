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
    char ch='h',ch1='i';
    String  str(ch);
    String str1(ch1);
    String str3=str+str1;
    std::cout<<str3<<"\n";

    // VERIFY
    assert(str3 =="hi" );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    char ch []="hello",ch1[]="world";
    String  str(ch);
    String str1(ch1);
    String str3=str+str1;
    std::cout<<str3<<"\n";
    // VERIFY
    assert(str3 =="helloworld" );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    char ch []="hello",ch1='w';
    String  str(ch);
    String str1(ch1);
    String str3=str;
    str3=str3+'w';
    std::cout<<str3<<"\n";
    // VERIFY
    assert(str3 =="hellow" );
  }

  std::cout<<"done testing concatination operator \n";
  std::cout<<" testing  concatination passed\n";
  std::cout<<std::endl;
  std::cout<<std::endl;

}

