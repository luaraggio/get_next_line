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
    This project reads a line from a file descriptor one line at a time. 
    It allows for repeated calls to retrieve lines sequentially from a text file or standard input, 
    returning the lines with their terminating newline character, unless the end of the file is reached without one.
</p>
<h2 ">Compilation</h2>
<pre><code>cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c -o get_next_line</code></pre>
<p>You can modify the <code>BUFFER_SIZE</code> parameter to test different scenarios during compilation.</p>
