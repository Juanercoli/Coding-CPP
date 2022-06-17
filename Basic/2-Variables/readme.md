<h1 align="center" style="text-decoration:underline;color:red;">
    <img style="vertical-align:middle;" src="https://media.giphy.com/media/SUDr9512mOzZrAbMcv/giphy.gif" height="38"/> 
    Variables
    <img style="transform:scaleX(-1);vertical-align:middle;" src="https://media.giphy.com/media/SUDr9512mOzZrAbMcv/giphy.gif" height="38"/>
</h1>

---

<h2 align="center" style="color:purple;">EXPLANATION</h2>

---

## `DECLARATION AND ASSIGNATION`

```cpp
type variableName = value;
```

> Following the syntax you can declare a variable replacing **type** with one of C++ types, and **variableName** with the name of the variable. The **equal** sign is used to assign values to the variable.

## `BASIC DATA TYPES`

<table align="center">
    <tr>
        <td>DATA TYPE</td>
        <td>SIZE</td>
        <td>DESCRIPTION</td>
    </tr>
    <tr>
        <td>bool</td>
        <td>1 byte</td>
        <td>Stores a true or false value</td>
    </tr>
    <tr>
        <td>char</td>
        <td>1 byte</td>
        <td>Stores a single ASCII value</td>
    </tr>
    <tr>
        <td>int</td>
        <td>2 or 4 bytes</td>
        <td>Stores a whole number, without decimals</td>
    </tr>
    <tr>
        <td>float</td>
        <td>4 bytes</td>
        <td>Stores a fractional number, containing one or more decimals. Sufficient for storing 7 decimal digits</td>
    </tr>
    <tr>
        <td>double</td>
        <td>8 bytes</td>
        <td>Stores a fractional number, containing one or more decimals. Sufficient for storing 15 decimal digits</td>
    </tr>
</table>



> These are the basic data types that we can find in c++.

## `IDENTIFIERS`

```cpp
// Good
int minutesPerHour = 60;

// OK, but not so easy to understand what m actually is
int m = 60;
```

> All C++ variables must be identified with  **unique** names. these unique names are called **identifiers**. 
>
> ***Note:*** it is recommended to use **descriptive** names in order to create understandable and maintanable code.

> The general rules for naming variables are:
>
> - Names can contain letters, digits and underscores.
> - Names **must** begin with a letter or an underscore.
> - Names are **case sensitive** (myVar and myvar are different variables).
> - Names cannot contain whitespaces or special characters like !, #, %, etc.
> - Reserved words such as int cannot be used as names.

## `CONSTANTS`

```cpp
const int w = 15;
```

> const is a keyword used to make variables unchangeable and read-only. These are values that are unlikely to change.

---
---
<a href="https://www.w3schools.com" target="_blank">Source</a>


