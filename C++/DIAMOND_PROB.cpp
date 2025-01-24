/*
PROBLEM:
class A {
public:
    void display() {
        std::cout << "Class A" << std::endl;
    }
};

class B : public A {
};

class C : public A {
};

class D : public B, public C {
};

When D inherits from both B and C, it indirectly inherits A twice. So, D ends up with two copies of A's members. This duplication causes ambiguity when trying to access members from A.
*/
/*
SOLUTION:
Use Virtual Inheritance
To solve the diamond problem, C++ provides virtual inheritance. It ensures that only one copy of the base class (A) is shared in the hierarchy.

How Virtual Inheritance Solves the Problem
1. B and C inherit from A virtually (virtual public A), ensuring only one shared instance of A in D.
2. D inherits this shared copy, avoiding duplication and ambiguity.
*/