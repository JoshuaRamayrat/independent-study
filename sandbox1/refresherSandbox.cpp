/*
    this is a refresher on the syntax for C/C++
*/
////////////////////////////////////////////////////////////
/////////////// typedef specifier //////////////////////////
////////////////////////////////////////////////////////////

/*
    typedef specifier
        typedef - alias for an otherwise complex type name.

*/

// simple type def
typedef unsigned long ulong;

// same 'type'
unsigned long var1;
ulong var2;

// complex typedef
typedef int int_t, *intp_t, (&fp)(int, ulong), arr_t[10];

// same object type
int var11[10];
arr_t var12;

// common C idiom to avoid having to write struct s
typedef struct {int a; int b;} S, *pS;

pS ps1;
S* ps2;

// error: a storage-class-specifier cannot appear in a typedef declaration
// typedef static unsigned int uint;

// typedef can be used anywhere
long unsigned typedef int long ullong;

/*
    typedef enum

    1) typedef simplifies declaring a variable
    2) enums help you avoid magic numbers
        enums help you map variables to 0, 1, 2, ...
        example:
            enum {
                STOP,
                CAUTION,
                GO
            }

            ^ the above 'enum' is more handy than the following:
            #define STOP    0
            #define CAUTION 1
            #define GO      2
*/

////////////////////////////////////////////////////////////
/////////////// callbacks in C /////////////////////////////
////////////////////////////////////////////////////////////

/*

    callbacks in C
        executable code passed as an argument to other code
        
*/

void func1()
{
    cout << "foo" << endl;
}

void func2(void (*ptr)())
{
    (*ptr) ();
}

int main()
{
    void (*ptr)() = &func1;

    func2(ptr);

    return 0;
}

// callbacks in C++
// interface class

class CallbackInterface
{
    public:
    virtual int callbackFunc(int) = 0;
};

class Callee : public CallbackInterface
{
    public:
    int callbackFunc(int i)
}


/*
    "static const" vs "#define" vs "enum"

    static const is a combination of static and const

    static is a storage specifier. Static determines how long a variable remains in memory. It should be in memory indefinitely while the program is running.

    const is a type qualifier. Expresses information about a value through the type system. The variable does not change in value or does not accept further changes.

    static const - a variable that stays in memory while the program is running and doesn't accept change requests for its value.
*/

static const int foo1 = 1;

/*
    "extern" C makes a C++ function have C linkage.
    client C code can link to the C++ function using a C compatible header file containing your function declaration.
*/

int foo (int arg1, int arg);

// this is actually what it is
extern int foo(int arg1, int arg2);

/*

#pragma once
    for compiler optimization
    for avoiding class views
    allows you to use other forms of header guard coding.
    ARM recommends #ifndef and #define bc it's more portable.

#pragma once is a non-standard preprocessor directive 
for including the corresponding file only once at compilation.
advantages:
    less code
    avoids name clashes
    improves compile speed

*/

#ifndef FILE_FOO
#define FILE_FOO
#pragma once        // optional

//////

#endif

/////////////////////////////////////////////////
/////////////// wrapper functions ///////////////
/////////////////////////////////////////////////

// A wrapper function is a subroutine in a software library
// designed to call another subroutine. 
// They abstract away the details of software implementations.