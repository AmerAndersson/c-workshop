# Dynamic memory

## Object Storage Duration Types

``Automatic``: object lifetime tied to start & end of { … } block scopes local variables, function - parameters
``Dynamic``:   object lifetime controlled with special instructions objects that can be created/- destroyed on demand and independent of block scopes
``Thread``: object lifetime tied to start & end of a thread per-thread storage
``Static``: object lifetime tied to start & end of the program

## In Practice: Actual Memory Handling

- Practical realizations of C++'s memory model
are constrained by features & limitations of the target platform (CPU/memory architecture, operating system, compiler)
need to fix choices left open by the C++ standard, e.g., number of bits in a byte (8 on most platforms)
need to support object storage duration/lifetime schemes described by the C++ standard (automatic, dynamic, thread, static)

## Common Solution: Dedicated Memory Partitions For Automatic/Dynamic Storage Durations

|-----|  ``HEAP`` (also called Free Store)
|-----|
|-----|   : used for objects of dynamic storage duration, e.g. the contents of a std::vector
|-----|   : big, can be used for bulk storage (most of main memory)
|-----|   : possible to allocate & deallocate any object on demand
|-----|   : (de-)allocations in no particular order ⇒ fragmentation
|-----|   : slow allocation: need to find contiguous unoccupied space for new objects
|-----|

|-----|  ``STACK``  
|-----|   : used for objects of automatic storage duration: local variables, function parameters
|-----|   : small (usually only a few MB)
|-----|   : fast allocation: new objects are always put on top
|-----|   : objects de-allocated in reverse order of their creation
|-----|   : can't de-allocate objects below the topmost (= newest)
|-----|
