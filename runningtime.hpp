//
// Created by Lee on 2018-10-11.
//

#ifndef PRIME_NUMBER1_RUNNINGTIME_HPP
#define PRIME_NUMBER1_RUNNINGTIME_HPP
//

#pragma once

#include <iostream>
#include <chrono>

#include "primenumber.hpp"
#include "primenumber2.hpp"

namespace timing {
    void timing_primenumber() {
        std::chrono::time_point<std::chrono::system_clock> start, stop;

        start = std::chrono::system_clock::now();
        auto f1 = primenumber(100000);
        stop = std::chrono::system_clock::now();

        std::chrono::duration<double> elapsed_seconds = stop - start;
        time_t end_time = std::chrono::system_clock::to_time_t(stop);


        std::cout << "finished computation at " << ctime(&end_time)
                  << "elapsed time: " << elapsed_seconds.count() << "s\n";
    }
    void timing_primenumber2() {
        std::chrono::time_point<std::chrono::system_clock> start, stop;

        start = std::chrono::system_clock::now();
        int f2 = primenumber2(100000);
        stop = std::chrono::system_clock::now();

        std::chrono::duration<double> elapsed_seconds = stop - start;
        time_t end_time = std::chrono::system_clock::to_time_t(stop);


        std::cout << "finished computation at " << ctime(&end_time)
                  << "elapsed time: " << elapsed_seconds.count() << "s\n";
    }
}
#endif //PRIME_NUMBER1_RUNNINGTIME_HPP
