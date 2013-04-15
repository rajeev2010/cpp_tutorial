/* program to illustrate the use of boost::mpi
 *
 * example taken from boost document
 *
 * compile command:
 * mpic++ -I /home/rajeev/software/general/boost_1_53_0
 * dp_boost_mpi_1.cpp -lboost_mpi
 *
 * Rajeev Singh
 * 2013-04-15
 *
 */

#include <boost/mpi/environment.hpp>
#include <boost/mpi/communicator.hpp>
#include <iostream>
namespace mpi = boost::mpi;

int main(int argc, char* argv[])
{
  mpi::environment env(argc, argv);
  mpi::communicator world;
  std::cout << "I am process " << world.rank() << " of " << world.size()
            << "." << std::endl;
  return 0;
}
