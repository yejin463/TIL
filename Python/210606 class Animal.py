class Animal:
    def __init__(self, number, age):
        self.name = name
        self.age = age

    def eat(self):
        print("냠냠")

        
class Dog(Animal):
    def __init__(self, number, age):
        super().__init__(self, age)

    def bark(self):
        print("왈왈")
        
class Cat(Animal):
    def __init__(self, number, age):
        super().__init__(self, age)

    def bark(self):
        print("야옹")

Animal.eat(Animal)
Dog.bark(Dog)
Cat.bark(Cat)

