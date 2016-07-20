#include "simState.hh"
#include "controller.cc"
#include "view.cc"
#include "world.cc"

/**
 * sim.hh
 *
 * This class is responsible for handling the simulation environment in
 * general.
 **/
class Sim{
  public :
    /**
     * Sim()
     *
     * The constructor for the simulator class which is responsible for setting
     * up the simulation variables.
     *
     * @param view The view for the simulation. This may be NULL if no view
     * exists.
     * @param world The world model containing the rules of the simulation.
     * @param controllers The controllers to start the simulation with.
     **/
    Sim(View view, World world, Controller** controllers);

    /**
     * ~Sim()
     *
     * The destructor for the simulation class.
     **/
    ~Sim();

    /**
     * run()
     *
     * This method runs the simulation.
     *
     * @param ticks The number of ticks to perform each loop in the run.
     * @return The state the simulation exited on, true is good, false is bad.
     **/
    bool run(long long ticks);

    /**
     * setTargetState()
     *
     * Set the state of the simulation.
     *
     * NOTE: You are setting a target state, meaning that the simulation may
     *       have to transition through multiple states in order to reach your
     *       target state. It has completed this once the current state equals
     *       the target state.
     *
     * @param state The state to be set.
     **/
    void setTargetState(SIM_STATE state);

    /**
     * getTargetState()
     *
     * Get the target state of the simulation. This is the state the simulation
     * is aiming to go into.
     *
     * @return The target state of the simulation.
     **/
    SIM_STATE getTargetState();

    /**
     * getCurrentState()
     *
     * Get the current state of the simulation. This is the state the
     * simulation is currently in.
     *
     * @return The current state of the simulation.
     **/
    SIM_STATE getCurrentState();

  private :

    /**
     * loop()
     *
     * A single loop represents a tick in the simulation environment. This
     * method blocks until it has processed the data it is intended to process.
     *
     * @param ticks The number of ticks to perform before returning.
     * @return The status of the simulation, true if we can continue, false if
     * we should not continue.
     **/
    bool loop(long long ticks);
};
