/*      Fold expressions
    - Fold expressions are a powerful feature that allows you to reduce or 'fold' a parameter pack over a binary operator.
    They were introduced to simplify code that operates on variadic templates and make it more concise and readable.

    1. Unary Right fold : (pack op ...)
    2. Unary Left fold  : (... op pack)
    3. Binary Right fold: (pack op ... op init)
    4. Binary Left fold : (init op ... op init)
*/


template <typename ...Arg>
auto UnaryRightSubFoldOperator(Arg ...arg){
    return (arg - ...);
}

template <typename ...Arg>
auto UnaryLeftSubFoldOperator(Arg ...arg){
    return (... - arg);
}

#include <iostream>

int main(){

    auto unaryRightFoldResult = UnaryRightSubFoldOperator(1, 2, 3, 4, 5);
    std::cout << "Unary Right fold operator results: " << unaryRightFoldResult << std::endl;

    auto unaryLeftFoldResult = UnaryLeftSubFoldOperator(1, 2, 3, 4, 5);
    std::cout << "Unary left fold operator results: " << unaryLeftFoldResult << std::endl;

    return 0;
}

