
//          Copyright Oliver Kowalke 2014.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include <cstdlib>
#include <iostream>

#include <boost/coroutine2/all.hpp>

using namespace boost::coroutines2;

int main() {
    boost::coroutines2::coroutine< void >::pull_type source(
        []( boost::coroutines2::coroutine< void >::push_type & sink) {
            sink();
        });
    source();
    std::cout << "Done" << std::endl;
    return EXIT_SUCCESS;
}
