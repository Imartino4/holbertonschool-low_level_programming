<h1>Doubly Linked ListsProject.</h1>

<p><b>Task 0</b>

Write a function that prints all the elements of a dlistint_t list.

Prototype: size_t print_dlistint(const dlistint_t *h);<br>
Return: the number of nodes<br>
Format: see example<br> </p>

<p><b>Task 1</b>


Write a function that returns the number of elements in a linked dlistint_t list.

Prototype: size_t dlistint_len(const dlistint_t *h);</p>

<p><b>Task 2</b>

Write a function that adds a new node at the beginning of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);<br>
Return: the address of the new element, or NULL if it failed<br></p>

<p><b>Task 3</b>

Write a function that adds a new node at the end of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);<br>
Return: the address of the new element, or NULL if it failed<br></p>

<p><b>Task 4</b>

Write a function that frees a dlistint_t list.<br>

Prototype: void free_dlistint(dlistint_t *head);<br></p>

<p><b>Task 5</b>

Write a function that returns the nth node of a dlistint_t linked list.

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
where index is the index of the node, starting from 0<br>
if the node does not exist, return NULL<br></p>

<p><b>Task 6</b>

Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

Prototype: int sum_dlistint(dlistint_t *head);<br>
if the list is empty, return 0<br></p>

<p><b>Task 7</b>

Write a function that inserts a new node at a given position.

Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);<br>
where idx is the index of the list where the new node should be added. Index starts at 0<br>
Returns: the address of the new node, or NULL if it failed<br>
if it is not possible to add the new node at index idx, do not add the new node and return NULL<br></p>

<p><b>Task 8</b>

Write a function that deletes the node at index index of a dlistint_t linked list.

Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);<br>
where index is the index of the node that should be deleted. Index starts at 0<br>
Returns: 1 if it succeeded, -1 if it failed<br></p>


