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
