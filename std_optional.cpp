/* std::optional
    header <optional>
    - It manages an optional contained value i.e. a value that may or may not be present
    - Any instance of optional at any given point in time either contains a value or does not contains a value.
    - If it contains a value, the value is guaranteed to be nested with optional object. 

    std::nullopt : used to create any (empty) std::optional
*/


// can be used to return type of function that can be failed

#include <iostream>
#include <optional>
#include <string>

using namespace std;

optional <string> getString(bool valid){
    if(valid)
    return "optional";
    return {};
}

auto getString(int num){
    return num ? optional<string>{"Number String"} : nullopt;
}

int  main(){
    cout << "value of optional is " << getString(true).value_or("empty") <<endl;
    cout << "value of optional is " << getString(false).value_or("empty") <<endl;
    cout << "value of optional is " << getString(1).value_or("empty") <<endl;
    cout << "value of optional is " << getString(0).value_or("empty") <<endl;
    return 0;
}

/* output
value of optional is optional
value of optional is empty
value of optional is Number String
value of optional is empty
*/
