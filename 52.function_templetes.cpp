
/*
    function templetes ==> describe what a function looks like.
                           can be used to generate as many overloaded funcs as needed ,
                           each using different data type

                           ex cookie-cutter
                           cookies are the same shape, but the dough can be different 

                           adv: we write function once than it is compatible with diff data types
                                so no need of multiple versions (overloaded functions)
*/
#include<iostream>

 //template <typename T> //function template return one type of data same data type

 /*T max(T x, T y){            
    return (x > y) ? x : y;
}
*/

template <typename T , typename U> //different data type now we can use mixed data type variable
 
auto max(T x, U y){                // auto  keyword used to let compiler to choose datatype
    return (x > y) ? x : y;         //we can generate func templete with this as needed
}

int main()
{
    std::cout << max(10 ,20.111) << '\n';

    return 0;
}

