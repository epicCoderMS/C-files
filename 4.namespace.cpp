#include<iostream>

/*
    Namespace = provides a solution for preventing name conflicts in large projects.
                each entity needs a unique name.
                a namespace allows for identically named entitys as long as the namespace are different
    */ 

using namespace std;

namespace first{ // can have different version of same var as long with diff namespace
    int x=1;
}

namespace second{ // you can assign same or different var values with diff namespace
    int x=1;
}

int main()
{
  
   using namespace second;
   int x=0;
   //int x=1;
  std::cout << x <<'\n';
   cout << first::x <<'\n';
   cout << x <<'\n';
    return 0;
}

  