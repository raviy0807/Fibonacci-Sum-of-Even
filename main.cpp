#include <iostream>
#include <iterator>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <boost/multiprecision/float128.hpp>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;


class Fibonacci{
    cpp_int m_previousEven;
    cpp_int m_currentEven;
    cpp_int m_nextEven;

    cpp_int even_sum(int limit) {
        
        return sum;
    }

public:
    Fibonacci(){
        m_previousEven = 0;
        m_currentEven = 2;
    }

    cpp_int get_even_sum(int limit){
        
        return even_sum(m_totalEvenNumber);
    }

};


int main()
{
    Fibonacci obj;
    int m_input;
    
    return 0;
}
