<h1>C - Hash tables</h1>
<ul>
  <p><b> <li>Task 0: Write a function that creates a hash table. </li></b></p>
<p>
-Prototype: hash_table_t *hash_table_create(unsigned long int size);<br>
 &nbsp;&nbsp;&nbsp;&nbsp;where size is the size of the array<br>
-Returns a pointer to the newly created hash table<br>
-If something went wrong, your function should return NULL<br>
</p>
    <p><b> <li>Task 1: Write a hash function implementing the djb2 algorithm. </li></b></p>
<p>
-Prototype: unsigned long int hash_djb2(const unsigned char *str);<br>
-You are allowed to copy and paste the function from <A HREF="https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8"> HERE </A><br>
</p>
<p><b> <li>Task 2: Write a function that gives you the index of a key. </li></b></p>
<p>
-Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);<br>
 &nbsp;&nbsp;&nbsp;&nbsp;where key is the key<br>
 &nbsp;&nbsp;&nbsp;&nbsp;and size is the size of the array of the hash table<br>
-This function should use the hash_djb2 function that you wrote earlier<br>
-Returns the index at which the key/value pair should be stored in the array of the hash table<br>
-You will have to use this hash function for all the next tasks<br>
</p>
<p><b> <li>Task 3: Write a function that adds an element to the hash table. </li></b></p>
<p>
-Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);<br>
 &nbsp;&nbsp;&nbsp;&nbsp;Where ht is the hash table you want to add or update the key/value to<br>
 &nbsp;&nbsp;&nbsp;&nbsp;key is the key. key can not be an empty string<br>
 &nbsp;&nbsp;&nbsp;&nbsp;and value is the value associated with the key. value must be duplicated. value can be an empty string<br>
-Returns: 1 if it succeeded, 0 otherwise<br>
-In case of collision, add the new node at the beginning of the list<br>
-You will have to use this hash function for all the next tasks<br>
</p>
<p><b> <li>Task 4: Write a function that retrieves a value associated with a key. </li></b></p>
<p>
-Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);<br>
 &nbsp;&nbsp;&nbsp;&nbsp;where ht is the hash table you want to look into<br>
 &nbsp;&nbsp;&nbsp;&nbsp;and key is the key you are looking for<br>
-Returns the value associated with the element, or NULL if key couldn’t be found<br>
</p>
<p><b> <li>Task 5: Write a function that prints a hash table. </li></b></p>
<p>
-Prototype: void hash_table_print(const hash_table_t *ht);<br>
 &nbsp;&nbsp;&nbsp;&nbsp;where ht is the hash table<br>
-You should print the key/value in the order that they appear in the array of hash table<br>
&nbsp;&nbsp;&nbsp;&nbsp;Order: array, list<br>
-Format: see example<br>
-If ht is NULL, don’t print anything<br>
</p>
<p><b> <li>Task 6: Write a function that deletes a hash table. </li></b></p>
<p>
-Prototype: void hash_table_delete(hash_table_t *ht);<br>
 &nbsp;&nbsp;&nbsp;&nbsp;where ht is the hash table<br>
 </p>

