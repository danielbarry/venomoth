# Read Me

## Overview

The program `venomoth` was named after the Pokemon named the same after seeing
it was available on GitHub [1]. The type is *BUG* and *POISON* [2], although
generally we aim not to add any bugs to the system.

### Aims

The following are the aims of the program:

  * A simple, single core 2D tile simulator built for high speed
  * Offers an API to a simple controller for experiments
  * World controller defines the rules of the simulation
  * Outputs defined at different levels of depth

[1] https://cheeaun.github.io/repokemon/?ref=producthunt

[2] http://pokemon.wikia.com/wiki/Venomoth

## Building

The following programs are required to be installed:

  * `cmake` - Allows the program to be built.
  * `g++` - The compiler for the program.

To setup the software, simply type:

    cmake .

Now we are able to build the program to our hearts content:

    make

**NOTE:** The `-jX` parameter defines the number of cores to build with, were
`X` is some number greater than or equal to one - typically the number of cores
on your machine plus one.
