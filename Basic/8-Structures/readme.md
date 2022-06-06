<h1 align="center" style="text-decoration:underline;color:red;">
    <img style="vertical-align:middle;" src="https://media.giphy.com/media/SUDr9512mOzZrAbMcv/giphy.gif" height="38"/> 
    Structures
    <img style="transform:scaleX(-1);vertical-align:middle;" src="https://media.giphy.com/media/SUDr9512mOzZrAbMcv/giphy.gif" height="38"/>
</h1>

---

<h2 align="center" style="color:purple;">EXPLANATION</h2>

---

## `CREATE A STRUCTURE`

```cpp
struct {             // Structure declaration
    int myNum;         // Member (int variable)
    string myString;   // Member (string variable)
} myStruct1, myStruct2, myStruct3;       // Structure variables
 ```

## `ACCESING MEMBERS`

```cpp
 // Assign values to members of myStruct1
myStruct1.myNum = 1;
myStruct1.myString = "Hello World!";

// Print members of myStruct1
cout << myStruct1.myNum << "\n";
cout << myStruct1.myString << "\n";
 ```

> You can access members of a structure using . (dot syntax).   

 ## `NAMED STRUCTURES`

```cpp
struct myDataType { // This structure is named "myDataType"
  int myNum;
  string myString;
};

myDataType myVar;   // Declaration of a variable of type myDataType
 ```

> You can treat a structure as a data type with the above syntax. 

 ---
 ---
 <a href="https://www.w3schools.com" target="_blank">Source</a>

