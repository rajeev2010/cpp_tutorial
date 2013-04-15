/* program to illustrate the use of boost::python
 *
 * example taken from boost document
 *
 * compile command:
 *  g++ -shared -fPIC -o a.so dx_boost_python_exposing_classes.cpp -I
 *  /usr/include/python2.7 -lpython2.7 -lboost_python
 *
 *
 * Rajeev Singh
 * 2013-04-15
 *
 */

#include <boost/python.hpp>
using namespace boost::python;

struct World
{
    void set(std::string msg) { this->msg = msg; }
    std::string greet() { return msg; }
    std::string msg;
};

BOOST_PYTHON_MODULE(a)
{
    class_<World>("World")
        .def("greet", &World::greet)
        .def("set", &World::set)
    ;
}

