#include <vector>
#include <iostream>
#include <string>
using namespace std;

template <typename element> element* find_address(element *array, int size, element &value);

template <typename element> element* use_sentinel(element *first_address, element *sentinel, element &value);
