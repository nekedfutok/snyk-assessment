## 1. Explain the difference between a stack and a queue. Provide real life examples of real-life scenarios where each of them are used appropriately.

The main difference between the two data structures is that stacks are LIFO (Last In First Out), while queues are FIFO (First In First Out).

You can think of stacks as a stack of plates, where you can only put a plate on top of the other plates and you can only remove the one on the top.

A queue can be seen as a line at a supermarket, where the first person to get in line gets served first.

#### Real-life scenarios where stacks are used:
- Undo/redo operations in text editors, browsers, etc.
- Expression evaluation using Reverse Polish Notation
- Call stack

#### Real-life scenarios where queues are used:
- Printer queues
- Breadth-first search
- Handling multiple keystrokes in the order they were received

## 2. What is the difference between an array and a linked list? Provide advantages and disadvantages of each data structure.

Arrays and linked lists are both used to store collections of elements, but their implementations differ.

#### Arrays:
###### Advantages:
- Elements can be accessed by their index in O(1) time
- Ease of use
- Insertion and deletion to the end of the array in O(1) time
###### Disadvantages:
- Insertion and deletion generally is in O(n) time
- Inefficient when working with an unknown number of elements
#### Linked lists:
###### Advantages:
- Efficient insertion and deletion
- Efficient when working with an unknown number of elements
###### Disadvantages:
- Element accesses and searching is done in O(n) time
- More difficult to use than arrays

## 3. What is HTTP? How is it different from HTTPS?
HTTP (HyperText Transfer Protocol) is a communication standard for transmitting data between browsers and servers.

The S in HTTPS stands for "secure", so the main difference between the two is security. Data transfer using HTTP happens in plain text, so it can be accessed by anyone between the browser and the server. To prevent this, HTTPS uses encryption. A disadvantage of HTTPS is it being slower than HTTP, due to the need of exchanging encryption keys between the browser and server.

## 4. Can you give some examples of common HTTP response codes?
HTTP response codes are values returned by the server to the browser in response to a request made by the client. It is similar to how the return value of a program is used by the operating system.

- 404 Not Found: this is probably the most well-known HTTP response code. It means that the requested resource does not exist on the server.
- 200 OK: the response for a successful request.
- 400 Bad Request: a client error, usually caused by invalid syntax or parameters in the request
- 500 Internal Server Error: a server error, caused by something going wrong on the server's end
- 503 Service Unavailable: the server is temporarily unable to handle the request

## 5. What is the difference between authorization and authentication?
#### Authentication:
- The process of verifying the identity of the user trying to access the resource.
- This is usually done by signing in with credentials such as a username and password.
- To put it simply, authentication can be thought of as "signing in".
#### Authorization:
- After authentication, it is the process of verifying if the user has permission to access the resource.
- A simple explanation: authorization is determining who is allowed to do what.

## 6. How would you explain to a 5-year-old how the WWW works?
Imagine that there are a lot of your toys in your mother's room. You ask your mom for a toy, she goes into her room, finds the toy and gives it to you. This is what happens when you open a website on the internet. The server - your mother - sends your browser the page you wanted to view.