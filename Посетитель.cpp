#include <iostream>

class Dog;
class Cat;

class Visitor {
public:
    virtual void visit(Dog* dog) = 0;
    virtual void visit(Cat* cat) = 0;
};

class Animal {
public:
    virtual void accept(Visitor& v) = 0;
};

class Dog : public Animal {
public:
    void accept(Visitor& v) override {
        v.visit(this);
    }
};

class Cat : public Animal {
public:
    void accept(Visitor& v) override {
        v.visit(this);
    }
};

class SoundVisitor : public Visitor {
public:
    void visit(Dog* dog) override {
        std::cout << "Dog is barking" << std::endl;
    }

    void visit(Cat* cat) override {
        std::cout << "Cat is meowing" << std::endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    SoundVisitor soundVisitor;

    dog.accept(soundVisitor);
    cat.accept(soundVisitor);

    return 0;
}