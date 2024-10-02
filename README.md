# baremetal-c-utils
Common utilities for Baremetal C programs

## Mem-leak detector
 FOLDER: mem-leak-detector

 This code was taken from,
 https://dev.to/namantam1/a-simple-program-to-detect-memory-leak-in-our-c-program-5c5i

 I merely modified it and give full credit to the creator.

 USAGE: 

 STEP 1) In order to use this code, replace 

    #include <stdlib.h> 
in your application with , 

     #include "mem_leaks.h" 

 OR
 better with

     #ifdef TRACE_MEM_LEAK
       #include "mem_leak.h"
     #else
       #include <stlib.h>      
     #endif

Then you can conditionally compile by passing -DTRACE_MEM_LEAK to gcc command

STEP 2) You can use malloc and free as usual in your code. <br/>
 At the end of the program you can call
 
     print_report()
     
 function. This will give you the line number and function which causes the error.

 You need a large stack size for debugging though . I suggest to debug stack overflows and mem-leaks independently.