/*
 * PCG Random Number Generation for C.
 *
 * Copyright 2014 Melissa O'Neill <oneill@pcg-random.org>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * For additional information about the PCG random number generation scheme,
 * including its license and other licensing options, visit
 *
 *     http://www.pcg-random.org
 */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "entropy.h"                    // Wrapper around /dev/random

XX_PREDECLS

int main(int argc, char** argv)
{
    // Read command-line options
     
    int rounds = 1;
    bool nondeterministic_seed = false;
    
    ++argv; --argc;
    if (argc > 0 && strcmp(argv[0], "-r") == 0) {
         nondeterministic_seed = false;
         ++argv; --argc;
    }
    if (argc > 0) {
         rounds = atoi(argv[0]);
    }
    
    // In this version of the code, we'll use a local rng, rather than the
    // global one.
    
    XX_RAND_DECL
    
    // You should *always* seed the RNG.  The usual time to do it is the
    // point in time when you create RNG (typically at the beginning of the
    // program).
    //
    // XX_SRANDOM_R takes two YY-bit constants (the initial state, and the
    // rng sequence selector; rngs with different sequence selectors will
    // *never* have random sequences that coincide, at all) - the code below 
    // shows three possible ways to do so.

    if (nondeterministic_seed) {
        // Seed with external entropy

    } else {
        // Seed with a fixed constant
        
        XX_SRANDOM(XX_SRANDOM_SEEDCONSTS);
    }
    
    printf(XX_INFO);

    // File pointer
    FILE *file;

    // Open file in write mode
    file = fopen("output1.txt", "w");

    // Check if file was successfully opened
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
 
    for (int round = 1; round <= rounds; ++round) {
        for (int i = 0; i < XX_NUMVALUES; ++i) {
            fprintf(file, "%d\n", XX_RANDOM());
        }

        XX_ADVANCE(-XX_NUMVALUES);
        /*for (int i = 0; i < XX_NUMVALUES; ++i) {
            XX_PRINT_RNGVAL(XX_RANDOM());
        }*/
        printf("\n");
    }
    // Close the file
    fclose(file);

    return 0;
}
