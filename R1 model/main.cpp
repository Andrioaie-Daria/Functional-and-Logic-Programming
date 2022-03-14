#include "lista.h"
#include <iostream>


int main()
{
   Lista l;
   l=creare();
   int lcm = lowestCommonMultiple(l._prim);
   std::cout<<"The lowest common multiple is: ";
   std::cout<<lcm<<std::endl;

    std::cout<<"The list is: ";
    tipar(l);

    substituteOccurrences(l._prim, 3, 10);
    std::cout<<"The modified list is: ";
    tipar(l);

}
