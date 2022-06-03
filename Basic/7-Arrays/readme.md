<h1 align="center" style="text-decoration:underline;color:red;">
    <img style="vertical-align:middle;" src="https://media.giphy.com/media/SUDr9512mOzZrAbMcv/giphy.gif" height="38"/> 
    Arrays
    <img style="transform:scaleX(-1);vertical-align:middle;" src="https://media.giphy.com/media/SUDr9512mOzZrAbMcv/giphy.gif" height="38"/>
</h1>

---

<h2 align="center" style="color:purple;">EXPLANATION</h2>

---

## `DECLARATION AND ASSIGNATION`

```cpp
#include <string>

string cars[5] = {"Volvo", "BMW", "Ford", "Mazda"};
 ```

## `ACCESING ELEMENTS`

```cpp
 cars[0] = "LOL";

 // Results in cars == {"LOL", "BMW", "Ford", "Mazda"}
 ```

 ## `LOOP THROUGH ARRAY`

```cpp
for (int i = 0; i < 4; i++) {
  cout << i << ": " << cars[i] << "\n";
}
 ```

 ## `OMIT ARRAY SIZE`

```cpp
std::string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3
 ```

> You can omit array size.
>
> If you want to reserve extra space you can assign a size and assign less elements than size.

 ## `GET ARRAY SIZE`

```cpp
int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(int);
cout << getArrayLength;
 ```

 > You can get array size by getting the size of the array in bytes and then dividing by the size of the array's type.

 ## `MULTIDIMENSIONAL ARRAY`

```cpp
 std::string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

std::cout << letters[0][2];  // Outputs "C"
```

> Analogous to one-dimensional array.

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

