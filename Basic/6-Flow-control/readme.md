<h1 align="center" style="text-decoration:underline;color:red;">
    <img style="vertical-align:middle;" src="https://media.giphy.com/media/SUDr9512mOzZrAbMcv/giphy.gif" height="38"/> 
    Flow control
    <img style="transform:scaleX(-1);vertical-align:middle;" src="https://media.giphy.com/media/SUDr9512mOzZrAbMcv/giphy.gif" height="38"/>
</h1>

---

<h2 align="center" style="color:purple;">EXPLANATION</h2>

---

## `IF`

```cpp
 if (condition1) {
    // block of code to be executed if condition1 is true
} else if (condition2) {
    // block of code to be executed if the condition1 is false and condition2 is true
} else {
    // block of code to be executed if the condition1 is false and condition2 is false
}
```

## `TERNARY OPERATOR`

```cpp
 variable = (condition) ? expressionTrue : expressionFalse;
 ```
 
 > This is a short-hand if else.

## `SWITCH`

```cpp
switch(expression) {
    case x:
        // code block
        break;
    case y:
        // code block
        break;
    default:
        // code block
}
```

## `WHILE LOOP`

```cpp
while (condition) {
    // code block to be executed
}
```

## `DO/WHILE LOOP`

```cpp
do {
    // code block to be executed
} while (condition);
```

## `FOR LOOP`

```cpp
for (statement 1; statement 2; statement 3) {
    // code block to be executed
}
```

> - Statement 1 is executed **one time** before the execution of the block.
> - Statement 2 defines the condition for executing the code block.
> - Statement 3 is executed **every time** after the code block has been executed.

## `BREAK`

```cpp
for (int i = 0; i < 10; i++) {
    if (i == 4) {
        break;
    }
    cout << i << "\n";
} 
```

> The **break** statement can be used to jump out of a loop.
> 
> In this example jumps out of the loop when i is equal to 4.

## `CONTINUE`

```cpp
for (int i = 0; i < 10; i++) {
    if (i == 4) {
        continue;
    }
    cout << i << "\n";
} 
```

> The **continue** statement breaks one iteration (in the loop), if a
> specified condition occurs, and continues with the next iteration
> in the loop.
>
> In this example skips the iteration when i is equal to 4.

---
---
<a href="https://www.w3schools.com" target="_blank">Source</a>

