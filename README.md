`++P->x` increments x. This is understood since `->` is higher in precedene than `++`.
An array of pointers and an array of struct and arrays are declared analogously

Compile time unary operator `sizeof object` `sizeof(type)` where object can be struct, array, variable

`typedef int Length` 

## union 

Declared like struct, but is one variable that can store one of several types. It is accessed with . or -> operator, initized with type of first member specified in defintion of union 