<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<h1>Get Next Line</h1>

<h2>Overview</h2>
<p>
    The <strong>Get Next Line</strong> project is designed to read a line from a file descriptor one line at a time. 
    It allows for repeated calls to retrieve lines sequentially from a text file or standard input, 
    returning the lines with their terminating newline character, unless the end of the file is reached without one.
</p>

<h2>Table of Contents</h2>
<ul>
    <li><a href="#function-prototype">Function Prototype</a></li>
    <li><a href="#file-structure">File Structure</a></li>
    <li><a href="#functionality">Functionality</a></li>
    <li><a href="#parameters">Parameters</a></li>
    <li><a href="#return-values">Return Values</a></li>
    <li><a href="#external-functions">External Functions</a></li>
    <li><a href="#compilation-instructions">Compilation Instructions</a></li>
    <li><a href="#buffer-size-handling">Buffer Size Handling</a></li>
    <li><a href="#important-notes">Important Notes</a></li>
    <li><a href="#license">License</a></li>
</ul>

<h2 id="function-prototype">Function Prototype</h2>
<pre><code>char *get_next_line(int fd);</code></pre>

<h2 id="file-structure">File Structure</h2>
<ul>
    <li><code>get_next_line.c</code>: Contains the implementation of the <code>get_next_line</code> function.</li>
    <li><code>get_next_line_utils.c</code>: Contains helper functions used by <code>get_next_line</code>.</li>
    <li><code>get_next_line.h</code>: Header file that declares the <code>get_next_line</code> function and any necessary utility function prototypes.</li>
</ul>

<h2 id="functionality">Functionality</h2>
<ul>
    <li>The <code>get_next_line</code> function reads a line from a file descriptor.</li>
    <li>It allows for reading from both files and standard input.</li>
    <li>Repeated calls to <code>get_next_line</code> return subsequent lines until the end of the file is reached.</li>
    <li>If an error occurs or there are no more lines to read, the function returns <code>NULL</code>.</li>
</ul>

<h2 id="parameters">Parameters</h2>
<ul>
    <li><code>fd</code>: The file descriptor to read from. This can be a file opened with <code>open()</code> or the standard input (stdin).</li>
</ul>

<h2 id="return-values">Return Values</h2>
<ul>
    <li>Returns a pointer to the line read (including the terminating newline character).</li>
    <li>Returns <code>NULL</code> if there is nothing else to read or if an error occurred.</li>
</ul>

<h2 id="external-functions">External Functions</h2>
<p>The implementation relies on the following external functions:</p>
<ul>
    <li><code>read</code>: To read data from the file descriptor.</li>
    <li><code>malloc</code>: To allocate memory for the line buffer.</li>
    <li><code>free</code>: To deallocate memory when no longer needed.</li>
</ul>

<h2 id="compilation-instructions">Compilation Instructions</h2>
<p>To compile the project, use the following command, adjusting the buffer size as needed:</p>
<pre><code>cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c -o get_next_line</code></pre>
<p>You can modify the <code>BUFFER_SIZE</code> parameter to test different scenarios.</p>

<h2 id="buffer-size-handling">Buffer Size Handling</h2>
<p>The <code>BUFFER_SIZE</code> can be defined during compilation and must be tested with various values (e.g., 1, 42, 9999, 10000000). 
The function should efficiently handle different buffer sizes while adhering to the constraints:</p>
<ul>
    <li>Read as little as possible each time <code>get_next_line</code> is called.</li>
    <li>Do not read the entire file at once.</li>
    <li>Ensure proper handling of different buffer sizes to avoid undefined behavior.</li>
</ul>

<h2 id="important-notes">Important Notes</h2>
<ul>
    <li>The returned line should include the terminating newline character unless the end of the file is reached without one.</li>
    <li>The function has undefined behavior if the file changes before reaching the end or if a binary file is read.</li>
    <li><strong>Forbidden</strong>: Using any global variables, the <code>libft</code>, or <code>lseek()</code> is not allowed.</li>
    <li>For those who want to test the implementation, there are ready-made tests available in the <code>test</code> folder.</li>
</ul>

</body>
</html>
