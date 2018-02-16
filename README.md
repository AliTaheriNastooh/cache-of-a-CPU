# cache-of-a-CPU
simulate cache system of a CPU

I use xilinx IDE

we should supposewe have a CPU and a memory for it that our instructions and data are there. As mentioned in course, because of lack of memory speed in comparison, we will need a cache!our system must have this specification:
  - Suppose 4KB memory for RAM
  - 32bit instructions
  - 8*128bit cache
  - System optionally can have Instruction cache
  - Cache type: 2-way set associative
  - Cache replacement policy: LRU (the challenge of project is here!)
  - Miss rate and hit rate must be kept
  - Write policy: write through
  
Note: we must show in our project that checking memory takes a lot more time instead of getting data from cache. Be aware, we are not allowed to use # for delay
