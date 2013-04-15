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
#include <vector>
#include <cstdlib>
namespace mpi = boost::mpi;

int main(int argc, char* argv[])
{
  mpi::environment env(argc, argv);
  mpi::communicator world;

  std::srand(time(0) + world.rank());
  int my_number = std::rand();
  if (world.rank() == 0) {
    std::vector<int> all_numbers;
    gather(world, my_number, all_numbers, 0);
    for (int proc = 0; proc < world.size(); ++proc)
      std::cout << "Process #" << proc << " thought of "
                << all_numbers[proc] << std::endl;
  } else {
    gather(world, my_number, 0);
  }

  return 0;
}
