char words = "String literal"
int x;		// declaration, introduces a name into the program
int y = 1; int z {1}; int z = {1};		// initialization
auto z = 1.2;		// not explicitly mentioned type

constexpr double value = 1.4*square(var);		// var must be a constant
const double value = 1.4*square(var);		// var can be mutable or constatnt
constexpr double func_name(double x) { return x * x; }

sizeof(int);		// the size of type is implementation-defined

// LOOP
switch
for (auto i: arr_name){;}		// range-for-statement, for each i in arr_name, copy
for (auto& i: arr_name){++x;}		// each i just refer to an element in arr_name

// ARRAY
char v[6];		// array declaration

// POINTER
char *p;		// pointer to char declaration
int *p = nullptr;		// null pointer
char *p = &arr_name[3];		// pointer to arr_name fourth element

// REFERENCE cannot be made to refer to a different obj after its init
char &c;		// reference of type char


/*** ABSTRACTION MECHANISM AND DATA STRUCTURES ***/
// STRUCTURES
struct Vector {
	int size; double *elements;
}
void vector_init(Vector& v, int i) {		// pass v by non-const reference, func can modify passed vector
	v.elements = new double[i]; v.size = i;
}

// CLASSES


/*** MEMORY MANAGEMENT ***/
// FREE STORE = DYNAMIC MEM = HEAP
