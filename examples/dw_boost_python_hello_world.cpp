/* program to illustrate the use of boost::python
 *
 * example taken from boost document
 *
 * compile command:
 *  g++ -shared -fPIC -o a.so dw_boost_python_hello_world.cpp -I
 *  /usr/include/python2.7 -lpython2.7 -lboost_python
 *
 * Rajeev Singh
 * 2013-04-15
 *
 */

#include <Python.h>
#include <boost/python.hpp>

char const* greet()
{
   return "hello, world";
}

BOOST_PYTHON_MODULE(a)
{
    using namespace boost::python;
    def("greet", greet);
}
