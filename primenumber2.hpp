//
// Created by Lee on 2018-10-11.
//

#ifndef PRIME_NUMBER1_PRIMENUMBER2_HPP
#define PRIME_NUMBER1_PRIMENUMBER2_HPP
//

#include <iostream>
#include <vector>

using namespace std;

 int primenumber2(const int &num) {

    int *arr;

    arr = (int *)malloc(num*sizeof(int)  );

    int i ;





    for (i = 2; i <= num; i++) {

        arr[i] = i;

    }



    for (i = 2; i <= sqrt(num); i++) {

        if (arr[i] == 0)

            continue;

        for (int j = i + i; j <= num; j += i) {

            arr[j] = 0;

        }

    }





    return 0;
}





#endif //PRIME_NUMBER1_PRIMENUMBER2_HPP
