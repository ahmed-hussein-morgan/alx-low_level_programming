## **Resources**

**Read or watch**:

[https://www.youtube.com/watch?v=udapt4FGY20&t=130s](https://www.youtube.com/watch?v=udapt4FGY20&t=130s "smartCard-inline")

[https://www.careerdrill.com/blog/coding-interview/choosing-the-right-data-structure-to-solve-problems/](https://www.careerdrill.com/blog/coding-interview/choosing-the-right-data-structure-to-solve-problems/ "smartCard-inline")

[https://www.geeksforgeeks.org/data-structures/](https://www.geeksforgeeks.org/data-structures/ "smartCard-inline")

[https://www.tutorialspoint.com/data_structures_algorithms/data_structures_basics.htm](https://www.tutorialspoint.com/data_structures_algorithms/data_structures_basics.htm "smartCard-inline")

### **General**

- When and why using linked lists vs arrays
- How to build and use linked lists

‌

**Tips**

‌

## _**EXTRA RESOURCES**_

### **General**

Data Structure in C - Neso Academy (linked list start in video 31)

- [https://www.youtube.com/playlist?list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y](https://www.youtube.com/playlist?list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y "smartCard-inline")
- [https://www.youtube.com/watch?v=R9PTBwOzceo&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=32](https://www.youtube.com/watch?v=R9PTBwOzceo&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=32 "smartCard-inline")

‌

### **Mandatory Tasks**

###

### **Advanced Tasks**

`100-first.c => printing before excuting the main() function`

- [https://copyprogramming.com/howto/functions-that-are-executed-before-and-after-main-in-c](https://copyprogramming.com/howto/functions-that-are-executed-before-and-after-main-in-c "smartCard-inline")

## **Requirements**

- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c "‌")
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`

## **More Info**

Please use this data structure for this project:

```
‌/**
  * struct list_s - singly linked list
  * @str: string - (malloc'ed string)
  * @len: length of the string
  * @next: points to the next node
 \*
  * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
