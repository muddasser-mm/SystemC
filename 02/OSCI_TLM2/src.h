#ifndef _SRC_H_
#define _SRC_H_

#define SC_INCLUDE_DYNAMIC_PROCESSES
#include <systemc>
#include <tlm.h>

class src_unit : sc_core::sc_module, tlm::tlm_bw_transport_if<> {
public:
  SC_CTOR(src_unit) {
    // register SystemC threads
    SC_THREAD(generate);
    init_socket.bind(*this);
  }


  tlm::tlm_initiator_socket<> init_socket;

  
  void generate();

}; // END SC_MODULE "src_unit"

#endif

