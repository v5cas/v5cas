# 21 plus 58
### A CAS library for use with VexV5 and PROS

***This project is not stale. The CAS will be developed as needed or when Drew gets bored enough to update it.***

## Usage
This project currently has no API as it is empty. Try requesting a feature.

## Requesting Features
To request a feature, create an issue with the request. Alternatively, you can add in the feature yourself, test it, and then submit a pull request. If you choose to do that, thanks.

For stability reasons, when submitting a pull request, try to adhere to the power of 10 rules:

1. No Goto or Recursive code. Stack overflows suck.
2. Loops must check to make sure they don't run indefinitely, or they must have fixed bounds
3. Do not allocate dynamic (heap) memory. Example: don't use std::vector
4. Keep functions compact. They should be no more than 60 lines. If they are longer, make helper functions to take care of repetitive blocks of code within.
5. Use runtime assertions to make sure values are good at the beginning and end of functions. Putting them elsewhere is also nice.
6. Restrict data scope as small as possible; try not to make things use memory when they don't need to.
7. Check the values of non-void returns or cast to void if the function's return is not useful.
8. Avoid using the preprocessor.
9. Don't use function pointers, and pointers should be dereferenced only once.
10. When testing by including in another project, enable all warnings and make them all go away before publishing your request.

Also, do your best to make things as efficient as possible without breaking these rules. If you think something can be made more efficient, tell me via issues or drop a PR. 
