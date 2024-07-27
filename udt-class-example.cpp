// udt-class-example.cpp

// i don't understand most of the code i found and used in this file
// i know how i would accomplish this in python, so i scrubbed
// stackoverflow etc. to find how to do it in c++
// it's not so bad... i was essentially doing the same thing when
// i was learning python... use code i had no clue how it worked
// you eventually learn it

#include <tuple>
#include <iostream>


// define a class template with "variadic" templates
// what the heck is variadic?
// fold expressions are being used... need to study this
// this seems so much easier in python using *args and **kwargs
template <typename... Args>
class Automobile
{
    private:
        // declare a tuple of the template arguments
        std::tuple<Args...> arguments;

    public:
        // constructor to initialize arguments
        Automobile(Args... args) : arguments(std::make_tuple(args...)) {}

        // print automobile details
        // std::index_sequence_for<Args...> is a compile time sequence of integers
        // need to study this
        void print()
        {
            printHelper(std::index_sequence_for<Args...>{});
        }

    private:
        // define the printHelper function
        // i wouldn't have thought about a "helper function"
        // i would have tried to manually interate through the tuple
        // this will iterate through the tuple of arguments
        // then the print() method will print them
        // this method will also use an UDT so it can accept
        // a variable number of arguments
        // need to study up on unsigned integral
        // so much more to learn when compared to python
        // template <std::size_t... Is>
        // "Is" is used as convention for "index sequence"
        // i used my own variable to make it distinct
        template <std::size_t... IndexSequence>
        void printHelper(std::index_sequence<IndexSequence...>)
        {
            // print arguments
            // not sure i understand this syntax
            ( (std::cout << std::get<IndexSequence>(arguments) << " "), ... );
            
            std::cout << std::endl;
        }
};


int main()
{
    // create car class object
    Automobile<std::string, std::string, int> car1("Honda", "Civic", 2021);
    // print car details
    car1.print();

    Automobile<std::string, std::string, int> car2("Toyota", "Camry", 2008);
    car2.print();

    Automobile<std::string, std::string, int, double> truck1("Ford", "F150", 2018, 53.3);
    truck1.print();

    return 0;
}