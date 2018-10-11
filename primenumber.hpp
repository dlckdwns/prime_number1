//
// Created by Lee on 2018-10-11.
//

#ifndef PRIME_NUMBER1_PRIMENUMBER_HPP
#define PRIME_NUMBER1_PRIMENUMBER_HPP

#include <iostream>
#include <vector>

using namespace std;

const vector<int> primenumber(const int &N)

    {
        int c ;
        vector<int> prime= {2,3,5,7};
        for ( c=10; c<= N; ++c )
        {
            unsigned int j=0;
            unsigned int i=0;

            while( j == 0 && i < prime.size()  )
            {

                if(c%prime[i]==0)
                j=1;
                else i++;
            }
            if(i==prime.size())
            {
                prime.push_back( c);
            }
        }



        return prime;
    }

#endif //PRIME_NUMBER1_PRIMENUMBER_HPP
