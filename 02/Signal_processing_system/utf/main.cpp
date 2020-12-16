#define SC_INCLUDE_DYNAMIC_PROCESSES
#include <systemc>
#include <tlm.h>

#include "src.h"
#include "trans.h"
#include "dst.h"

using namespace sc_core;

int sc_main(int argc, char* argv[]) {

  // instantiate all units
  src_unit    source("source");
  trans_unit  transform("transform");
  dst_unit    destination("destination");

  // <-- enter code to connect the units here

  // start the calculation
  sc_start();

  return 0;

} // END MAIN

