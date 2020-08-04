# Data Structure : List

a simple list data structure boiler plate i C.

## How to include it

1. add the `list.c` & `list.h` file to your project directory.
1. modify the list structure in `list.h` and the `push` and `unshift` functions accordingly.
1. add `#include "list.h"` to your main c file.

## How to use it

### list declaration
declare a list :
```C
List *yourList = newList();
```
>Note that you will need to free the list pointer at the end of the program or use the `clearList(yourList)` function documented below.

### list prototypes

#### utilities
* print all the elements of the list : `printList()`

* check if the list is empty : `isEmpty(yourList)` returns a boolean. 

* get the list length : `listLength(yourList)` returns integer.

* clear the list : `clearList()` returns an empty list.
> Note :
> 
> it is important to use `clearList()` to clear the list and not assign a new list dirrectly to avoid memory leaks.

#### add prototypes
* `push(yourList, ...new_element)` appends the element at the end of the list and returns the new list.

* `unshift(yourList, ...new_element)` appends the element at the start of the list and returns the new list.

#### remove prototypes
* `pop(yourList)` removes the last element of the list and returns the new list.
* `shift(yourList)` removes the last element of the list and return the new list.