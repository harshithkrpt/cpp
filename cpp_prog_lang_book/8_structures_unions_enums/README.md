# Struct Unions and Enums 

- struct is a sequence of elements (called members) of arbitary types.
- a union is a struct that holds the value of just one of its element at any one time.
- an enum is a set of named constants.
- enum class (scoped enumeration) (scoped and no implicit conversion to other types provided).

## 8.2.5 Type Equivalence 

- two struct are different even when they have the same members

```cpp
	struct S1 {int a;};
	struct S2 {int a;};
	/* 
	S1 and S2 are 2 different types
*/

	S1 x;
	S2 y = x; // error : type mismatch
```
