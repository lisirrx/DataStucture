//
// Created by lisirrx on 16-10-21.
//


#include <vector>
#include "Sort_functions.hpp"

void insertion_sort(std::vector<int> &_array){

    for(int i = 1; i < _array.size(); ++i){
            if(_array.at(i) < _array.at(i - 1)){
                int temp = _array.at(i);
                int j;
                for(j = i; j > 0 && _array.at(j - 1) > temp; --j){
                    _array.at(j) = _array.at(j -1);
            }
                _array.at(j) = temp;
        }
    }
}
