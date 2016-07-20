/**
 * simState.hh
 *
 * Captures the state of the simulation as both the current state and a target
 * state.
 **/

enum SIM_STATE{
  ERROR    = -2,
  UNKNOWN  = -1,
  STARTING =  0,
  RUNNING  =  1,
  STOPPING =  2,
  STOPPED  =  3
};
