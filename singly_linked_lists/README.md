<h1>Learning singly linked lists.</h1>
Structure data for the exercises:
<pre><code>
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
</code></pre>
<p><b>Task 0</b> - Write a function that prints all the elements of a list_t.<br>Return the number of nodes and if str is NULL, print [0] (nil).</p>
<p><b>Task 1</b> - Write a function that returns the number of elements in a linked list_t list.</p>
<p><b>Task 2</b> -Write a function that adds a new node at the beginning of a list_t list.<br>
Return the address of the new element</p>
<p><b>Task 3</b> - Write a function that adds a new node at the end of a list_t list.</p>
<p><b>Task 4</b> - Write a function that frees a list_t list.</p>
