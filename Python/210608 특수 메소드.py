class Person:
    def __init__(self, name, age, height):
        self.name = name
        self.age = age
        self.height = height
        
    def __str__(self):
        return "Person설명,  이름은 " + self.name + " 키는 " + str(self.height)

    def __len__(self):
        return self.height

    def __getitem__(self, key):
        if key == "name":
            return self.name
        if key == "age":
            return self.age
        return None

p = Person("예진", 18, 162)
print(p)
print(len(p))
print(p['age'])
print(p['unknown'])
