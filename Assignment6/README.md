# Assignment 6

## Author


## Contact
st133061@student.spbu.ru

## Description
Template class 'Wrapper<T>' calss method 'bar(int, std::vector<float>&)' on the object of type 'T'.
Includes two partial specializations:
- 'Wrapper<int>' always returns 'true' from 'foo()'
- 'Wrapper<double>' always returns 'false' from 'foo()'

Three test classes:
- 'Class1': returns 'true' if integer is > 0
- 'Class2': returns 'true' if vector is not empty
- 'Class3': returns 'true' if integer == -1 * vecor.size()

Unit tests implemented with Google Test ('gtest').

## Build
make

## Clean
make clean

## RUN
./test
