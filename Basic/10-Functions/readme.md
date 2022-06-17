<h1 align="center" style="text-decoration:underline;color:red;">
    <img style="vertical-align:middle;" src="https://media.giphy.com/media/SUDr9512mOzZrAbMcv/giphy.gif" height="38"/> 
    Functions
    <img style="transform:scaleX(-1);vertical-align:middle;" src="https://media.giphy.com/media/SUDr9512mOzZrAbMcv/giphy.gif" height="38"/>
</h1>

---

<h2 align="center" style="color:purple;">EXPLANATION</h2>

---

## `CREATE A FUNCTION`

```cpp
void myFunction() {               // Declaration
  cout << "I just got executed!"; // Body
}
```

> You should use prototypes of function declarations above the main function.
>
> You can call the function with the syntax: myFunction();

## `PARAMETERS AND ARGUMENT`

```cpp
void functionName(parameter1, parameter2, parameter3) {
    // Code to be executed
}
```  

> Let's see an example below.

```cpp
// fname is parameter
void myFunction(string fname) {
    cout << fname << "\n";  
}

int main() {
    // Juan and Martin are arguments
    myFunction("Juan");   // Outputs Juan
    myFunction("Martin"); // Outputs Martin
    return 0;
}
```

## `DEFAULT PARAMETER VALUE`

```cpp
void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}

// Outputs
// Sweden
// India
// Norway
// USA
```

> Using default parameter value when you call the function without passing any arguments, it uses
> the default value.

## `PASS BY REFERENCE`

```cpp
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}
```

> When you want a reference parameter you can use the prefix & in the selected parameter.

## `FUNCTION OVERLOADING`

```cpp
int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)
```

> With function overloading, multiple functions can have the same name with 
> different parameters.

---
---
<a href="https://www.w3schools.com" target="_blank">Source</a>

