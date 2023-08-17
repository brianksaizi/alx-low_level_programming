# 0x17. C - Doubly Linked Lists Project

![Doubly Linked List](doubly_linked_list.png)

## Resources 📚

Read or watch:

- [What is a Doubly Linked List](https://en.wikipedia.org/wiki/Doubly_linked_list)

## Learning Objectives 🚀

By the end of this project, you will be able to explain to anyone, without the need for external assistance:

### General

- Understand what a doubly linked list is
- How to use doubly linked lists effectively
- Develop the skill to find appropriate sources of information independently

## Data Structure 📝

We will be using the following data structure for this project:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
