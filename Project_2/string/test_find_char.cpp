//  String class test program
//
//  Tests: XXX
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//=========================================================================
int main(){
{
String one ="abcde";
char two ='d';

 int result = one.findch(0, two);
           //std::cout << "FindChar Result: " << result << std::endl;
         assert(result == 3);
       }

 {
           String one = "abcde";
           char two = 'd';

 int result = one.findch(3, two);
           //std::cout << "FindChar Result: " << result << std::endl;

           assert(result == 3);

       }

       {
           String one = "abcde";
           char two = 'c';

 int result = one.findch(0, two);
           //std::cout << "FindChar Result: " << result << std::endl;

           assert(result == 2);
       }
       {
           String one = "abcde1234";
           char two = '3';
 int result = one.findch(0, two);
          // std::cout << "THISFindChar Result: " << result << std::endl;

           assert(result == 7);

       }


       {
           String one = "bcde1234";
             //char two = 'a';

 int result = one.findch(0, 'a');
           //std::cout << "THISFindChar Result: " << result << std::endl;

 assert(result == -1);
 }



 {
 String one = "hello-world-!";
           //char two = 'a';

 int result = one.findch(0, '-');
// int resultTwo = one.findch(result + 1, '-');
           //std::cout << "FindChar Result: " << result << std::endl;
           //std::cout << "FindChar Result2: " << resultTwo << std::endl;
           assert(result == 5);

 }
 {
           String one = "we rtyuiop012345674gregdfhdhr5456sfsetsesestsdfdsfsdfsdfsdfs";
           //char two = 'a';

 int result = one.findch(0, 'a');
           //std::cout << "THISFindChar Result: " << result << std::endl;

 assert(result == -1);

 }
 std::cout << "Done Testing FindChar" << std::endl; 
}

