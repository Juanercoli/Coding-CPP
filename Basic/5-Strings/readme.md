<h1 align="center" style="text-decoration:underline;color:red;">
    <img style="vertical-align:middle;" src="https://media.giphy.com/media/SUDr9512mOzZrAbMcv/giphy.gif" height="38"/> 
    Strings
    <img style="transform:scaleX(-1);vertical-align:middle;" src="https://media.giphy.com/media/SUDr9512mOzZrAbMcv/giphy.gif" height="38"/>
</h1>

---

<h2 align="center" style="color:purple;">EXPLANATION</h2>

---

## `STRINGS`

```cpp
 // Include the string library
 #include <string>
 
 // Create a string variable
 string hello = "Hello";
 ```

> To use the string class you must **include** the string library.

## `CONCATENATION`

```cpp
 string firstName = "Juan";
 string lastName = "Ercoli";
 string fullName = firstName + " " + lastName;

 // Or we can use the append method
 fullName = firstName.append(" ");      // --> "Juan "
 fullName = fullName.append(lastName);  // --> "Juan Ercoli"
 ```

> To use the string class you must include the string library.

## `LENGTH`

```cpp
 string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 cout << txt.length() << '\n';  // --> 26
 cout << txt.size() << '\n';    // --> 26 
 ```

> To get the length of a string you can use the method called length().
>
> **TIP:** You might see some C++ programs that use the size() function to get the length of a string.
> This is just an alias of length(). It is completely up to you if you want to use length() or size().

## `ACCESSING STRINGS`

```cpp
 string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
 cout << txt[0] << '\n';  // --> 'A'
 txt[0] = B;
 cout << txt.[0] << '\n'; // --> 'B' 
 ```

 > You can access the characters in a string by referring to its index number inside square brackets [].
 >
 > Index starts at 0 position.

## `USER INPUT STRINGS`

```cpp
 string fullName;

 // With cin 
cin >> fullName;  // Juan Ercoli
cout << fullName; // --> Juan

 // With getLine
getLine(cin, fullName); // Juan Ercoli
cout << fullName;       // --> Juan Ercoli

 ```

 > If you use cin you should know that cin considers a space as a terminating character.
 >
 > When working with strings the function getLine is often used to get user input.
 > With getLine function you can read an entire line of text.

 ---
 ---
 <a href="https://www.w3schools.com" target="_blank">Source</a>
 >
 <a href="https://www.cplusplus.com/reference/string/string/" target="_blank">More info about string class</a>


