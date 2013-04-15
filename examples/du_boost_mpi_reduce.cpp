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
#include <cstdlib>
namespace mpi = boost::mpi;

int main(int argc, char* argv[])
{
  mpi::environment env(argc, argv);
  mpi::communicator world;

  std::srand(time(0) + world.rank());
  int my_number = std::rand();

  if (world.rank() == 0) {
    int minimum;
    reduce(world, my_number, minimum, mpi::minimum<int>(), 0);
    std::cout << "The minimum value is " << minimum << std::endl;
  } else {
    reduce(world, my_number, mpi::minimum<int>(), 0);
  }

  return 0;
}
