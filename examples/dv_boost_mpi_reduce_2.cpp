/* program to illustrate the use of boost::mpi
 *
 * example taken from boost document
 *
 * Rajeev Singh
 * 2013-04-15
 *
 */

#include <boost/mpi.hpp>
#include <iostream>
#include <string>
#include <functional>
#include <boost/serialization/string.hpp>
namespace mpi = boost::mpi;

int main(int argc, char* argv[])
{
  mpi::environment env(argc, argv);
  mpi::communicator world;

  std::string names[10] = { "zero ", "one ", "two ", "three ",
                            "four ", "five ", "six ", "seven ",
                            "eight ", "nine " };

  std::string result;
  reduce(world,
         world.rank() < 10? names[world.rank()]
                          : std::string("many "),
         result, std::plus<std::string>(), 0);

  if (world.rank() == 0)
    std::cout << "The result is " << result << std::endl;

  return 0;
}
