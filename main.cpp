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
        if(limit == 0){
            return 0;
        }
        cpp_int ef1 = 0, ef2 = 2;
        cpp_int sum = m_previousEven + m_currentEven;
        int count = 0;

        while (count <= limit-2) {
            count++;
            m_nextEven = 4*m_currentEven + m_previousEven;
            m_previousEven = m_currentEven;
            m_currentEven = m_nextEven;
            sum += m_currentEven;
        }

        return sum;
    }

public:
    Fibonacci(){
        m_previousEven = 0;
        m_currentEven = 2;
    }

    cpp_int get_even_sum(int limit){
        int m_totalEvenNumber;
        m_totalEvenNumber = limit / 3;
        return even_sum(m_totalEvenNumber);
    }

};


int main()
{
    Fibonacci obj;
    int m_input;
    std::cout<<"Enter nth number as Limit : ";
    std::cin>> m_input;
    std::cout<<"Sum of Even Number within limit: ";
    std::cout<<obj.get_even_sum(m_input);
    return 0;
}
